#include "dialoginfocontroleur.h"
#include "ui_dialoginfocontroleur.h"

DialogInfoControleur::DialogInfoControleur(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogInfoControleur)
{
    ui->setupUi(this);
}

DialogInfoControleur::~DialogInfoControleur()
{
    delete ui;
}
