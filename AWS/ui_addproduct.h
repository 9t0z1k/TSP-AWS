/********************************************************************************
** Form generated from reading UI file 'addproduct.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDPRODUCT_H
#define UI_ADDPRODUCT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AddProduct
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton;
    QFormLayout *formLayout;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *AddProduct)
    {
        if (AddProduct->objectName().isEmpty())
            AddProduct->setObjectName("AddProduct");
        AddProduct->resize(400, 300);
        verticalLayout_2 = new QVBoxLayout(AddProduct);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        pushButton = new QPushButton(AddProduct);
        pushButton->setObjectName("pushButton");

        verticalLayout->addWidget(pushButton);

        formLayout = new QFormLayout();
        formLayout->setObjectName("formLayout");
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        formLayout->setItem(0, QFormLayout::SpanningRole, verticalSpacer);


        verticalLayout->addLayout(formLayout);


        verticalLayout_2->addLayout(verticalLayout);


        retranslateUi(AddProduct);

        QMetaObject::connectSlotsByName(AddProduct);
    } // setupUi

    void retranslateUi(QWidget *AddProduct)
    {
        AddProduct->setWindowTitle(QCoreApplication::translate("AddProduct", "Form", nullptr));
        pushButton->setText(QCoreApplication::translate("AddProduct", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \320\237\321\200\320\276\320\264\321\203\320\272\321\202", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddProduct: public Ui_AddProduct {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDPRODUCT_H
