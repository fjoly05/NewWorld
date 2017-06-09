/********************************************************************************
** Form generated from reading UI file 'dialoginfocontroleur.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGINFOCONTROLEUR_H
#define UI_DIALOGINFOCONTROLEUR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_DialogInfoControleur
{
public:
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *labelPrenomNom;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout;
    QListWidget *listWidget;
    QVBoxLayout *verticalLayout;
    QFormLayout *formLayout;
    QLabel *label;
    QLabel *labelManager;
    QLabel *label_2;
    QLabel *labelType;
    QSpacerItem *verticalSpacer;
    QPushButton *pushButtonOk;

    void setupUi(QDialog *DialogInfoControleur)
    {
        if (DialogInfoControleur->objectName().isEmpty())
            DialogInfoControleur->setObjectName(QStringLiteral("DialogInfoControleur"));
        DialogInfoControleur->resize(447, 241);
        verticalLayout_2 = new QVBoxLayout(DialogInfoControleur);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        labelPrenomNom = new QLabel(DialogInfoControleur);
        labelPrenomNom->setObjectName(QStringLiteral("labelPrenomNom"));

        horizontalLayout_2->addWidget(labelPrenomNom);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);


        verticalLayout_2->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        listWidget = new QListWidget(DialogInfoControleur);
        listWidget->setObjectName(QStringLiteral("listWidget"));

        horizontalLayout->addWidget(listWidget);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        label = new QLabel(DialogInfoControleur);
        label->setObjectName(QStringLiteral("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        labelManager = new QLabel(DialogInfoControleur);
        labelManager->setObjectName(QStringLiteral("labelManager"));

        formLayout->setWidget(0, QFormLayout::FieldRole, labelManager);

        label_2 = new QLabel(DialogInfoControleur);
        label_2->setObjectName(QStringLiteral("label_2"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        labelType = new QLabel(DialogInfoControleur);
        labelType->setObjectName(QStringLiteral("labelType"));

        formLayout->setWidget(1, QFormLayout::FieldRole, labelType);


        verticalLayout->addLayout(formLayout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        pushButtonOk = new QPushButton(DialogInfoControleur);
        pushButtonOk->setObjectName(QStringLiteral("pushButtonOk"));

        verticalLayout->addWidget(pushButtonOk);


        horizontalLayout->addLayout(verticalLayout);


        verticalLayout_2->addLayout(horizontalLayout);


        retranslateUi(DialogInfoControleur);

        QMetaObject::connectSlotsByName(DialogInfoControleur);
    } // setupUi

    void retranslateUi(QDialog *DialogInfoControleur)
    {
        DialogInfoControleur->setWindowTitle(QApplication::translate("DialogInfoControleur", "Dialog", 0));
        labelPrenomNom->setText(QString());
        label->setText(QApplication::translate("DialogInfoControleur", "Manager :", 0));
        labelManager->setText(QString());
        label_2->setText(QApplication::translate("DialogInfoControleur", "Type of visit :", 0));
        labelType->setText(QString());
        pushButtonOk->setText(QApplication::translate("DialogInfoControleur", "&Ok", 0));
    } // retranslateUi

};

namespace Ui {
    class DialogInfoControleur: public Ui_DialogInfoControleur {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGINFOCONTROLEUR_H
