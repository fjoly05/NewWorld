#include "dialogconnection.h"
#include "ui_dialogconnection.h"

DialogConnection::DialogConnection(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogConnection)
{
    ui->setupUi(this);
}

DialogConnection::~DialogConnection()
{
    delete ui;
}

void DialogConnection::on_pushButtonQuit_clicked()
{
    this->close();
}

void DialogConnection::on_pushButtonConnection_clicked()
{
    mail = ui->lineEditLogin->text();
    password = ui->lineEditPassword->text();

    accept();
}

QString DialogConnection::getMail()
{
    return mail;
}

QString DialogConnection::getPassword()
{
    return password;
}
