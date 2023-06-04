/********************************************************************************
** Form generated from reading UI file 'addaudience.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDAUDIENCE_H
#define UI_ADDAUDIENCE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_addAudience
{
public:
    QVBoxLayout *verticalLayout_2;
    QPushButton *pushButton;
    QFormLayout *formLayout;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *addAudience)
    {
        if (addAudience->objectName().isEmpty())
            addAudience->setObjectName("addAudience");
        addAudience->resize(400, 267);
        verticalLayout_2 = new QVBoxLayout(addAudience);
        verticalLayout_2->setObjectName("verticalLayout_2");
        pushButton = new QPushButton(addAudience);
        pushButton->setObjectName("pushButton");

        verticalLayout_2->addWidget(pushButton);

        formLayout = new QFormLayout();
        formLayout->setObjectName("formLayout");
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        formLayout->setItem(0, QFormLayout::SpanningRole, verticalSpacer);


        verticalLayout_2->addLayout(formLayout);


        retranslateUi(addAudience);

        QMetaObject::connectSlotsByName(addAudience);
    } // setupUi

    void retranslateUi(QWidget *addAudience)
    {
        addAudience->setWindowTitle(QCoreApplication::translate("addAudience", "Form", nullptr));
        pushButton->setText(QCoreApplication::translate("addAudience", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \320\220\321\203\320\264\320\270\321\202\320\276\321\200\320\270\321\216", nullptr));
    } // retranslateUi

};

namespace Ui {
    class addAudience: public Ui_addAudience {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDAUDIENCE_H
