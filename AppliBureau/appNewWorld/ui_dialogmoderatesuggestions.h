/********************************************************************************
** Form generated from reading UI file 'dialogmoderatesuggestions.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGMODERATESUGGESTIONS_H
#define UI_DIALOGMODERATESUGGESTIONS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_DialogModerateSuggestions
{
public:
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_4;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QListWidget *listWidgetSuggestedProds;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_3;
    QTextBrowser *textBrowserDescription;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pushButtonAccept;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButtonReject;
    QSpacerItem *horizontalSpacer_3;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_2;
    QListWidget *listWidgetAcceptedProds;
    QVBoxLayout *verticalLayout;
    QLabel *label_4;
    QListWidget *listWidgetRejectedProds;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *pushButtonCancel;
    QPushButton *pushButtonValidation;

    void setupUi(QDialog *DialogModerateSuggestions)
    {
        if (DialogModerateSuggestions->objectName().isEmpty())
            DialogModerateSuggestions->setObjectName(QStringLiteral("DialogModerateSuggestions"));
        DialogModerateSuggestions->resize(542, 548);
        verticalLayout_4 = new QVBoxLayout(DialogModerateSuggestions);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label = new QLabel(DialogModerateSuggestions);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout_2->addWidget(label);

        listWidgetSuggestedProds = new QListWidget(DialogModerateSuggestions);
        listWidgetSuggestedProds->setObjectName(QStringLiteral("listWidgetSuggestedProds"));

        verticalLayout_2->addWidget(listWidgetSuggestedProds);


        horizontalLayout_4->addLayout(verticalLayout_2);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        label_3 = new QLabel(DialogModerateSuggestions);
        label_3->setObjectName(QStringLiteral("label_3"));

        verticalLayout_5->addWidget(label_3);

        textBrowserDescription = new QTextBrowser(DialogModerateSuggestions);
        textBrowserDescription->setObjectName(QStringLiteral("textBrowserDescription"));

        verticalLayout_5->addWidget(textBrowserDescription);


        horizontalLayout_4->addLayout(verticalLayout_5);


        verticalLayout_4->addLayout(horizontalLayout_4);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        pushButtonAccept = new QPushButton(DialogModerateSuggestions);
        pushButtonAccept->setObjectName(QStringLiteral("pushButtonAccept"));

        horizontalLayout_2->addWidget(pushButtonAccept);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        pushButtonReject = new QPushButton(DialogModerateSuggestions);
        pushButtonReject->setObjectName(QStringLiteral("pushButtonReject"));

        horizontalLayout_2->addWidget(pushButtonReject);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);


        verticalLayout_4->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        label_2 = new QLabel(DialogModerateSuggestions);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout_3->addWidget(label_2);

        listWidgetAcceptedProds = new QListWidget(DialogModerateSuggestions);
        listWidgetAcceptedProds->setObjectName(QStringLiteral("listWidgetAcceptedProds"));

        verticalLayout_3->addWidget(listWidgetAcceptedProds);


        horizontalLayout_3->addLayout(verticalLayout_3);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label_4 = new QLabel(DialogModerateSuggestions);
        label_4->setObjectName(QStringLiteral("label_4"));

        verticalLayout->addWidget(label_4);

        listWidgetRejectedProds = new QListWidget(DialogModerateSuggestions);
        listWidgetRejectedProds->setObjectName(QStringLiteral("listWidgetRejectedProds"));

        verticalLayout->addWidget(listWidgetRejectedProds);


        horizontalLayout_3->addLayout(verticalLayout);


        verticalLayout_4->addLayout(horizontalLayout_3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_4);

        pushButtonCancel = new QPushButton(DialogModerateSuggestions);
        pushButtonCancel->setObjectName(QStringLiteral("pushButtonCancel"));

        horizontalLayout->addWidget(pushButtonCancel);

        pushButtonValidation = new QPushButton(DialogModerateSuggestions);
        pushButtonValidation->setObjectName(QStringLiteral("pushButtonValidation"));

        horizontalLayout->addWidget(pushButtonValidation);


        verticalLayout_4->addLayout(horizontalLayout);


        retranslateUi(DialogModerateSuggestions);

        QMetaObject::connectSlotsByName(DialogModerateSuggestions);
    } // setupUi

    void retranslateUi(QDialog *DialogModerateSuggestions)
    {
        DialogModerateSuggestions->setWindowTitle(QApplication::translate("DialogModerateSuggestions", "Moderate suggestions", 0));
        label->setText(QApplication::translate("DialogModerateSuggestions", "Suggested products :", 0));
        label_3->setText(QApplication::translate("DialogModerateSuggestions", "Description :", 0));
        pushButtonAccept->setText(QApplication::translate("DialogModerateSuggestions", "&Accept", 0));
        pushButtonReject->setText(QApplication::translate("DialogModerateSuggestions", "&Reject", 0));
        label_2->setText(QApplication::translate("DialogModerateSuggestions", "Accepted products :", 0));
        label_4->setText(QApplication::translate("DialogModerateSuggestions", "Rejected products :", 0));
        pushButtonCancel->setText(QApplication::translate("DialogModerateSuggestions", "&Cancel", 0));
        pushButtonValidation->setText(QApplication::translate("DialogModerateSuggestions", "&Validate", 0));
    } // retranslateUi

};

namespace Ui {
    class DialogModerateSuggestions: public Ui_DialogModerateSuggestions {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGMODERATESUGGESTIONS_H
