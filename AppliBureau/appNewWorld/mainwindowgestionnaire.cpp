#include "mainwindowgestionnaire.h"
#include "ui_mainwindowgestionnaire.h"
#include <QSqlQuery>
#include <QDebug>
#include <QtGlobal>
#include <QDate>
#include <QTime>
#include <QSqlRecord>
#include <QVector>
#include <QTableWidget>
#include <QtGui>

MainWindowGestionnaire::MainWindowGestionnaire(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindowGestionnaire)
{
    ui->setupUi(this);
    ui->labelHireDate->hide();
    ui->labelHireDate2->hide();
    ui->labelId->hide();
    ui->labelId2->hide();
    ui->pushButtonEdit->setEnabled(false);
    ui->pushButtonAdd->setEnabled(false);
    this->adjustSize();
    extern user utilisateur;
    ui->labelBonjour->setText(tr("Hello ") + utilisateur.getPrenom() + " " + utilisateur.getNom());
    //QString test = utilisateur.getNom();
    chargeLeTableau();
    chargeLesListes();

}

void MainWindowGestionnaire::chargeLesListes()
{
    qDebug()<<"MainWindowGestionnaire::chargeLesListes()";
    //QString textReqr

}

void MainWindowGestionnaire::chargeLeTableau()
{

    qDebug()<<"MainWindowGestionnaire::chargeLeTableau()";
    QString textReq = "select personnel.prenomPers, personnel.nomPers , personnel.emailPers, typePersonnel.libelleTypeP, personnel.dateEmbauchePers, personnel.idPers from personnel inner join typePersonnel on personnel.idTypeP=typePersonnel.idTypeP";
    qDebug()<<textReq;
    QSqlQuery reqDonnantEmployes(textReq);

    int nombreDeColonnes= 5;
    int nombreDEmployes = reqDonnantEmployes.size();
    QStringList listIntitule;
    listIntitule<<"First name"<<"Last name"<<"Email"<<"Type"<<"Hired date";


    qDebug()<<nombreDeColonnes;
    qDebug()<<nombreDEmployes;
    int ligne = 0;
    ui->tableWidget->setColumnCount(nombreDeColonnes);
    ui->tableWidget->setRowCount(nombreDEmployes);
    while(reqDonnantEmployes.next())
    {
        for (int col=0;col<nombreDeColonnes;col++)
        {
            qDebug()<<col;

            QString result = reqDonnantEmployes.value(col).toString();
            QTableWidgetItem* item = new QTableWidgetItem(result);
            ui->tableWidget->setItem(ligne,col,item);
            qDebug()<<result;
        }
        // on ajoute à la premiere colonne de chaque ligne la valeur de idPers
        ui->tableWidget->item(ligne,0)->setData(32,reqDonnantEmployes.value(5).toString());
        qDebug()<<ui->tableWidget->item(ligne,0)->data(32).toString();
        ligne++;
    }
    ui->tableWidget->setHorizontalHeaderLabels(listIntitule);

    //resize table
    ui->tableWidget->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

    ui->tableWidget->resizeColumnsToContents();
    ui->tableWidget->setFixedSize(ui->tableWidget->horizontalHeader()->length()+ui->tableWidget->verticalHeader()->width()+15, ui->tableWidget->verticalHeader()->length()+ui->tableWidget->horizontalHeader()->height()+2);
}


QString MainWindowGestionnaire::passwordGeneration(int len)
{
    const QString possibleChar = "AZERTYUIOPMLKJHGFDSQWXCVBNazertyuiopmlkjhgfdsqwxcvbn1234567890!#$%&()*+,-./:;<=>?@[]^_{|}~";
    QString randomString;
    QTime time;
    qsrand(time.currentTime().msec());
    for (int i = 0; i< len; i++)
    {
       int index = qrand() % possibleChar.length();
       QChar nextChar = possibleChar.at(index);
       randomString.append(nextChar);
    }
    return randomString;
}

MainWindowGestionnaire::~MainWindowGestionnaire()
{
    delete ui;
}

void MainWindowGestionnaire::on_pushButtonAdd_clicked()
{
    qDebug()<< "[1]";
    //id
    //on récupère tous les ids dans un vecteur
    QVector<int> vectId;
    QSqlQuery getNumeros("select idPers from personnel;");
    while(getNumeros.next())
    {
        int numero = getNumeros.value(0).toInt();
        qDebug()<< numero;
        vectId.push_back(numero);
    }
    //vérification des ids du vecteur si un id libre le garder
    int id = 1;
    int i=0;
    while(vectId[i]==id)
    {
        id++;
        i++;
    }
    int idPers = id;
    qDebug()<< idPers;

    //mdp
    QString mdp = passwordGeneration(8); //mdp aléatoire

    //set supprime à 0
    int supprime=0;

    // date du jour
    QDate now = QDate::currentDate();
    qDebug()<<now.toString("yyyy-MM-dd");
    QString dateEmbauche = now.toString("yyyy-MM-dd");

    //ss
    QString ssNumber = ui->lineEditSecuriteSociale->text();
    ssNumber.replace(" ","");

    //prenom
    QString prenom = ui->lineEditFirstName->text();

    //nom
    QString nom = ui->lineEditLastName->text();

    //mail
    QString email = ui->lineEditEmail->text();

    //pays
    QString pays = ui->lineEditCountry->text();

    //cp
    QString cp = ui->lineEditPostalCode->text();

    //ville
    QString ville = ui->lineEditCity->text();

    //adresse
    QString adresse = ui->lineEditStreet->text();

    //type
    //récupération du bouton radio coché
    int typePersonnel;
    if(ui->radioButtonController->isChecked())
    {
        typePersonnel = 1;
    }
    else if (ui->radioButtonManager->isChecked())
    {
        typePersonnel = 0;
    }

    //requete
    QString textReq = "insert into personnel (idPers, nomPers, prenomPers, emailPers, ssNb, motDePassePers, dateEmbauchePers, supprimePers, codePostalPers, paysPers, villePers, adressePers, idTypeP) values (";
    textReq += QString::number(idPers);
    textReq += ", '";
    textReq += nom;
    textReq += "', '";
    textReq += prenom;
    textReq += "', '";
    textReq += email;
    textReq += "', '";
    textReq += ssNumber;
    textReq += "', '";
    textReq += mdp;
    textReq += "', '";
    textReq += dateEmbauche;
    textReq += "', ";
    textReq += supprime;
    textReq += ", '";
    textReq += cp;
    textReq += "', '";
    textReq += pays;
    textReq += "', '";
    textReq += ville;
    textReq += "', '";
    textReq += adresse;
    textReq += "', ";
    textReq += typePersonnel;
    textReq += ");";
    qDebug()<< textReq;
    qDebug()<< "[1]";

    QSqlQuery insertUser(textReq);

    on_pushButtonClear_clicked();

    chargeLeTableau();
}




/**
 * @brief MainWindowGestionnaire::on_tableWidget_cellClicked
 * @param row
 * @param column
 * Selection de l'employé sur lequel on souhaite travailler
 */
void MainWindowGestionnaire::on_tableWidget_cellClicked(int row, int column)
{
    qDebug()<<"MainWindowGestionnaire::on_tableWidget_cellClicked(int row, int column)";
    QString idEmployeS=ui->tableWidget->item(row,0)->data(32).toString();
    ui->tableWidget->selectRow(row);
    ui->labelHireDate->show();
    ui->labelHireDate2->show();
    ui->labelId->show();
    ui->labelId2->show();



    QString textReq = "select nom,prenom,email,typePersonnel,ssNumber,date_Embauche from Personnel where idPers=";
    textReq += idEmployeS;
    QSqlQuery reqInfosEmployeS(textReq);
    QString nom;
    QString prenom;
    QString email;
    QString typePersonnel;
    QString ssNumber;
    QString dateEmbauche;
    while(reqInfosEmployeS.next())
    {
        nom=reqInfosEmployeS.value("nom").toString();
        prenom=reqInfosEmployeS.value("prenom").toString();
        email=reqInfosEmployeS.value("email").toString();
        typePersonnel=reqInfosEmployeS.value("typePersonnel").toString();
        ssNumber=reqInfosEmployeS.value("ssNumber").toString();
        dateEmbauche=reqInfosEmployeS.value("date_Embauche").toString();
    }
    ui->labelId2->setText(idEmployeS);
    ui->labelHireDate2->setText(dateEmbauche);
    ui->lineEditSecuriteSociale->setText(ssNumber);
    ui->lineEditFirstName->setText(prenom);
    ui->lineEditLastName->setText(nom);
    ui->lineEditEmail->setText(email);
    ui->pushButtonEdit->setEnabled(true);
    if(typePersonnel == "gestionnaire")
    {
        ui->radioButtonManager->setChecked(true);
    }
    else if(typePersonnel == "controleur")
    {
        ui->radioButtonController->setChecked(true);
    }
}

void MainWindowGestionnaire::on_pushButtonDelete_clicked()
{
    QString idEmploye = ui->labelId2->text();
    QString textReq = "delete from Personnel where idPers=";
    textReq += idEmploye;
    QSqlQuery maquery(textReq);
    maquery.exec();
    chargeLeTableau();
    on_pushButtonClear_clicked();
}

void MainWindowGestionnaire::on_pushButtonClear_clicked()
{

    ui->tableWidget->selectionModel()->clearSelection();
    ui->labelHireDate->hide();
    ui->labelHireDate2->hide();
    ui->labelId->hide();
    ui->labelId2->hide();
    ui->lineEditEmail->setText("");
    ui->lineEditFirstName->setText("");
    ui->lineEditLastName->setText("");
    ui->lineEditSecuriteSociale->setText("");
    ui->radioButtonController->setChecked(false);
    ui->radioButtonManager->setChecked(false);
    ui->pushButtonEdit->setEnabled(false);
}

void MainWindowGestionnaire::on_pushButtonEdit_clicked()
{
    //on récupère toutes les données
    QString idPers = ui->labelId2->text();
    QString ssNumber = ui->lineEditSecuriteSociale->text();
    ssNumber.replace(" ","");
    QString nom = ui->lineEditLastName->text();
    QString prenom = ui->lineEditFirstName->text();
    QString email = ui->lineEditEmail->text();
    //récupération du bouton radio coché
    QString typePersonnel;
    if(ui->radioButtonController->isChecked())
    {
        typePersonnel = "controleur";
    }
    else if (ui->radioButtonManager->isChecked())
    {
        typePersonnel = "gestionnaire";
    }

    // requete
    // nom, prenom, email, typePersonnel, ssNumber, mdp, date_Embauche,supprime) values (";
    QString textReq = "update Personnel set nom='";
    textReq += nom;
    textReq += "', prenom='";
    textReq += prenom;
    textReq += ", email='";
    textReq += email;
    textReq += "', typePersonnel='";
    textReq += typePersonnel;
    textReq += "', ssNumber='";
    textReq += ssNumber;
    textReq += "' where idPers=";
    textReq += idPers;
    textReq += ");";
    qDebug()<< textReq;

    QSqlQuery editUser(textReq);

    on_pushButtonClear_clicked();

    chargeLeTableau();
}

void MainWindowGestionnaire::checkLineEdits()
{
    qDebug()<< "check";
    //numéro de sécu >= à 15
    bool ssNumber = (ui->lineEditSecuriteSociale->text().length()>=15);
    qDebug()<< "ssNumber " << ssNumber;
    //prénom rempli
    bool prenom = !ui->lineEditFirstName->text().isEmpty();
    qDebug()<< "prenom " << prenom;
    //nom rempli
    bool nom = !ui->lineEditLastName->text().isEmpty();
    qDebug()<< "nom " << nom;
    // mail rempli correctement
    bool mail = ui->lineEditEmail->text().contains("@") && ui->lineEditEmail->text().contains(".");
    qDebug()<< "mail " << mail;
    bool type = ui->radioButtonController->isChecked() || ui->radioButtonManager->isChecked();
    qDebug()<< "type " << type;
    bool idHidden = ui->labelId2->isHidden();
    qDebug()<< "idHidden " << idHidden;

    bool ok = ssNumber && prenom && nom && mail && type && idHidden;
    qDebug()<< "ok " << ok;

    ui->pushButtonAdd->setEnabled(ok);
}



void MainWindowGestionnaire::on_lineEditSecuriteSociale_textChanged(const QString &arg1)
{
    checkLineEdits();
}

void MainWindowGestionnaire::on_lineEditFirstName_textChanged(const QString &arg1)
{
    checkLineEdits();
}

void MainWindowGestionnaire::on_lineEditLastName_textChanged(const QString &arg1)
{
    checkLineEdits();
}

void MainWindowGestionnaire::on_lineEditEmail_textChanged(const QString &arg1)
{
    checkLineEdits();
}

void MainWindowGestionnaire::on_radioButtonManager_clicked()
{
    checkLineEdits();
}

void MainWindowGestionnaire::on_radioButtonController_clicked()
{
    checkLineEdits();
}
