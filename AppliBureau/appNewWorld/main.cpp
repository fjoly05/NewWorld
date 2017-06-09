#include <QApplication>
#include "mainwindowgestionnaire.h"
#include "mainwindowcontroleur.h"
#include "dialogconnection.h"
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QDebug>
#include "user.h"

user utilisateur;

int main(int argc, char *argv[])
{

    QApplication a(argc, argv);
    QSqlDatabase maBase = QSqlDatabase::addDatabase("QMYSQL");
    maBase.setDatabaseName("dbNewWorld2");
    maBase.setHostName("localhost");
    maBase.setUserName("adminDbNewWorld2");
    maBase.setPassword("Pa$$w0rd");
    if(maBase.open())
    {
        DialogConnection w;
        if(w.exec()==DialogConnection::Accepted)
        {

            QString login = w.getLogin();
            QString password = w.getPassword();
            QString textReq = "select nomPers, prenomPers, idTypeP, supprimePers, idPers from personnel where loginPers='";
            textReq += login;
            textReq += "' and motDePassePers='";
            textReq += password;
            textReq += "';";
            qDebug()<<textReq;
            QSqlQuery connection(textReq);



            if (connection.next())
            {
                utilisateur.setNom(connection.value(0).toString());
                utilisateur.setPrenom(connection.value(1).toString());
                utilisateur.setTypePersonnel(connection.value(2).toInt());
                utilisateur.setSupprime(connection.value(3).toBool());
                utilisateur.setNumeroPersonnel(connection.value(4).toInt());
            }
            qDebug()<<utilisateur.getNumeroPersonnel();


            if (utilisateur.getTypePersonnel() == 2 && utilisateur.getSupprime() == false)
            {
                MainWindowGestionnaire g;
                g.show();
                return a.exec();
            }else if (utilisateur.getTypePersonnel() == 1 && utilisateur.getSupprime() == false)
            {
                MainWindowControleur c;
                c.show();
                return a.exec();
            }else
            {
                qDebug()<< "wrong logs";
            }
        }
    }else
    {
        qDebug()<<"l'ouverture de la base a échoué !";
        return -125;
    }

}
