/********************************************************************************
** Form generated from reading UI file 'mainwindowgestionnaire.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOWGESTIONNAIRE_H
#define UI_MAINWINDOWGESTIONNAIRE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindowGestionnaire
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QLabel *labelBonjour;
    QTabWidget *tabWidget;
    QWidget *tabGestionPerso;
    QHBoxLayout *horizontalLayout_6;
    QVBoxLayout *verticalLayout_2;
    QTableWidget *tableWidget;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pushButtonDelete;
    QSpacerItem *verticalSpacer;
    QFrame *line;
    QVBoxLayout *verticalLayout_6;
    QFormLayout *formLayout;
    QLabel *labelId;
    QLabel *labelId2;
    QLabel *labelHireDate;
    QLabel *labelHireDate2;
    QLabel *labelssNumber;
    QLineEdit *lineEditSecuriteSociale;
    QLabel *labelFirstName;
    QLineEdit *lineEditFirstName;
    QLabel *labelLastName;
    QLineEdit *lineEditLastName;
    QLabel *labelEmail;
    QLineEdit *lineEditEmail;
    QLabel *labelCountry;
    QLineEdit *lineEditCountry;
    QLabel *labelPostalCode;
    QLineEdit *lineEditPostalCode;
    QLabel *labelCity;
    QLineEdit *lineEditCity;
    QLabel *labelStreet;
    QLineEdit *lineEditStreet;
    QLabel *labelType;
    QVBoxLayout *verticalLayout;
    QRadioButton *radioButtonManager;
    QRadioButton *radioButtonController;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *pushButtonEdit;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *pushButtonAdd;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *pushButtonClear;
    QSpacerItem *horizontalSpacer_6;
    QWidget *tabPlaniVisite;
    QHBoxLayout *horizontalLayout_15;
    QVBoxLayout *verticalLayout_9;
    QLabel *label_3;
    QTableWidget *tableWidgetProducersVisit;
    QSpacerItem *verticalSpacer_4;
    QVBoxLayout *verticalLayout_10;
    QHBoxLayout *horizontalLayout_14;
    QLabel *label;
    QDateEdit *dateEditVisit;
    QLabel *label_2;
    QListWidget *listWidgetAvailableControllers;
    QVBoxLayout *verticalLayout_11;
    QLabel *label_4;
    QLineEdit *lineEditTypeVisit;
    QSpacerItem *verticalSpacer_3;
    QPushButton *pushButtonAssignController;
    QWidget *tabAjoutRayonProduit;
    QVBoxLayout *verticalLayout_8;
    QHBoxLayout *horizontalLayout_13;
    QVBoxLayout *verticalLayout_7;
    QLabel *label_6;
    QListWidget *listWidgetAisles;
    QHBoxLayout *horizontalLayout_3;
    QLineEdit *lineEditAisles;
    QPushButton *pushButtonAddAisles;
    QHBoxLayout *horizontalLayout_10;
    QSpacerItem *horizontalSpacer_10;
    QPushButton *pushButtonDeleteAisles;
    QSpacerItem *horizontalSpacer_3;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_7;
    QListWidget *listWidgetCategories;
    QHBoxLayout *horizontalLayout_7;
    QLineEdit *lineEditCategories;
    QPushButton *pushButtonAddCategories;
    QHBoxLayout *horizontalLayout_11;
    QSpacerItem *horizontalSpacer_9;
    QPushButton *pushButtonDeleteCategories;
    QSpacerItem *horizontalSpacer_7;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_8;
    QListWidget *listWidgetProducts;
    QHBoxLayout *horizontalLayout_8;
    QLineEdit *lineEditProducts;
    QPushButton *pushButtonAddProducts;
    QHBoxLayout *horizontalLayout_9;
    QSpacerItem *horizontalSpacer_8;
    QPushButton *pushButtonDeleteProducts;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout_12;
    QSpacerItem *horizontalSpacer_11;
    QPushButton *pushButton;
    QWidget *tabStatistiques;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindowGestionnaire)
    {
        if (MainWindowGestionnaire->objectName().isEmpty())
            MainWindowGestionnaire->setObjectName(QStringLiteral("MainWindowGestionnaire"));
        MainWindowGestionnaire->resize(920, 663);
        centralwidget = new QWidget(MainWindowGestionnaire);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        verticalLayout_3 = new QVBoxLayout(centralwidget);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        labelBonjour = new QLabel(centralwidget);
        labelBonjour->setObjectName(QStringLiteral("labelBonjour"));

        horizontalLayout->addWidget(labelBonjour);


        verticalLayout_3->addLayout(horizontalLayout);

        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabGestionPerso = new QWidget();
        tabGestionPerso->setObjectName(QStringLiteral("tabGestionPerso"));
        horizontalLayout_6 = new QHBoxLayout(tabGestionPerso);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        tableWidget = new QTableWidget(tabGestionPerso);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(tableWidget->sizePolicy().hasHeightForWidth());
        tableWidget->setSizePolicy(sizePolicy);
        tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);

        verticalLayout_2->addWidget(tableWidget);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        pushButtonDelete = new QPushButton(tabGestionPerso);
        pushButtonDelete->setObjectName(QStringLiteral("pushButtonDelete"));

        horizontalLayout_2->addWidget(pushButtonDelete);


        verticalLayout_2->addLayout(horizontalLayout_2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);


        horizontalLayout_6->addLayout(verticalLayout_2);

        line = new QFrame(tabGestionPerso);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);

        horizontalLayout_6->addWidget(line);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));
        labelId = new QLabel(tabGestionPerso);
        labelId->setObjectName(QStringLiteral("labelId"));

        formLayout->setWidget(0, QFormLayout::LabelRole, labelId);

        labelId2 = new QLabel(tabGestionPerso);
        labelId2->setObjectName(QStringLiteral("labelId2"));

        formLayout->setWidget(0, QFormLayout::FieldRole, labelId2);

        labelHireDate = new QLabel(tabGestionPerso);
        labelHireDate->setObjectName(QStringLiteral("labelHireDate"));

        formLayout->setWidget(1, QFormLayout::LabelRole, labelHireDate);

        labelHireDate2 = new QLabel(tabGestionPerso);
        labelHireDate2->setObjectName(QStringLiteral("labelHireDate2"));

        formLayout->setWidget(1, QFormLayout::FieldRole, labelHireDate2);

        labelssNumber = new QLabel(tabGestionPerso);
        labelssNumber->setObjectName(QStringLiteral("labelssNumber"));

        formLayout->setWidget(2, QFormLayout::LabelRole, labelssNumber);

        lineEditSecuriteSociale = new QLineEdit(tabGestionPerso);
        lineEditSecuriteSociale->setObjectName(QStringLiteral("lineEditSecuriteSociale"));

        formLayout->setWidget(2, QFormLayout::FieldRole, lineEditSecuriteSociale);

        labelFirstName = new QLabel(tabGestionPerso);
        labelFirstName->setObjectName(QStringLiteral("labelFirstName"));

        formLayout->setWidget(3, QFormLayout::LabelRole, labelFirstName);

        lineEditFirstName = new QLineEdit(tabGestionPerso);
        lineEditFirstName->setObjectName(QStringLiteral("lineEditFirstName"));

        formLayout->setWidget(3, QFormLayout::FieldRole, lineEditFirstName);

        labelLastName = new QLabel(tabGestionPerso);
        labelLastName->setObjectName(QStringLiteral("labelLastName"));

        formLayout->setWidget(4, QFormLayout::LabelRole, labelLastName);

        lineEditLastName = new QLineEdit(tabGestionPerso);
        lineEditLastName->setObjectName(QStringLiteral("lineEditLastName"));

        formLayout->setWidget(4, QFormLayout::FieldRole, lineEditLastName);

        labelEmail = new QLabel(tabGestionPerso);
        labelEmail->setObjectName(QStringLiteral("labelEmail"));

        formLayout->setWidget(5, QFormLayout::LabelRole, labelEmail);

        lineEditEmail = new QLineEdit(tabGestionPerso);
        lineEditEmail->setObjectName(QStringLiteral("lineEditEmail"));

        formLayout->setWidget(5, QFormLayout::FieldRole, lineEditEmail);

        labelCountry = new QLabel(tabGestionPerso);
        labelCountry->setObjectName(QStringLiteral("labelCountry"));

        formLayout->setWidget(6, QFormLayout::LabelRole, labelCountry);

        lineEditCountry = new QLineEdit(tabGestionPerso);
        lineEditCountry->setObjectName(QStringLiteral("lineEditCountry"));

        formLayout->setWidget(6, QFormLayout::FieldRole, lineEditCountry);

        labelPostalCode = new QLabel(tabGestionPerso);
        labelPostalCode->setObjectName(QStringLiteral("labelPostalCode"));

        formLayout->setWidget(7, QFormLayout::LabelRole, labelPostalCode);

        lineEditPostalCode = new QLineEdit(tabGestionPerso);
        lineEditPostalCode->setObjectName(QStringLiteral("lineEditPostalCode"));

        formLayout->setWidget(7, QFormLayout::FieldRole, lineEditPostalCode);

        labelCity = new QLabel(tabGestionPerso);
        labelCity->setObjectName(QStringLiteral("labelCity"));

        formLayout->setWidget(8, QFormLayout::LabelRole, labelCity);

        lineEditCity = new QLineEdit(tabGestionPerso);
        lineEditCity->setObjectName(QStringLiteral("lineEditCity"));

        formLayout->setWidget(8, QFormLayout::FieldRole, lineEditCity);

        labelStreet = new QLabel(tabGestionPerso);
        labelStreet->setObjectName(QStringLiteral("labelStreet"));

        formLayout->setWidget(9, QFormLayout::LabelRole, labelStreet);

        lineEditStreet = new QLineEdit(tabGestionPerso);
        lineEditStreet->setObjectName(QStringLiteral("lineEditStreet"));

        formLayout->setWidget(9, QFormLayout::FieldRole, lineEditStreet);

        labelType = new QLabel(tabGestionPerso);
        labelType->setObjectName(QStringLiteral("labelType"));

        formLayout->setWidget(10, QFormLayout::LabelRole, labelType);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        radioButtonManager = new QRadioButton(tabGestionPerso);
        radioButtonManager->setObjectName(QStringLiteral("radioButtonManager"));

        verticalLayout->addWidget(radioButtonManager);

        radioButtonController = new QRadioButton(tabGestionPerso);
        radioButtonController->setObjectName(QStringLiteral("radioButtonController"));

        verticalLayout->addWidget(radioButtonController);


        formLayout->setLayout(10, QFormLayout::FieldRole, verticalLayout);


        verticalLayout_6->addLayout(formLayout);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        pushButtonEdit = new QPushButton(tabGestionPerso);
        pushButtonEdit->setObjectName(QStringLiteral("pushButtonEdit"));

        horizontalLayout_5->addWidget(pushButtonEdit);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_4);

        pushButtonAdd = new QPushButton(tabGestionPerso);
        pushButtonAdd->setObjectName(QStringLiteral("pushButtonAdd"));

        horizontalLayout_5->addWidget(pushButtonAdd);


        verticalLayout_6->addLayout(horizontalLayout_5);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_5);

        pushButtonClear = new QPushButton(tabGestionPerso);
        pushButtonClear->setObjectName(QStringLiteral("pushButtonClear"));

        horizontalLayout_4->addWidget(pushButtonClear);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_6);


        verticalLayout_6->addLayout(horizontalLayout_4);


        horizontalLayout_6->addLayout(verticalLayout_6);

        tabWidget->addTab(tabGestionPerso, QString());
        tabPlaniVisite = new QWidget();
        tabPlaniVisite->setObjectName(QStringLiteral("tabPlaniVisite"));
        horizontalLayout_15 = new QHBoxLayout(tabPlaniVisite);
        horizontalLayout_15->setObjectName(QStringLiteral("horizontalLayout_15"));
        verticalLayout_9 = new QVBoxLayout();
        verticalLayout_9->setObjectName(QStringLiteral("verticalLayout_9"));
        label_3 = new QLabel(tabPlaniVisite);
        label_3->setObjectName(QStringLiteral("label_3"));

        verticalLayout_9->addWidget(label_3);

        tableWidgetProducersVisit = new QTableWidget(tabPlaniVisite);
        tableWidgetProducersVisit->setObjectName(QStringLiteral("tableWidgetProducersVisit"));

        verticalLayout_9->addWidget(tableWidgetProducersVisit);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_9->addItem(verticalSpacer_4);


        horizontalLayout_15->addLayout(verticalLayout_9);

        verticalLayout_10 = new QVBoxLayout();
        verticalLayout_10->setObjectName(QStringLiteral("verticalLayout_10"));
        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setObjectName(QStringLiteral("horizontalLayout_14"));
        label = new QLabel(tabPlaniVisite);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout_14->addWidget(label);

        dateEditVisit = new QDateEdit(tabPlaniVisite);
        dateEditVisit->setObjectName(QStringLiteral("dateEditVisit"));

        horizontalLayout_14->addWidget(dateEditVisit);


        verticalLayout_10->addLayout(horizontalLayout_14);

        label_2 = new QLabel(tabPlaniVisite);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout_10->addWidget(label_2);

        listWidgetAvailableControllers = new QListWidget(tabPlaniVisite);
        listWidgetAvailableControllers->setObjectName(QStringLiteral("listWidgetAvailableControllers"));

        verticalLayout_10->addWidget(listWidgetAvailableControllers);


        horizontalLayout_15->addLayout(verticalLayout_10);

        verticalLayout_11 = new QVBoxLayout();
        verticalLayout_11->setObjectName(QStringLiteral("verticalLayout_11"));
        label_4 = new QLabel(tabPlaniVisite);
        label_4->setObjectName(QStringLiteral("label_4"));

        verticalLayout_11->addWidget(label_4);

        lineEditTypeVisit = new QLineEdit(tabPlaniVisite);
        lineEditTypeVisit->setObjectName(QStringLiteral("lineEditTypeVisit"));

        verticalLayout_11->addWidget(lineEditTypeVisit);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_11->addItem(verticalSpacer_3);

        pushButtonAssignController = new QPushButton(tabPlaniVisite);
        pushButtonAssignController->setObjectName(QStringLiteral("pushButtonAssignController"));

        verticalLayout_11->addWidget(pushButtonAssignController);


        horizontalLayout_15->addLayout(verticalLayout_11);

        tabWidget->addTab(tabPlaniVisite, QString());
        tabAjoutRayonProduit = new QWidget();
        tabAjoutRayonProduit->setObjectName(QStringLiteral("tabAjoutRayonProduit"));
        verticalLayout_8 = new QVBoxLayout(tabAjoutRayonProduit);
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setObjectName(QStringLiteral("horizontalLayout_13"));
        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        label_6 = new QLabel(tabAjoutRayonProduit);
        label_6->setObjectName(QStringLiteral("label_6"));

        verticalLayout_7->addWidget(label_6);

        listWidgetAisles = new QListWidget(tabAjoutRayonProduit);
        listWidgetAisles->setObjectName(QStringLiteral("listWidgetAisles"));

        verticalLayout_7->addWidget(listWidgetAisles);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        lineEditAisles = new QLineEdit(tabAjoutRayonProduit);
        lineEditAisles->setObjectName(QStringLiteral("lineEditAisles"));

        horizontalLayout_3->addWidget(lineEditAisles);

        pushButtonAddAisles = new QPushButton(tabAjoutRayonProduit);
        pushButtonAddAisles->setObjectName(QStringLiteral("pushButtonAddAisles"));

        horizontalLayout_3->addWidget(pushButtonAddAisles);


        verticalLayout_7->addLayout(horizontalLayout_3);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_10);

        pushButtonDeleteAisles = new QPushButton(tabAjoutRayonProduit);
        pushButtonDeleteAisles->setObjectName(QStringLiteral("pushButtonDeleteAisles"));

        horizontalLayout_10->addWidget(pushButtonDeleteAisles);


        verticalLayout_7->addLayout(horizontalLayout_10);


        horizontalLayout_13->addLayout(verticalLayout_7);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_13->addItem(horizontalSpacer_3);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        label_7 = new QLabel(tabAjoutRayonProduit);
        label_7->setObjectName(QStringLiteral("label_7"));

        verticalLayout_5->addWidget(label_7);

        listWidgetCategories = new QListWidget(tabAjoutRayonProduit);
        listWidgetCategories->setObjectName(QStringLiteral("listWidgetCategories"));

        verticalLayout_5->addWidget(listWidgetCategories);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        lineEditCategories = new QLineEdit(tabAjoutRayonProduit);
        lineEditCategories->setObjectName(QStringLiteral("lineEditCategories"));

        horizontalLayout_7->addWidget(lineEditCategories);

        pushButtonAddCategories = new QPushButton(tabAjoutRayonProduit);
        pushButtonAddCategories->setObjectName(QStringLiteral("pushButtonAddCategories"));

        horizontalLayout_7->addWidget(pushButtonAddCategories);


        verticalLayout_5->addLayout(horizontalLayout_7);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName(QStringLiteral("horizontalLayout_11"));
        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_11->addItem(horizontalSpacer_9);

        pushButtonDeleteCategories = new QPushButton(tabAjoutRayonProduit);
        pushButtonDeleteCategories->setObjectName(QStringLiteral("pushButtonDeleteCategories"));

        horizontalLayout_11->addWidget(pushButtonDeleteCategories);


        verticalLayout_5->addLayout(horizontalLayout_11);


        horizontalLayout_13->addLayout(verticalLayout_5);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_13->addItem(horizontalSpacer_7);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        label_8 = new QLabel(tabAjoutRayonProduit);
        label_8->setObjectName(QStringLiteral("label_8"));

        verticalLayout_4->addWidget(label_8);

        listWidgetProducts = new QListWidget(tabAjoutRayonProduit);
        listWidgetProducts->setObjectName(QStringLiteral("listWidgetProducts"));

        verticalLayout_4->addWidget(listWidgetProducts);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        lineEditProducts = new QLineEdit(tabAjoutRayonProduit);
        lineEditProducts->setObjectName(QStringLiteral("lineEditProducts"));

        horizontalLayout_8->addWidget(lineEditProducts);

        pushButtonAddProducts = new QPushButton(tabAjoutRayonProduit);
        pushButtonAddProducts->setObjectName(QStringLiteral("pushButtonAddProducts"));

        horizontalLayout_8->addWidget(pushButtonAddProducts);


        verticalLayout_4->addLayout(horizontalLayout_8);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_8);

        pushButtonDeleteProducts = new QPushButton(tabAjoutRayonProduit);
        pushButtonDeleteProducts->setObjectName(QStringLiteral("pushButtonDeleteProducts"));

        horizontalLayout_9->addWidget(pushButtonDeleteProducts);


        verticalLayout_4->addLayout(horizontalLayout_9);


        horizontalLayout_13->addLayout(verticalLayout_4);


        verticalLayout_8->addLayout(horizontalLayout_13);

        verticalSpacer_2 = new QSpacerItem(20, 41, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_8->addItem(verticalSpacer_2);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName(QStringLiteral("horizontalLayout_12"));
        horizontalSpacer_11 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_12->addItem(horizontalSpacer_11);

        pushButton = new QPushButton(tabAjoutRayonProduit);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        horizontalLayout_12->addWidget(pushButton);


        verticalLayout_8->addLayout(horizontalLayout_12);

        tabWidget->addTab(tabAjoutRayonProduit, QString());
        tabStatistiques = new QWidget();
        tabStatistiques->setObjectName(QStringLiteral("tabStatistiques"));
        tabWidget->addTab(tabStatistiques, QString());

        verticalLayout_3->addWidget(tabWidget);

        MainWindowGestionnaire->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindowGestionnaire);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 920, 27));
        MainWindowGestionnaire->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindowGestionnaire);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        MainWindowGestionnaire->setStatusBar(statusbar);

        retranslateUi(MainWindowGestionnaire);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindowGestionnaire);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindowGestionnaire)
    {
        MainWindowGestionnaire->setWindowTitle(QApplication::translate("MainWindowGestionnaire", "New World Manager", 0));
        labelBonjour->setText(QString());
        pushButtonDelete->setText(QApplication::translate("MainWindowGestionnaire", "&Delete", 0));
        labelId->setText(QApplication::translate("MainWindowGestionnaire", "id", 0));
        labelId2->setText(QString());
        labelHireDate->setText(QApplication::translate("MainWindowGestionnaire", "Hire date", 0));
        labelHireDate2->setText(QString());
        labelssNumber->setText(QApplication::translate("MainWindowGestionnaire", "N\302\260 securite sociale", 0));
        labelFirstName->setText(QApplication::translate("MainWindowGestionnaire", "First name", 0));
        labelLastName->setText(QApplication::translate("MainWindowGestionnaire", "Last name", 0));
        labelEmail->setText(QApplication::translate("MainWindowGestionnaire", "Email", 0));
        labelCountry->setText(QApplication::translate("MainWindowGestionnaire", "Country", 0));
        labelPostalCode->setText(QApplication::translate("MainWindowGestionnaire", "Postal code", 0));
        labelCity->setText(QApplication::translate("MainWindowGestionnaire", "City", 0));
        labelStreet->setText(QApplication::translate("MainWindowGestionnaire", "Street", 0));
        labelType->setText(QApplication::translate("MainWindowGestionnaire", "Type", 0));
        radioButtonManager->setText(QApplication::translate("MainWindowGestionnaire", "Manager", 0));
        radioButtonController->setText(QApplication::translate("MainWindowGestionnaire", "Controller", 0));
        pushButtonEdit->setText(QApplication::translate("MainWindowGestionnaire", "&Edit", 0));
        pushButtonAdd->setText(QApplication::translate("MainWindowGestionnaire", "&Add", 0));
        pushButtonClear->setText(QApplication::translate("MainWindowGestionnaire", "&Clear", 0));
        tabWidget->setTabText(tabWidget->indexOf(tabGestionPerso), QApplication::translate("MainWindowGestionnaire", "&Staff management", 0));
        label_3->setText(QApplication::translate("MainWindowGestionnaire", "Producers :", 0));
        label->setText(QApplication::translate("MainWindowGestionnaire", "Choose a date :", 0));
        label_2->setText(QApplication::translate("MainWindowGestionnaire", "Available controllers :", 0));
        label_4->setText(QApplication::translate("MainWindowGestionnaire", "Type of visit :", 0));
        pushButtonAssignController->setText(QApplication::translate("MainWindowGestionnaire", "&Assign selected controller", 0));
        tabWidget->setTabText(tabWidget->indexOf(tabPlaniVisite), QApplication::translate("MainWindowGestionnaire", "&Visits planning", 0));
        label_6->setText(QApplication::translate("MainWindowGestionnaire", "Aisles", 0));
        pushButtonAddAisles->setText(QApplication::translate("MainWindowGestionnaire", "Add", 0));
        pushButtonDeleteAisles->setText(QApplication::translate("MainWindowGestionnaire", "Delete", 0));
        label_7->setText(QApplication::translate("MainWindowGestionnaire", "Categories", 0));
        pushButtonAddCategories->setText(QApplication::translate("MainWindowGestionnaire", "Add", 0));
        pushButtonDeleteCategories->setText(QApplication::translate("MainWindowGestionnaire", "Delete", 0));
        label_8->setText(QApplication::translate("MainWindowGestionnaire", "Products", 0));
        pushButtonAddProducts->setText(QApplication::translate("MainWindowGestionnaire", "Add", 0));
        pushButtonDeleteProducts->setText(QApplication::translate("MainWindowGestionnaire", "Delete", 0));
        pushButton->setText(QApplication::translate("MainWindowGestionnaire", "&Moderate suggestions", 0));
        tabWidget->setTabText(tabWidget->indexOf(tabAjoutRayonProduit), QApplication::translate("MainWindowGestionnaire", "&Products", 0));
        tabWidget->setTabText(tabWidget->indexOf(tabStatistiques), QApplication::translate("MainWindowGestionnaire", "&Statistics", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindowGestionnaire: public Ui_MainWindowGestionnaire {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOWGESTIONNAIRE_H
