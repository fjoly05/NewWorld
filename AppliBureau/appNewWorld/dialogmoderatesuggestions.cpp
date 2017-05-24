#include "dialogmoderatesuggestions.h"
#include "ui_dialogmoderatesuggestions.h"
#include <QSqlQuery>
#include <QDebug>
#include <QVector>

DialogModerateSuggestions::DialogModerateSuggestions(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogModerateSuggestions)
{
    ui->setupUi(this);
    ui->pushButtonAccept->setEnabled(false);
    ui->pushButtonReject->setEnabled(false);
    chargeLesSuggestions();
    chargeLesSuggestionsDansVect();
}

DialogModerateSuggestions::~DialogModerateSuggestions()
{
    delete ui;
}

void DialogModerateSuggestions::chargeAcceptesRejetes()
{
    ui->listWidgetAcceptedProds->clear();
    //afficher ceux qui sont dans le vect et dans la base en tant que valideProd='accepte'
    QString textReq = "select idProd, libelleProd, libelleCat from produit inner join categorie on produit.idCat=categorie.idCat where etatProd='VAL' and supprimeProd=0";
    qDebug()<<textReq;
    QSqlQuery reqDonnantProduits(textReq);
    int unProduit;
    while (reqDonnantProduits.next())
    {
        //ajoute un item dans la liste en y associant en data l'id
        unProduit=reqDonnantProduits.value(0).toInt();
        foreach (int idProduit, vectIdProduitsAValide) {
            if (unProduit==idProduit)
            {
                QListWidgetItem* monProduit=new QListWidgetItem(reqDonnantProduits.value(2).toString()+" "+reqDonnantProduits.value(1).toString());
                monProduit->setData(32,reqDonnantProduits.value(0).toString());
                ui->listWidgetAcceptedProds->addItem(monProduit);
            }
        }
    }


    ui->listWidgetRejectedProds->clear();
    //afficher ceux qui sont dans le vect et dans la base en tant que valideProd='accepte'
    QString textReq2 = "select idProd, libelleProd, libelleCat from produit inner join categorie on produit.idCat=categorie.idCat where valideProd='rejete' and supprimeProd=0";
    qDebug()<<textReq2;
    QSqlQuery reqDonnantProduits2(textReq2);
    int unProduit2;
    while (reqDonnantProduits2.next())
    {
        //ajoute un item dans la liste en y associant en data l'id
        unProduit2=reqDonnantProduits2.value(0).toInt();
        foreach (int idProduit, vectIdProduitsAValide) {
            if (unProduit2==idProduit)
            {
                QListWidgetItem* monProduit=new QListWidgetItem(reqDonnantProduits2.value(2).toString()+" "+reqDonnantProduits2.value(1).toString());
                monProduit->setData(32,reqDonnantProduits2.value(0).toString());
                ui->listWidgetRejectedProds->addItem(monProduit);
            }
        }
    }
}

void DialogModerateSuggestions::chargeLesSuggestionsDansVect()
{
    QString textReq = "select idProd from produit where etatProd='ATT' and supprimeProd=0";
    qDebug()<<textReq;
    QSqlQuery reqDonnantProduits(textReq);
    while (reqDonnantProduits.next())
    {
        //ajoute un item dans la liste en y associant en data l'id
        vectIdProduitsAValide.push_back(reqDonnantProduits.value(0).toInt());
    }
}

void DialogModerateSuggestions::chargeLesSuggestions()
{
    ui->listWidgetSuggestedProds->clear();
    QString textReq = "select idProd, libelleProd, libelleCat from produit inner join categorie on produit.idCat=categorie.idCat where etatProd='ATT' and supprimeProd=0";
    qDebug()<<textReq;
    QSqlQuery reqDonnantProduits(textReq);
    while (reqDonnantProduits.next())
    {
        //ajoute un item dans la liste en y associant en data l'id
        QListWidgetItem* unProduit=new QListWidgetItem(reqDonnantProduits.value(2).toString()+" "+reqDonnantProduits.value(1).toString());
        unProduit->setData(32,reqDonnantProduits.value(0).toString());
        ui->listWidgetSuggestedProds->addItem(unProduit);
    }

}

void DialogModerateSuggestions::on_pushButtonAccept_clicked()
{
    QString textReq = "update produit set etatProd='VAL' where idProd=";
    textReq += selectedList->currentItem()->data(32).toString();
    qDebug()<<textReq;
    QSqlQuery reqAcceptantProduit;
    reqAcceptantProduit.exec(textReq);
    chargeLesSuggestions();
    chargeAcceptesRejetes();
    ui->pushButtonAccept->setEnabled(false);
    ui->pushButtonReject->setEnabled(false);
}

void DialogModerateSuggestions::on_pushButtonReject_clicked()
{
    QString textReq = "update produit set valideProd='rejete' where idProd=";
    textReq += selectedList->currentItem()->data(32).toString();
    qDebug()<<textReq;
    QSqlQuery reqRejetantProduit;
    reqRejetantProduit.exec(textReq);
    chargeLesSuggestions();
    chargeAcceptesRejetes();
    ui->pushButtonReject->setEnabled(false);
    ui->pushButtonAccept->setEnabled(false);
}

void DialogModerateSuggestions::on_listWidgetSuggestedProds_clicked(const QModelIndex &index)
{
    ui->pushButtonAccept->setEnabled(true);
    ui->pushButtonReject->setEnabled(true);
    ui->listWidgetAcceptedProds->clearSelection();
    ui->listWidgetRejectedProds->clearSelection();
    selectedList=ui->listWidgetSuggestedProds;
}

void DialogModerateSuggestions::on_listWidgetAcceptedProds_clicked(const QModelIndex &index)
{
    ui->pushButtonAccept->setEnabled(true);
    ui->pushButtonReject->setEnabled(true);
    ui->listWidgetSuggestedProds->clearSelection();
    ui->listWidgetRejectedProds->clearSelection();
    selectedList=ui->listWidgetAcceptedProds;
}

void DialogModerateSuggestions::on_listWidgetRejectedProds_clicked(const QModelIndex &index)
{
    ui->pushButtonAccept->setEnabled(true);
    ui->pushButtonReject->setEnabled(true);
    ui->listWidgetAcceptedProds->clearSelection();
    ui->listWidgetSuggestedProds->clearSelection();
    selectedList=ui->listWidgetRejectedProds;
}

void DialogModerateSuggestions::on_pushButtonValidation_clicked()
{
    close();
}

void DialogModerateSuggestions::on_pushButtonCancel_clicked()
{
    foreach (int idProduit, vectIdProduitsAValide) {
        QString textReq = "update produit set etatProd='ATT' where idProd=";
        textReq += QString::number(idProduit);
        qDebug()<<textReq;
        QSqlQuery reqCancelModif;
        reqCancelModif.exec(textReq);
    }
    close();
}


