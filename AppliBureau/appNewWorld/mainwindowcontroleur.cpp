#include "mainwindowcontroleur.h"
#include "ui_mainwindowcontroleur.h"

MainWindowControleur::MainWindowControleur(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindowControleur)
{
    ui->setupUi(this);
}

MainWindowControleur::~MainWindowControleur()
{
    delete ui;
}
