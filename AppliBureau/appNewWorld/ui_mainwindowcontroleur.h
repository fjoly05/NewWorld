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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindowControleur
{
public:
    QWidget *centralwidget;
    QTableWidget *tableWidget;
    QTextEdit *textEdit;
    QLabel *label;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *labelBonjour;
    QSpacerItem *horizontalSpacer;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindowControleur)
    {
        if (MainWindowControleur->objectName().isEmpty())
            MainWindowControleur->setObjectName(QStringLiteral("MainWindowControleur"));
        MainWindowControleur->resize(800, 600);
        centralwidget = new QWidget(MainWindowControleur);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        tableWidget = new QTableWidget(centralwidget);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setGeometry(QRect(0, 50, 281, 471));
        textEdit = new QTextEdit(centralwidget);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(410, 310, 301, 201));
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(420, 250, 67, 21));
        widget = new QWidget(centralwidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(30, 10, 48, 23));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        labelBonjour = new QLabel(widget);
        labelBonjour->setObjectName(QStringLiteral("labelBonjour"));

        horizontalLayout->addWidget(labelBonjour);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        MainWindowControleur->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindowControleur);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 27));
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
        label->setText(QApplication::translate("MainWindowControleur", "TextLabel", 0));
        labelBonjour->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindowControleur: public Ui_MainWindowControleur {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOWCONTROLEUR_H
