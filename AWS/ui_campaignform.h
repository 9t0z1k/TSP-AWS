/********************************************************************************
** Form generated from reading UI file 'campaignform.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CAMPAIGNFORM_H
#define UI_CAMPAIGNFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CampaignForm
{
public:
    QVBoxLayout *verticalLayout_2;
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
    QProgressBar *progressBar;
    QPushButton *pushButton_2;
    QPushButton *pushButton;
    QPushButton *save;
    QPushButton *load;

    void setupUi(QWidget *CampaignForm)
    {
        if (CampaignForm->objectName().isEmpty())
            CampaignForm->setObjectName("CampaignForm");
        CampaignForm->resize(450, 350);
        CampaignForm->setMinimumSize(QSize(450, 350));
        CampaignForm->setMaximumSize(QSize(450, 350));
        verticalLayout_2 = new QVBoxLayout(CampaignForm);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(21);
        horizontalLayout->setObjectName("horizontalLayout");
        goalLabel = new QLabel(CampaignForm);
        goalLabel->setObjectName("goalLabel");

        horizontalLayout->addWidget(goalLabel);

        lineEdit = new QLineEdit(CampaignForm);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setReadOnly(true);

        horizontalLayout->addWidget(lineEdit);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        budgetLabel = new QLabel(CampaignForm);
        budgetLabel->setObjectName("budgetLabel");

        horizontalLayout_2->addWidget(budgetLabel);

        doubleSpinBox = new QDoubleSpinBox(CampaignForm);
        doubleSpinBox->setObjectName("doubleSpinBox");
        doubleSpinBox->setReadOnly(true);
        doubleSpinBox->setButtonSymbols(QAbstractSpinBox::NoButtons);
        doubleSpinBox->setMaximum(1000000000000000048346692115553659057528394845890514255872.000000000000000);

        horizontalLayout_2->addWidget(doubleSpinBox);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        startLabel = new QLabel(CampaignForm);
        startLabel->setObjectName("startLabel");

        horizontalLayout_3->addWidget(startLabel);

        dateEdit = new QDateEdit(CampaignForm);
        dateEdit->setObjectName("dateEdit");
        dateEdit->setReadOnly(true);
        dateEdit->setButtonSymbols(QAbstractSpinBox::NoButtons);

        horizontalLayout_3->addWidget(dateEdit);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        endLabel = new QLabel(CampaignForm);
        endLabel->setObjectName("endLabel");

        horizontalLayout_4->addWidget(endLabel);

        dateEdit_2 = new QDateEdit(CampaignForm);
        dateEdit_2->setObjectName("dateEdit_2");
        dateEdit_2->setReadOnly(true);
        dateEdit_2->setButtonSymbols(QAbstractSpinBox::NoButtons);

        horizontalLayout_4->addWidget(dateEdit_2);


        verticalLayout->addLayout(horizontalLayout_4);


        verticalLayout_2->addLayout(verticalLayout);

        progressBar = new QProgressBar(CampaignForm);
        progressBar->setObjectName("progressBar");
        progressBar->setValue(0);

        verticalLayout_2->addWidget(progressBar);

        pushButton_2 = new QPushButton(CampaignForm);
        pushButton_2->setObjectName("pushButton_2");

        verticalLayout_2->addWidget(pushButton_2);

        pushButton = new QPushButton(CampaignForm);
        pushButton->setObjectName("pushButton");

        verticalLayout_2->addWidget(pushButton);

        save = new QPushButton(CampaignForm);
        save->setObjectName("save");

        verticalLayout_2->addWidget(save);

        load = new QPushButton(CampaignForm);
        load->setObjectName("load");

        verticalLayout_2->addWidget(load);


        retranslateUi(CampaignForm);

        QMetaObject::connectSlotsByName(CampaignForm);
    } // setupUi

    void retranslateUi(QWidget *CampaignForm)
    {
        CampaignForm->setWindowTitle(QCoreApplication::translate("CampaignForm", "Form", nullptr));
        goalLabel->setText(QCoreApplication::translate("CampaignForm", "\320\246\320\265\320\273\321\214", nullptr));
        budgetLabel->setText(QCoreApplication::translate("CampaignForm", "\320\221\321\216\320\264\320\266\320\265\321\202", nullptr));
        startLabel->setText(QCoreApplication::translate("CampaignForm", "\320\235\320\260\321\207\320\260\320\273\320\276", nullptr));
        endLabel->setText(QCoreApplication::translate("CampaignForm", "\320\232\320\276\320\275\320\265\321\206", nullptr));
        pushButton_2->setText(QCoreApplication::translate("CampaignForm", "\320\240\320\265\320\264\320\260\320\272\321\202\320\270\321\200\320\276\320\262\320\260\321\202\321\214", nullptr));
        pushButton->setText(QCoreApplication::translate("CampaignForm", "\320\227\320\260\320\277\320\276\320\273\320\275\320\270\321\202\321\214", nullptr));
        save->setText(QCoreApplication::translate("CampaignForm", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214", nullptr));
        load->setText(QCoreApplication::translate("CampaignForm", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CampaignForm: public Ui_CampaignForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CAMPAIGNFORM_H
