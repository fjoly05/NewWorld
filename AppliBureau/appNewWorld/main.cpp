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

            QString mail = w.getMail();
            QString password = w.getPassword();
            QString textReq = "select nom, prenom, typePersonnel, supprime from Personnel where email='";
            textReq += mail;
            textReq += "' and mdp='";
            textReq += password;
            textReq += "';";
            qDebug()<<textReq;
            QSqlQuery connection(textReq);
            if (connection.next())
            {
                utilisateur.setNom(connection.value(0).toString());
                utilisateur.setPrenom(connection.value(1).toString());
                utilisateur.setTypePersonnel(connection.value(2).toString());
                utilisateur.setSupprime(connection.value(3).toBool());
            }



            //if (utilisateur.getTypePersonnel() == "gestionnaire" && utilisateur.getSupprime() == false)
            if (true)
            {
                MainWindowGestionnaire g;
                g.show();
                return a.exec();
            }else if (utilisateur.getTypePersonnel() == "controleur" && utilisateur.getSupprime() == false)
            {
                MainWindowControleur c;
                c.show();
                return a.exec();
            }else
            {
                qDebug()<< "salut ça marche pas";
            }

        }

    }else
    {
        qDebug()<<"l'ouverture de la base a échoué !";
        return -125;
    }

}