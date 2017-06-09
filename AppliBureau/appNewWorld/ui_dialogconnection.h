/********************************************************************************
** Form generated from reading UI file 'dialogconnection.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGCONNECTION_H
#define UI_DIALOGCONNECTION_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_DialogConnection
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QLabel *label;
    QSpacerItem *horizontalSpacer_2;
    QLineEdit *lineEditLogin;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_3;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer_4;
    QLineEdit *lineEditPassword;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pushButtonQuit;
    QPushButton *pushButtonConnection;

    void setupUi(QDialog *DialogConnection)
    {
        if (DialogConnection->objectName().isEmpty())
            DialogConnection->setObjectName(QStringLiteral("DialogConnection"));
        DialogConnection->resize(203, 187);
        verticalLayout = new QVBoxLayout(DialogConnection);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        label = new QLabel(DialogConnection);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout_2->addWidget(label);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout_2);

        lineEditLogin = new QLineEdit(DialogConnection);
        lineEditLogin->setObjectName(QStringLiteral("lineEditLogin"));

        verticalLayout->addWidget(lineEditLogin);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        label_2 = new QLabel(DialogConnection);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout->addWidget(label_2);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_4);


        verticalLayout->addLayout(horizontalLayout);

        lineEditPassword = new QLineEdit(DialogConnection);
        lineEditPassword->setObjectName(QStringLiteral("lineEditPassword"));
        lineEditPassword->setEchoMode(QLineEdit::Password);

        verticalLayout->addWidget(lineEditPassword);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        pushButtonQuit = new QPushButton(DialogConnection);
        pushButtonQuit->setObjectName(QStringLiteral("pushButtonQuit"));

        horizontalLayout_3->addWidget(pushButtonQuit);

        pushButtonConnection = new QPushButton(DialogConnection);
        pushButtonConnection->setObjectName(QStringLiteral("pushButtonConnection"));

        horizontalLayout_3->addWidget(pushButtonConnection);


        verticalLayout->addLayout(horizontalLayout_3);


        retranslateUi(DialogConnection);

        QMetaObject::connectSlotsByName(DialogConnection);
    } // setupUi

    void retranslateUi(QDialog *DialogConnection)
    {
        DialogConnection->setWindowTitle(QApplication::translate("DialogConnection", "Connection", 0));
        label->setText(QApplication::translate("DialogConnection", "Login", 0));
        label_2->setText(QApplication::translate("DialogConnection", "Password", 0));
        pushButtonQuit->setText(QApplication::translate("DialogConnection", "&Quit", 0));
        pushButtonConnection->setText(QApplication::translate("DialogConnection", "&Connection", 0));
    } // retranslateUi

};

namespace Ui {
    class DialogConnection: public Ui_DialogConnection {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGCONNECTION_H
