/********************************************************************************
** Form generated from reading UI file 'addbuttoncampaign.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDBUTTONCAMPAIGN_H
#define UI_ADDBUTTONCAMPAIGN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_addbuttoncampaign
{
public:
    QHBoxLayout *horizontalLayout;
    QGridLayout *gridLayout;
    QPushButton *addButton;
    QFormLayout *formLayout;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *addbuttoncampaign)
    {
        if (addbuttoncampaign->objectName().isEmpty())
            addbuttoncampaign->setObjectName("addbuttoncampaign");
        addbuttoncampaign->resize(400, 416);
        horizontalLayout = new QHBoxLayout(addbuttoncampaign);
        horizontalLayout->setObjectName("horizontalLayout");
        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        addButton = new QPushButton(addbuttoncampaign);
        addButton->setObjectName("addButton");

        gridLayout->addWidget(addButton, 0, 0, 1, 1);

        formLayout = new QFormLayout();
        formLayout->setObjectName("formLayout");
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        formLayout->setItem(0, QFormLayout::FieldRole, verticalSpacer);


        gridLayout->addLayout(formLayout, 1, 0, 1, 1);


        horizontalLayout->addLayout(gridLayout);


        retranslateUi(addbuttoncampaign);

        QMetaObject::connectSlotsByName(addbuttoncampaign);
    } // setupUi

    void retranslateUi(QWidget *addbuttoncampaign)
    {
        addbuttoncampaign->setWindowTitle(QCoreApplication::translate("addbuttoncampaign", "Form", nullptr));
        addButton->setText(QCoreApplication::translate("addbuttoncampaign", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \320\274\320\260\321\200\320\272\320\265\321\202\320\270\320\275\320\263\320\276\320\262\321\203\321\216 \320\272\320\276\320\274\320\277\320\260\320\275\320\270\321\216", nullptr));
    } // retranslateUi

};

namespace Ui {
    class addbuttoncampaign: public Ui_addbuttoncampaign {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDBUTTONCAMPAIGN_H
