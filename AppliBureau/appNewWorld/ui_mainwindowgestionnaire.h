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
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
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
    QLabel *label_3;
    QLineEdit *lineEditSecuriteSociale;
    QLabel *label;
    QLineEdit *lineEditFirstName;
    QLabel *label_2;
    QLineEdit *lineEditLastName;
    QLabel *label_4;
    QLineEdit *lineEditPhone;
    QLabel *label_5;
    QLineEdit *lineEditEmail;
    QLabel *label_10;
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
    QWidget *tabAjoutRayonProduit;
    QWidget *tabStatistiques;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindowGestionnaire)
    {
        if (MainWindowGestionnaire->objectName().isEmpty())
            MainWindowGestionnaire->setObjectName(QStringLiteral("MainWindowGestionnaire"));
        MainWindowGestionnaire->resize(590, 546);
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

        label_3 = new QLabel(tabGestionPerso);
        label_3->setObjectName(QStringLiteral("label_3"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_3);

        lineEditSecuriteSociale = new QLineEdit(tabGestionPerso);
        lineEditSecuriteSociale->setObjectName(QStringLiteral("lineEditSecuriteSociale"));

        formLayout->setWidget(2, QFormLayout::FieldRole, lineEditSecuriteSociale);

        label = new QLabel(tabGestionPerso);
        label->setObjectName(QStringLiteral("label"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label);

        lineEditFirstName = new QLineEdit(tabGestionPerso);
        lineEditFirstName->setObjectName(QStringLiteral("lineEditFirstName"));

        formLayout->setWidget(3, QFormLayout::FieldRole, lineEditFirstName);

        label_2 = new QLabel(tabGestionPerso);
        label_2->setObjectName(QStringLiteral("label_2"));

        formLayout->setWidget(4, QFormLayout::LabelRole, label_2);

        lineEditLastName = new QLineEdit(tabGestionPerso);
        lineEditLastName->setObjectName(QStringLiteral("lineEditLastName"));

        formLayout->setWidget(4, QFormLayout::FieldRole, lineEditLastName);

        label_4 = new QLabel(tabGestionPerso);
        label_4->setObjectName(QStringLiteral("label_4"));

        formLayout->setWidget(5, QFormLayout::LabelRole, label_4);

        lineEditPhone = new QLineEdit(tabGestionPerso);
        lineEditPhone->setObjectName(QStringLiteral("lineEditPhone"));

        formLayout->setWidget(5, QFormLayout::FieldRole, lineEditPhone);

        label_5 = new QLabel(tabGestionPerso);
        label_5->setObjectName(QStringLiteral("label_5"));

        formLayout->setWidget(6, QFormLayout::LabelRole, label_5);

        lineEditEmail = new QLineEdit(tabGestionPerso);
        lineEditEmail->setObjectName(QStringLiteral("lineEditEmail"));

        formLayout->setWidget(6, QFormLayout::FieldRole, lineEditEmail);

        label_10 = new QLabel(tabGestionPerso);
        label_10->setObjectName(QStringLiteral("label_10"));

        formLayout->setWidget(7, QFormLayout::LabelRole, label_10);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        radioButtonManager = new QRadioButton(tabGestionPerso);
        radioButtonManager->setObjectName(QStringLiteral("radioButtonManager"));

        verticalLayout->addWidget(radioButtonManager);

        radioButtonController = new QRadioButton(tabGestionPerso);
        radioButtonController->setObjectName(QStringLiteral("radioButtonController"));

        verticalLayout->addWidget(radioButtonController);


        formLayout->setLayout(7, QFormLayout::FieldRole, verticalLayout);


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
        tabWidget->addTab(tabPlaniVisite, QString());
        tabAjoutRayonProduit = new QWidget();
        tabAjoutRayonProduit->setObjectName(QStringLiteral("tabAjoutRayonProduit"));
        tabWidget->addTab(tabAjoutRayonProduit, QString());
        tabStatistiques = new QWidget();
        tabStatistiques->setObjectName(QStringLiteral("tabStatistiques"));
        tabWidget->addTab(tabStatistiques, QString());

        verticalLayout_3->addWidget(tabWidget);

        MainWindowGestionnaire->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindowGestionnaire);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 590, 27));
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
        label_3->setText(QApplication::translate("MainWindowGestionnaire", "N\302\260 securite sociale", 0));
        label->setText(QApplication::translate("MainWindowGestionnaire", "First name", 0));
        label_2->setText(QApplication::translate("MainWindowGestionnaire", "Last name", 0));
        label_4->setText(QApplication::translate("MainWindowGestionnaire", "Phone number", 0));
        label_5->setText(QApplication::translate("MainWindowGestionnaire", "Email", 0));
        label_10->setText(QApplication::translate("MainWindowGestionnaire", "Type", 0));
        radioButtonManager->setText(QApplication::translate("MainWindowGestionnaire", "Manager", 0));
        radioButtonController->setText(QApplication::translate("MainWindowGestionnaire", "Controller", 0));
        pushButtonEdit->setText(QApplication::translate("MainWindowGestionnaire", "&Edit", 0));
        pushButtonAdd->setText(QApplication::translate("MainWindowGestionnaire", "&Add", 0));
        pushButtonClear->setText(QApplication::translate("MainWindowGestionnaire", "&Clear", 0));
        tabWidget->setTabText(tabWidget->indexOf(tabGestionPerso), QApplication::translate("MainWindowGestionnaire", "&Staff management", 0));
        tabWidget->setTabText(tabWidget->indexOf(tabPlaniVisite), QApplication::translate("MainWindowGestionnaire", "&Visits planning", 0));
        tabWidget->setTabText(tabWidget->indexOf(tabAjoutRayonProduit), QApplication::translate("MainWindowGestionnaire", "&Aisle && Type", 0));
        tabWidget->setTabText(tabWidget->indexOf(tabStatistiques), QApplication::translate("MainWindowGestionnaire", "&Statistics", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindowGestionnaire: public Ui_MainWindowGestionnaire {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOWGESTIONNAIRE_H
