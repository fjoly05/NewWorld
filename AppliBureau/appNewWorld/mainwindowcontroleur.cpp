#include "mainwindowcontroleur.h"
#include "ui_mainwindowcontroleur.h"

MainWindowControleur::MainWindowControleur(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindowControleur)
{
    ui->setupUi(this);
    extern user utilisateur;
    ui->labelBonjour->setText(tr("Hello ") + utilisateur.getPrenom() + " " + utilisateur.getNom());
}

MainWindowControleur::~MainWindowControleur()
{
    delete ui;
}

MainWindowControleur::chargeLesVisites()
{
    // c'est tout nul en dessous c'est un exemple

    qDebug()<<"MainWindowGestionnaire::chargeProducteurs()";
    QString textReq = "select utilisateur.idU, concat(utilisateur.prenomU, ' ', utilisateur.nomU) as prenomNom, max(visite.dateVisite) as dateMax from utilisateur inner join ControleProducteur on utilisateur.idU = ControleProducteur.idU inner join visite on ControleProducteur.idVisite = visite.idVisite group by utilisateur.idU";
    qDebug()<<textReq;


    QSqlQuery reqDonnantProducteurs(textReq);

    int nombreDeColonnes= 2;
    int nombreDeProducteurs = reqDonnantProducteurs.size();
    QStringList listIntitule;
    listIntitule<<"Producers"<<"Last visit";


    qDebug()<<nombreDeColonnes;
    qDebug()<<nombreDeProducteurs;
    int ligne = 0;
    ui->tableWidgetProducersVisit->setColumnCount(nombreDeColonnes);
    ui->tableWidgetProducersVisit->setRowCount(nombreDeProducteurs);
    while(reqDonnantProducteurs.next())
    {
        for (int col=0;col<nombreDeColonnes;col++)
        {
            qDebug()<<col;

            QString result = reqDonnantProducteurs.value(col+1).toString();
            QTableWidgetItem* item = new QTableWidgetItem(result);
            ui->tableWidgetProducersVisit->setItem(ligne,col,item);
            qDebug()<<result;
        }
        // on ajoute à la premiere colonne de chaque ligne la valeur de idPers
        ui->tableWidgetProducersVisit->item(ligne,0)->setData(32,reqDonnantProducteurs.value(0).toString());
        qDebug()<<ui->tableWidgetProducersVisit->item(ligne,0)->data(32).toString();
        ligne++;
    }
    ui->tableWidgetProducersVisit->setHorizontalHeaderLabels(listIntitule);

    //resize table
    ui->tableWidgetProducersVisit->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

    ui->tableWidgetProducersVisit->resizeColumnsToContents();
    ui->tableWidgetProducersVisit->setFixedSize(ui->tableWidgetProducersVisit->horizontalHeader()->length()+ui->tableWidgetProducersVisit->verticalHeader()->width()+20, ui->tableWidgetProducersVisit->verticalHeader()->length()+ui->tableWidgetProducersVisit->horizontalHeader()->height()+2);
    checkSelect();

}
