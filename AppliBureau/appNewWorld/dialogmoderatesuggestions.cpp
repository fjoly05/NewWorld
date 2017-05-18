#include "dialogmoderatesuggestions.h"
#include "ui_dialogmoderatesuggestions.h"
#include <QSqlQuery>
#include <QDebug>

DialogModerateSuggestions::DialogModerateSuggestions(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogModerateSuggestions)
{
    ui->setupUi(this);
    chargeLesSuggestions();
}

DialogModerateSuggestions::~DialogModerateSuggestions()
{
    delete ui;
}

void DialogModerateSuggestions::chargeLesSuggestions()
{
    ui->listWidgetSuggestedProds->clear();
    QString textReq = "select idProd, libelleProd from produit where valideProd=0 and supprimeProd=0";
    qDebug()<<textReq;
    QSqlQuery reqDonnantProduits(textReq);
    while (reqDonnantProduits.next())
    {
        //ajoute un item dans la liste en y associant en data l'id
        QListWidgetItem* unProduit=new QListWidgetItem(reqDonnantProduits.value(1).toString());
        unProduit->setData(32,reqDonnantProduits.value(0).toString());
        ui->listWidgetSuggestedProds->addItem(unProduit);
    }

}

void DialogModerateSuggestions::on_pushButtonAccept_clicked()
{

}

void DialogModerateSuggestions::on_pushButtonReject_clicked()
{

}

void DialogModerateSuggestions::on_pushButtonValidation_clicked()
{
    accept();
}
