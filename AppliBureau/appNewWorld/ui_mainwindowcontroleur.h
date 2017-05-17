/********************************************************************************
** Form generated from reading UI file 'mainwindowcontroleur.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOWCONTROLEUR_H
#define UI_MAINWINDOWCONTROLEUR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindowControleur
{
public:
    QWidget *centralwidget;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindowControleur)
    {
        if (MainWindowControleur->objectName().isEmpty())
            MainWindowControleur->setObjectName(QStringLiteral("MainWindowControleur"));
        MainWindowControleur->resize(800, 600);
        centralwidget = new QWidget(MainWindowControleur);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        MainWindowControleur->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindowControleur);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 29));
        MainWindowControleur->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindowControleur);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        MainWindowControleur->setStatusBar(statusbar);

        retranslateUi(MainWindowControleur);

        QMetaObject::connectSlotsByName(MainWindowControleur);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindowControleur)
    {
        MainWindowControleur->setWindowTitle(QApplication::translate("MainWindowControleur", "New World Controleur", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindowControleur: public Ui_MainWindowControleur {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOWCONTROLEUR_H
