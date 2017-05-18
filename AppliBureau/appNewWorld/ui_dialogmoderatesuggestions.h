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
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_DialogModerateSuggestions
{
public:
    QVBoxLayout *verticalLayout_6;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QListWidget *listWidgetSuggestedProds;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButtonAccept;
    QPushButton *pushButtonReject;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_2;
    QListWidget *listWidgetAcceptedProds;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_3;
    QTextEdit *textEditDescription;
    QVBoxLayout *verticalLayout_4;
    QSpacerItem *verticalSpacer;
    QPushButton *pushButtonValidation;

    void setupUi(QDialog *DialogModerateSuggestions)
    {
        if (DialogModerateSuggestions->objectName().isEmpty())
            DialogModerateSuggestions->setObjectName(QStringLiteral("DialogModerateSuggestions"));
        DialogModerateSuggestions->resize(635, 470);
        verticalLayout_6 = new QVBoxLayout(DialogModerateSuggestions);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label = new QLabel(DialogModerateSuggestions);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout_2->addWidget(label);

        listWidgetSuggestedProds = new QListWidget(DialogModerateSuggestions);
        listWidgetSuggestedProds->setObjectName(QStringLiteral("listWidgetSuggestedProds"));

        verticalLayout_2->addWidget(listWidgetSuggestedProds);


        horizontalLayout->addLayout(verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        pushButtonAccept = new QPushButton(DialogModerateSuggestions);
        pushButtonAccept->setObjectName(QStringLiteral("pushButtonAccept"));

        verticalLayout->addWidget(pushButtonAccept);

        pushButtonReject = new QPushButton(DialogModerateSuggestions);
        pushButtonReject->setObjectName(QStringLiteral("pushButtonReject"));

        verticalLayout->addWidget(pushButtonReject);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        label_2 = new QLabel(DialogModerateSuggestions);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout_3->addWidget(label_2);

        listWidgetAcceptedProds = new QListWidget(DialogModerateSuggestions);
        listWidgetAcceptedProds->setObjectName(QStringLiteral("listWidgetAcceptedProds"));

        verticalLayout_3->addWidget(listWidgetAcceptedProds);


        horizontalLayout->addLayout(verticalLayout_3);


        verticalLayout_6->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        label_3 = new QLabel(DialogModerateSuggestions);
        label_3->setObjectName(QStringLiteral("label_3"));

        verticalLayout_5->addWidget(label_3);

        textEditDescription = new QTextEdit(DialogModerateSuggestions);
        textEditDescription->setObjectName(QStringLiteral("textEditDescription"));

        verticalLayout_5->addWidget(textEditDescription);


        horizontalLayout_2->addLayout(verticalLayout_5);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer);

        pushButtonValidation = new QPushButton(DialogModerateSuggestions);
        pushButtonValidation->setObjectName(QStringLiteral("pushButtonValidation"));

        verticalLayout_4->addWidget(pushButtonValidation);


        horizontalLayout_2->addLayout(verticalLayout_4);


        verticalLayout_6->addLayout(horizontalLayout_2);


        retranslateUi(DialogModerateSuggestions);

        QMetaObject::connectSlotsByName(DialogModerateSuggestions);
    } // setupUi

    void retranslateUi(QDialog *DialogModerateSuggestions)
    {
        DialogModerateSuggestions->setWindowTitle(QApplication::translate("DialogModerateSuggestions", "Moderate suggestions", 0));
        label->setText(QApplication::translate("DialogModerateSuggestions", "Suggested products :", 0));
        pushButtonAccept->setText(QApplication::translate("DialogModerateSuggestions", "&Accept", 0));
        pushButtonReject->setText(QApplication::translate("DialogModerateSuggestions", "&Reject", 0));
        label_2->setText(QApplication::translate("DialogModerateSuggestions", "Accepted products :", 0));
        label_3->setText(QApplication::translate("DialogModerateSuggestions", "Description :", 0));
        pushButtonValidation->setText(QApplication::translate("DialogModerateSuggestions", "&Validate", 0));
    } // retranslateUi

};

namespace Ui {
    class DialogModerateSuggestions: public Ui_DialogModerateSuggestions {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGMODERATESUGGESTIONS_H
