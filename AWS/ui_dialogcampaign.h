/********************************************************************************
** Form generated from reading UI file 'dialogcampaign.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGCAMPAIGN_H
#define UI_DIALOGCAMPAIGN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_DialogCampaign
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *goalLabel;
    QLineEdit *lineEdit;
    QHBoxLayout *horizontalLayout_2;
    QLabel *budgetLabel;
    QDoubleSpinBox *doubleSpinBox;
    QHBoxLayout *horizontalLayout_3;
    QLabel *startLabel;
    QDateEdit *dateEdit;
    QHBoxLayout *horizontalLayout_4;
    QLabel *endLabel;
    QDateEdit *dateEdit_2;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *DialogCampaign)
    {
        if (DialogCampaign->objectName().isEmpty())
            DialogCampaign->setObjectName("DialogCampaign");
        DialogCampaign->resize(400, 300);
        DialogCampaign->setMinimumSize(QSize(400, 300));
        DialogCampaign->setMaximumSize(QSize(400, 300));
        verticalLayout = new QVBoxLayout(DialogCampaign);
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(26);
        horizontalLayout->setObjectName("horizontalLayout");
        goalLabel = new QLabel(DialogCampaign);
        goalLabel->setObjectName("goalLabel");

        horizontalLayout->addWidget(goalLabel);

        lineEdit = new QLineEdit(DialogCampaign);
        lineEdit->setObjectName("lineEdit");

        horizontalLayout->addWidget(lineEdit);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(8);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        budgetLabel = new QLabel(DialogCampaign);
        budgetLabel->setObjectName("budgetLabel");

        horizontalLayout_2->addWidget(budgetLabel);

        doubleSpinBox = new QDoubleSpinBox(DialogCampaign);
        doubleSpinBox->setObjectName("doubleSpinBox");
        doubleSpinBox->setMaximum(9999999999999999932209486743616279764617084419440640.000000000000000);

        horizontalLayout_2->addWidget(doubleSpinBox);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        startLabel = new QLabel(DialogCampaign);
        startLabel->setObjectName("startLabel");

        horizontalLayout_3->addWidget(startLabel);

        dateEdit = new QDateEdit(DialogCampaign);
        dateEdit->setObjectName("dateEdit");

        horizontalLayout_3->addWidget(dateEdit);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        endLabel = new QLabel(DialogCampaign);
        endLabel->setObjectName("endLabel");

        horizontalLayout_4->addWidget(endLabel);

        dateEdit_2 = new QDateEdit(DialogCampaign);
        dateEdit_2->setObjectName("dateEdit_2");

        horizontalLayout_4->addWidget(dateEdit_2);


        verticalLayout->addLayout(horizontalLayout_4);

        buttonBox = new QDialogButtonBox(DialogCampaign);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(DialogCampaign);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, DialogCampaign, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, DialogCampaign, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(DialogCampaign);
    } // setupUi

    void retranslateUi(QDialog *DialogCampaign)
    {
        DialogCampaign->setWindowTitle(QCoreApplication::translate("DialogCampaign", "Dialog", nullptr));
        goalLabel->setText(QCoreApplication::translate("DialogCampaign", "\320\246\320\265\320\273\321\214", nullptr));
        budgetLabel->setText(QCoreApplication::translate("DialogCampaign", "\320\221\321\216\320\264\320\266\320\265\321\202", nullptr));
        startLabel->setText(QCoreApplication::translate("DialogCampaign", "\320\235\320\260\321\207\320\260\320\273\320\276", nullptr));
        endLabel->setText(QCoreApplication::translate("DialogCampaign", "\320\232\320\276\320\275\320\265\321\206", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DialogCampaign: public Ui_DialogCampaign {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGCAMPAIGN_H
