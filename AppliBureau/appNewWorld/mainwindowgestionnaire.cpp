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

}

void MainWindowGestionnaire::chargeLeTableau()
{

    qDebug()<<"MainWindowGestionnaire::chargeLeTableau()";
    QString textReq = "select prenom, nom , email, typePersonnel, ssNumber, date_Embauche,numeroPersonnel from Personnel";
    qDebug()<<textReq;
    QSqlQuery reqDonnantEmployes(textReq);

    int nombreDeColonnes= 6;
    int nombreDEmployes = reqDonnantEmployes.size();
    QStringList listIntitule;
    listIntitule<<"First name"<<"Last name"<<"Email"<<"Type"<<"Sécurité sociale"<<"Hired date";


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
        // on ajoute à la premiere colonne de chaque ligne la valeur de numeroPersonnel
        ui->tableWidget->item(ligne,0)->setData(32,reqDonnantEmployes.value(6).toString());
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
    //on récupère tous les ids dans un vecteur
    QVector<int> vectId;
    QSqlQuery getNumeros("select numeroPersonnel from Personnel;");
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

    int numeroPersonnel = id;
    qDebug()<< numeroPersonnel;
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
    QString ssNumber = ui->lineEditSecuriteSociale->text();
    //enlève les espaces
    ssNumber.replace(" ","");
    QString mdp = passwordGeneration(8); //mdp aléatoire
    // date du jour
    QDate now = QDate::currentDate();
    qDebug()<<now.toString("yyyy-MM-dd");
    QString dateEmbauche = now.toString("yyyy-MM-dd");
    QString textReq = "insert into Personnel (numeroPersonnel, nom, prenom, email, typePersonnel, ssNumber, mdp, date_Embauche,supprime) values (";
    textReq += QString::number(numeroPersonnel);
    textReq += ", '";
    textReq += nom;
    textReq += "', '";
    textReq += prenom;
    textReq += "', '";
    textReq += email;
    textReq += "', '";
    textReq += typePersonnel;
    textReq += "', ";
    textReq += ssNumber;
    textReq += ", '";
    textReq += mdp;
    textReq += "', '";
    textReq += dateEmbauche;
    textReq += "', 0);";
    qDebug()<< textReq;

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



    QString textReq = "select nom,prenom,email,typePersonnel,ssNumber,date_Embauche from Personnel where numeroPersonnel=";
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
    ui->lineEditPhone->setText("");
    ui->lineEditEmail->setText(email);
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
    QString textReq = "delete from Personnel where numeroPersonnel=";
    textReq += idEmploye;
    QSqlQuery maquery(textReq);
    maquery.exec();
    chargeLeTableau();

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
    ui->lineEditPhone->setText("");
    ui->lineEditSecuriteSociale->setText("");
    ui->radioButtonController->setChecked(false);
    ui->radioButtonManager->setChecked(false);
}

void MainWindowGestionnaire::on_pushButtonEdit_clicked()
{
    //on récupère toutes les données
    QString numeroPersonnel = ui->labelId2->text();
    QString ssNumber = ui->lineEditSecuriteSociale->text();
    ssNumber.replace(" ","");
    QString nom = ui->lineEditLastName->text();
    QString prenom = ui->lineEditFirstName->text();
    QString telephone = ui->lineEditPhone->text();
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
    textReq += "' where numeroPersonnel=";
    textReq += numeroPersonnel;
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

    bool ok = ssNumber && prenom && nom && mail && type;
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
