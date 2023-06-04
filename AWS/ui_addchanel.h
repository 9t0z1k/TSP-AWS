/********************************************************************************
** Form generated from reading UI file 'addchanel.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDCHANEL_H
#define UI_ADDCHANEL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AddChanel
{
public:
    QVBoxLayout *verticalLayout_2;
    QPushButton *pushButton;
    QFormLayout *formLayout;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *AddChanel)
    {
        if (AddChanel->objectName().isEmpty())
            AddChanel->setObjectName("AddChanel");
        AddChanel->resize(400, 300);
        verticalLayout_2 = new QVBoxLayout(AddChanel);
        verticalLayout_2->setObjectName("verticalLayout_2");
        pushButton = new QPushButton(AddChanel);
        pushButton->setObjectName("pushButton");

        verticalLayout_2->addWidget(pushButton);

        formLayout = new QFormLayout();
        formLayout->setObjectName("formLayout");
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        formLayout->setItem(0, QFormLayout::SpanningRole, verticalSpacer);


        verticalLayout_2->addLayout(formLayout);


        retranslateUi(AddChanel);

        QMetaObject::connectSlotsByName(AddChanel);
    } // setupUi

    void retranslateUi(QWidget *AddChanel)
    {
        AddChanel->setWindowTitle(QCoreApplication::translate("AddChanel", "Form", nullptr));
        pushButton->setText(QCoreApplication::translate("AddChanel", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \320\232\320\260\320\275\320\260\320\273", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddChanel: public Ui_AddChanel {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDCHANEL_H
