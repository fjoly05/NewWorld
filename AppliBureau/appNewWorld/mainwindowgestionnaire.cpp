#include "mainwindowgestionnaire.h"
#include "ui_mainwindowgestionnaire.h"
#include "dialogmoderatesuggestions.h"
#include <QSqlQuery>
#include <QDebug>
#include <QtGlobal>
#include <QDate>
#include <QTime>
#include <QSqlRecord>
#include <QVector>
#include <QTableWidget>
#include <QtGui>
#include <QtAlgorithms>

MainWindowGestionnaire::MainWindowGestionnaire(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindowGestionnaire)
{
    ui->setupUi(this);
    //onglet 1
    qDebug()<<"onglet 1";
    ui->labelHireDate->hide();
    ui->labelHireDate2->hide();
    ui->labelId->hide();
    ui->labelId2->hide();
    ui->pushButtonEdit->setEnabled(false);
    ui->pushButtonAdd->setEnabled(false);
    ui->radioButtonController->setChecked(true);

    //onglet 2
    qDebug()<<"onglet 2";
    chargeProducteurs();
    ui->dateEditVisit->setDate(QDate::currentDate());
    chargeControleurs();
    ui->pushButtonAssignController->setEnabled(false);
    qDebug()<<ui->listWidgetAvailableControllers->currentIndex();
    qDebug()<<ui->listWidgetAvailableControllers->currentItem();
    checkSelect();

    //onglet 3
    qDebug()<<"onglet 3";
    ui->pushButtonAddCategories->setEnabled(false);
    ui->pushButtonAddProducts->setEnabled(false);
    ui->pushButtonAddAisles->setEnabled(false);
    ui->lineEditCategories->setEnabled(false);
    ui->pushButtonDeleteAisles->setEnabled(false);
    ui->pushButtonDeleteCategories->setEnabled(false);
    ui->pushButtonDeleteProducts->setEnabled(false);
    this->adjustSize();
    extern user utilisateur;
    ui->labelBonjour->setText(tr("Hello ") + utilisateur.getPrenom() + " " + utilisateur.getNom());
    //QString test = utilisateur.getNom();
    chargeLeTableau();
    chargeRayons();

    //choisir l'onglet 1 comme onglet de départ
    ui->tabWidget->setCurrentIndex(0);
}

void MainWindowGestionnaire::checkSelect()
{
    QListWidgetItem* itemVideList=NULL;
    QTableWidgetItem* itemVideTable=NULL;
    bool listClicked=false;
    bool tableClicked=false;
    if (ui->listWidgetAvailableControllers->currentItem()==itemVideList)
    {
        listClicked=false;
    }else
    {
        listClicked=true;
    }
    if (ui->tableWidgetProducersVisit->currentItem()==NULL)
    {
        tableClicked=false;
    }else
    {
        tableClicked=true;
    }
    qDebug()<<"listClicked"<<listClicked;
    qDebug()<<"tableClicked"<<tableClicked;
    qDebug()<<"total"<<(listClicked&&tableClicked);
    ui->pushButtonAssignController->setEnabled(listClicked&&tableClicked);
}

void MainWindowGestionnaire::chargeControleurs()
{
    qDebug()<<"MainWindowGestionnaire::chargeControleurs()";
    ui->listWidgetAvailableControllers->clear();
    QString laDate = ui->dateEditVisit->date().toString("yyyy-MM-dd");
    QString textReq = "select personnel.idPers, personnel.prenomPers, personnel.nomPers, count(visite.idVisite) as nbVisite ";
    textReq += "from personnel inner join visite on personnel.idPers=visite.controleur ";
    textReq += "where personnel.idtypeP=1 and dateVisite='"+laDate+"' ";
    textReq += "group by controleur ";
    textReq += "having nbVisite < 6 ";
    textReq += "union ";
    textReq += "select idPers, prenomPers, nomPers, 0 as nbVisite ";
    textReq += "from personnel where idTypeP=1 and supprimePers = 0 ";
    textReq += "and idPers not in (select personnel.idPers ";
    textReq += "from personnel inner join visite on personnel.idPers=visite.controleur ";
    textReq += "where personnel.idtypeP=1 and dateVisite='"+laDate+"' ";
    textReq += "group by controleur ";
    textReq += "having count(visite.idVisite)< 6) ";
    qDebug()<<textReq;

    QSqlQuery reqDonnantControleurs(textReq);
    while(reqDonnantControleurs.next())
    {
        //ajout d'un item en y associant l'id
        QListWidgetItem* unControleur=new QListWidgetItem(reqDonnantControleurs.value(1).toString() + " " + reqDonnantControleurs.value(2).toString());
        unControleur->setData(32,reqDonnantControleurs.value(0).toString());
        ui->listWidgetAvailableControllers->addItem(unControleur);

    }
}

void MainWindowGestionnaire::chargeProducteurs()
{
    qDebug()<<"MainWindowGestionnaire::chargeProducteurs()";
    QString textReq = " select utilisateur.idU, concat(utilisateur.prenomU, ' ', utilisateur.nomU) as prenomNom, max(visite.dateVisite) as dateMax from utilisateur inner join ControleProducteur on utilisateur.idU = ControleProducteur.idU inner join visite on ControleProducteur.idVisite = visite.idVisite group by utilisateur.idU";
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

void MainWindowGestionnaire::chargeRayons()
{
    ui->listWidgetAisles->clear();
    qDebug()<<"MainWindowGestionnaire::chargeLesListes()";
    QString textReq = "select idRay, libelleRay from rayon where supprimeRay=0";
    QSqlQuery reqDonnantRayons(textReq);
    while (reqDonnantRayons.next())
    {
        //ajoute un item dans la liste en y associant en data l'id
        QListWidgetItem* unRayon=new QListWidgetItem(reqDonnantRayons.value(1).toString());
        unRayon->setData(32,reqDonnantRayons.value(0).toString());
        ui->listWidgetAisles->addItem(unRayon);
    }
}

void MainWindowGestionnaire::chargeCategories()
{
    ui->listWidgetCategories->clear();
    QString textReq2 = "select idCat, libelleCat from categorie where supprimeCat=0 and idRay=";
    textReq2 += ui->listWidgetAisles->currentItem()->data(32).toString();
    qDebug()<<textReq2;
    QSqlQuery reqDonnantCategories(textReq2);
    while (reqDonnantCategories.next())
    {
        //ajoute un item dans la liste en y associant en data l'id
        QListWidgetItem* uneCategorie=new QListWidgetItem(reqDonnantCategories.value(1).toString());
        uneCategorie->setData(32,reqDonnantCategories.value(0).toString());
        ui->listWidgetCategories->addItem(uneCategorie);
    }
}

void MainWindowGestionnaire::chargeProduits()
{
    qDebug()<<"MainWindowGestionnaire::chargeProduits()";
    ui->listWidgetProducts->clear();
    qDebug()<<"after clear";
    QString textReq2 = "select idProd, libelleProd from produit where supprimeProd=0 and etatProd='VAL' and idCat=";
    textReq2 += ui->listWidgetCategories->currentItem()->data(32).toString();
    qDebug()<<textReq2;
    QSqlQuery reqDonnantProduits(textReq2);
    while (reqDonnantProduits.next())
    {
        //ajoute un item dans la liste en y associant en data l'id
        QListWidgetItem* unProduit=new QListWidgetItem(reqDonnantProduits.value(1).toString());
        unProduit->setData(32,reqDonnantProduits.value(0).toString());
        ui->listWidgetProducts->addItem(unProduit);
    }
}

void MainWindowGestionnaire::chargeLeTableau()
{

    qDebug()<<"MainWindowGestionnaire::chargeLeTableau()";
    QString textReq = "select personnel.prenomPers, personnel.nomPers , personnel.emailPers, typePersonnel.libelleTypeP, personnel.dateEmbauchePers, personnel.idPers from personnel inner join typePersonnel on personnel.idTypeP=typePersonnel.idTypeP where personnel.supprimePers=0";
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
    //id
    //on récupère tous les ids dans un vecteur
    QVector<int> vectId;
    QSqlQuery getNumeros("select idPers from personnel;");
    while(getNumeros.next())
    {
        int numero = getNumeros.value(0).toInt();
        qDebug()<< "id dans la req :"<<numero;
        vectId.push_back(numero);
    }
    qSort(vectId);
    //vérification des ids du vecteur si un id libre le garder
    int id = 1;
    int i=0;
    while(vectId[i]==id)
    {
        id++;
        i++;
    }
    int idPers = id;
    qDebug()<< "idPers : " << idPers;

    //mdp
    QString mdp = passwordGeneration(8); //mdp aléatoire

    //set supprime à 0
    int supprime = 0;

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

    //login
    QString login= prenom[0].toLower() + nom.toLower();
    qDebug()<<login;


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
    QString textReq = "insert into personnel (idPers, nomPers, prenomPers, emailPers, ssNb, motDePassePers, dateEmbauchePers, supprimePers, codePostalPers, paysPers, villePers, adressePers, loginPers, idTypeP) values (";
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
    textReq += QString::number(supprime);
    textReq += ", '";
    textReq += cp;
    textReq += "', '";
    textReq += pays;
    textReq += "', '";
    textReq += ville;
    textReq += "', '";
    textReq += adresse;
    textReq += "', '";
    textReq += login;
    textReq += "', ";
    textReq += QString::number(typePersonnel);
    textReq += ");";
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



    QString textReq = "select nomPers, prenomPers, emailPers, ssNb, dateEmbauchePers, codePostalPers, paysPers, villePers, adressePers, idTypeP from personnel where idPers=";
    textReq += idEmployeS;
    QSqlQuery reqInfosEmployeS(textReq);
    QString nom;
    QString prenom;
    QString email;
    QString ssNumber;
    QString dateEmbauche;
    QString cp;
    QString pays;
    QString ville;
    QString adresse;
    QString typePersonnel;
    while(reqInfosEmployeS.next())
    {
        nom=reqInfosEmployeS.value("nomPers").toString();
        prenom=reqInfosEmployeS.value("prenomPers").toString();
        email=reqInfosEmployeS.value("emailPers").toString();
        ssNumber=reqInfosEmployeS.value("ssNb").toString();
        dateEmbauche=reqInfosEmployeS.value("dateEmbauchePers").toString();
        cp=reqInfosEmployeS.value("codePostalPers").toString();
        pays=reqInfosEmployeS.value("paysPers").toString();
        ville=reqInfosEmployeS.value("villePers").toString();
        adresse=reqInfosEmployeS.value("adressePers").toString();
        typePersonnel=reqInfosEmployeS.value("idTypeP").toString();
    }
    ui->labelId2->setText(idEmployeS);
    ui->labelHireDate2->setText(dateEmbauche);
    ui->lineEditSecuriteSociale->setText(ssNumber);
    ui->lineEditFirstName->setText(prenom);
    ui->lineEditLastName->setText(nom);
    ui->lineEditEmail->setText(email);
    ui->lineEditCountry->setText(pays);
    ui->lineEditPostalCode->setText(cp);
    ui->lineEditCity->setText(ville);
    ui->lineEditStreet->setText(adresse);

    if(typePersonnel == "2")
    {
        ui->radioButtonManager->setChecked(true);
    }
    else if(typePersonnel == "1")
    {
        ui->radioButtonController->setChecked(true);
    }
    ui->pushButtonEdit->setEnabled(true);
}

void MainWindowGestionnaire::on_pushButtonDelete_clicked()
{
    QString idEmploye = ui->labelId2->text();
    QString textReq = "update personnel set supprimePers=1 where idPers=";
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
    ui->lineEditCountry->setText("");
    ui->lineEditPostalCode->setText("");
    ui->lineEditCity->setText("");
    ui->lineEditStreet->setText("");
    ui->radioButtonController->setChecked(true);
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
    QString pays = ui->lineEditCountry->text();
    QString cp = ui->lineEditPostalCode->text();
    QString ville = ui->lineEditCity->text();
    QString adresse = ui->lineEditStreet->text();
    //récupération du bouton radio coché
    QString typePersonnel;
    if(ui->radioButtonController->isChecked())
    {
        typePersonnel = "1";
    }
    else if (ui->radioButtonManager->isChecked())
    {
        typePersonnel = "0";
    }


    // requete
    // nom, prenom, email, typePersonnel, ssNumber, mdp, date_Embauche,supprime) values (";
    QString textReq = "update personnel set nomPers='";
    textReq += nom;
    textReq += "', prenomPers='";
    textReq += prenom;
    textReq += ", emailPers='";
    textReq += email;
    textReq += "', ssNumber='";
    textReq += ssNumber;
    textReq += "', typePersonnel=";
    textReq += typePersonnel;
    textReq += "', codePostalPers='";
    textReq += cp;
    textReq += "', paysPers='";
    textReq += pays;
    textReq += "', villePers='";
    textReq += ville;
    textReq += "', adressePers='";
    textReq += adresse;
    textReq += "', idTypeP='";
    textReq += typePersonnel;
    textReq += " where idPers=";
    textReq += idPers;
    textReq += ");";
    qDebug()<< textReq;

    QSqlQuery editUser(textReq);

    editUser.exec();

    on_pushButtonClear_clicked();

    chargeLeTableau();
}

void MainWindowGestionnaire::checkLineEdits()
{
    //numéro de sécu >= à 15
    bool ssNumber = (ui->lineEditSecuriteSociale->text().length()>=15);
    //prénom rempli
    bool prenom = !ui->lineEditFirstName->text().isEmpty();
    //nom rempli
    bool nom = !ui->lineEditLastName->text().isEmpty();
    //mail rempli correctement
    bool mail = ui->lineEditEmail->text().contains("@") && ui->lineEditEmail->text().contains(".");
    //un bouton est coché
    bool type = ui->radioButtonController->isChecked() || ui->radioButtonManager->isChecked();
    //pays rempli
    bool country = !ui->lineEditCountry->text().isEmpty();
    //code postal rempli
    bool postalCode = !ui->lineEditCountry->text().isEmpty();
    //ville remplie
    bool city = !ui->lineEditCountry->text().isEmpty();
    //adresse remplie
    bool street = !ui->lineEditCountry->text().isEmpty();
    //l'id n'est pas affiché (donc ce n'est pas un edit
    bool idHidden = ui->labelId2->isHidden();

    //vérif si tout est bon
    bool ok = ssNumber && prenom && nom && mail && type && idHidden && country && postalCode && city && street;
    qDebug()<< "checkLineEdits : " << ok;

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

void MainWindowGestionnaire::on_lineEditCountry_textChanged(const QString &arg1)
{
    checkLineEdits();
}

void MainWindowGestionnaire::on_lineEditPostalCode_textChanged(const QString &arg1)
{
    checkLineEdits();
}

void MainWindowGestionnaire::on_lineEditCity_textChanged(const QString &arg1)
{
    checkLineEdits();
}

void MainWindowGestionnaire::on_lineEditStreet_textChanged(const QString &arg1)
{
    checkLineEdits();
}


void MainWindowGestionnaire::on_pushButtonAddAisles_clicked()
{
    //id
    //on récupère tous les ids dans un vecteur
    QVector<int> vectId;
    QSqlQuery getNumeros("select idRay from rayon;");
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
    int idRay = id;
    qDebug()<< idRay;
    QString libelleRay = ui->lineEditAisles->text();

    //requete
    QString textReq = "insert into rayon (idRay, libelleRay, supprimeRay) values (";
    textReq += QString::number(idRay);
    textReq += ", '";
    textReq += libelleRay;
    textReq += "', 0);";


    QSqlQuery ajoutRayon;
    ajoutRayon.exec(textReq);

    ui->lineEditAisles->clear();

    chargeRayons();
}

void MainWindowGestionnaire::on_pushButtonAddCategories_clicked()
{
    //id
    //on récupère tous les ids dans un vecteur
    QVector<int> vectId;
    QSqlQuery getNumeros("select idCat from categorie;");
    while(getNumeros.next())
    {
        int numero = getNumeros.value(0).toInt();
        qDebug()<< "liste id : " << numero;
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
    int idCat = id;
    qDebug()<< "id de la cat a créer : " << idCat;
    QString libelleCat = ui->lineEditCategories->text();

    //requete
    QString textReq = "insert into categorie (idCat, libelleCat, idRay, supprimeCat) values (";
    textReq += QString::number(idCat);
    textReq += ", '";
    textReq += libelleCat;
    textReq += "', ";
    textReq += ui->listWidgetAisles->currentItem()->data(32).toString();
    textReq += ", 0)";
    qDebug()<< textReq;


    QSqlQuery ajoutCategorie;
    ajoutCategorie.exec(textReq);
    ui->lineEditCategories->clear();
    chargeCategories();
}

void MainWindowGestionnaire::on_pushButtonAddProducts_clicked()
{
    //id
    //on récupère tous les ids dans un vecteur
    QVector<int> vectId;
    QSqlQuery getNumeros("select idProd from produit;");
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
    int idProd = id;
    qDebug()<< idProd;
    QString libelleProd = ui->lineEditProducts->text();

    //requete
    QString textReq = "insert into produit (idProd, libelleProd, idCat, supprimeProd, etatProd) values (";
    textReq += QString::number(idProd);
    textReq += ", '";
    textReq += libelleProd;
    textReq += "', ";
    textReq += ui->listWidgetCategories->currentItem()->data(32).toString();
    textReq += ", 0, 'VAL')";
    qDebug()<<textReq;


    QSqlQuery ajoutProduit;
    ajoutProduit.exec(textReq);
    ui->lineEditProducts->clear();
    chargeProduits();

}

void MainWindowGestionnaire::on_lineEditAisles_textChanged(const QString &arg1)
{
    //disable bouton add quand rien d'écrit dans le lineEdit associé
    ui->pushButtonAddAisles->setEnabled(!ui->lineEditAisles->text().isEmpty());
}

void MainWindowGestionnaire::on_lineEditCategories_textChanged(const QString &arg1)
{
    //disable bouton add quand rien d'écrit dans le lineEdit associé
    ui->pushButtonAddCategories->setEnabled(!ui->lineEditCategories->text().isEmpty());
}

void MainWindowGestionnaire::on_lineEditProducts_textChanged(const QString &arg1)
{
    //disable bouton add quand rien d'écrit dans le lineEdit associé & aucune catégorie selectionné
    ui->pushButtonAddProducts->setEnabled(!ui->lineEditProducts->text().isEmpty());
}

void MainWindowGestionnaire::on_listWidgetAisles_clicked(const QModelIndex &index)
{
    ui->lineEditCategories->setEnabled(true);
    ui->pushButtonDeleteAisles->setEnabled(true);
    ui->pushButtonDeleteProducts->setEnabled(false);
    ui->pushButtonDeleteCategories->setEnabled(false);
    ui->lineEditProducts->setEnabled(false);
    ui->listWidgetProducts->clear();
    chargeCategories();
}

void MainWindowGestionnaire::on_listWidgetCategories_clicked(const QModelIndex &index)
{
    ui->lineEditProducts->setEnabled(true);
    ui->pushButtonDeleteCategories->setEnabled(true);
    ui->pushButtonDeleteProducts->setEnabled(false);
    chargeProduits();
}

void MainWindowGestionnaire::on_listWidgetProducts_clicked(const QModelIndex &index)
{
    ui->pushButtonDeleteProducts->setEnabled(true);
}

void MainWindowGestionnaire::on_pushButtonDeleteAisles_clicked()
{
    QString idRayonDel = ui->listWidgetAisles->currentItem()->data(32).toString();
    //requete
    QString textReq = "update rayon set supprimeRay=1 where idRay=";
    textReq += idRayonDel;
    QSqlQuery delRayon;
    delRayon.exec(textReq);
    chargeRayons();
    ui->pushButtonDeleteAisles->setEnabled(false);
}

void MainWindowGestionnaire::on_pushButtonDeleteCategories_clicked()
{
    QString idCatDel = ui->listWidgetCategories->currentItem()->data(32).toString();
    //requete
    QString textReq = "update categorie set supprimeCat=1 where idCat=";
    textReq += idCatDel;
    QSqlQuery delCat;
    delCat.exec(textReq);
    chargeCategories();

    ui->pushButtonDeleteCategories->setEnabled(false);
}

void MainWindowGestionnaire::on_pushButtonDeleteProducts_clicked()
{
    QString idProdDel = ui->listWidgetProducts->currentItem()->data(32).toString();
    //requete
    QString textReq = "update produit set supprimeProd=1 where idProd=";
    textReq += idProdDel;
    QSqlQuery delProd;
    delProd.exec(textReq);
    chargeProduits();

    ui->pushButtonDeleteProducts->setEnabled(false);
}

void MainWindowGestionnaire::on_pushButton_clicked()
{
    qDebug()<<"MainWindowGestionnaire::on_pushButton_clicked()";
    ui->listWidgetProducts->clear();
    ui->listWidgetCategories->clear();
    ui->listWidgetAisles->clear();
    ui->pushButtonDeleteAisles->setEnabled(false);
    DialogModerateSuggestions maDialog;
    maDialog.exec();
    chargeRayons();
}

void MainWindowGestionnaire::on_dateEditVisit_dateChanged(const QDate &date)
{
    chargeControleurs();
}

void MainWindowGestionnaire::on_tableWidgetProducersVisit_cellClicked(int row, int column)
{
    ui->tableWidgetProducersVisit->selectRow(row);
    checkSelect();
}

void MainWindowGestionnaire::on_listWidgetAvailableControllers_clicked(const QModelIndex &index)
{
    checkSelect();
}

void MainWindowGestionnaire::on_pushButtonAssignController_clicked()
{

}
