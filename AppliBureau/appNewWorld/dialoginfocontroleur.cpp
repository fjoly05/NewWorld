#include "dialoginfocontroleur.h"
#include "ui_dialoginfocontroleur.h"
#include <QSqlQuery>
#include <QDebug>

DialogInfoControleur::DialogInfoControleur(QString idCtrler, QString laDate, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogInfoControleur)
{
    ui->setupUi(this);
    lidCtrler=idCtrler;
    maDate=laDate;
    remplirList();
}

DialogInfoControleur::~DialogInfoControleur()
{
    delete ui;
}

void DialogInfoControleur::remplirList()
{
    //remplissage liste
    QString textReq = "select utilisateur.villeU, personnel.nomPers, personnel.prenomPers, visite.libelleVisite ";
    textReq += "from personnel ";
    textReq += "inner join visite on personnel.idPers=visite.gestionnaire ";
    textReq += "inner join ControleProducteur on visite.idVisite=ControleProducteur.idVisite ";
    textReq += "inner join utilisateur on ControleProducteur.idU = utilisateur.idU ";
    textReq += "where visite.controleur = "+lidCtrler+" and visite.dateVisite='"+maDate+"'";


    qDebug()<<textReq;
    QSqlQuery reqDonnantVisites(textReq);
    while (reqDonnantVisites.next())
    {
        //ajoute un item dans la liste en y associant en data l'id
        QListWidgetItem* uneVisite=new QListWidgetItem(reqDonnantVisites.value(0).toString());
        uneVisite->setData(32,reqDonnantVisites.value(1).toString());
        uneVisite->setData(33,reqDonnantVisites.value(2).toString());
        uneVisite->setData(34,reqDonnantVisites.value(3).toString());
        ui->listWidget->addItem(uneVisite);
    }

    //remplissage nom
    QString textReq2 = "select prenomPers, nomPers from personnel where idPers="+lidCtrler;
    qDebug()<<textReq2;
    QSqlQuery getNom(textReq2);
    while (getNom.next())
    {
        ui->labelPrenomNom->setText(getNom.value(0).toString()+" "+getNom.value(1).toString());
    }
}

void DialogInfoControleur::on_listWidget_clicked(const QModelIndex &index)
{
    QString gestionnaire = (ui->listWidget->currentItem()->data(33).toString() + " " + ui->listWidget->currentItem()->data(32).toString());
    QString type = ui->listWidget->currentItem()->data(34).toString();
    ui->labelManager->setText(gestionnaire);
    ui->labelType->setText(type);

}

void DialogInfoControleur::on_pushButtonOk_clicked()
{
    close();
}
