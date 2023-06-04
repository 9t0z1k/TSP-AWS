/********************************************************************************
** Form generated from reading UI file 'dialogproduct.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGPRODUCT_H
#define UI_DIALOGPRODUCT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_DialogProduct
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_5;
    QLineEdit *lineEdit_6;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_6;
    QLineEdit *lineEdit_5;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_7;
    QDoubleSpinBox *doubleSpinBox;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_8;
    QTextEdit *textEdit_2;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *DialogProduct)
    {
        if (DialogProduct->objectName().isEmpty())
            DialogProduct->setObjectName("DialogProduct");
        DialogProduct->resize(450, 300);
        DialogProduct->setMinimumSize(QSize(450, 300));
        DialogProduct->setMaximumSize(QSize(450, 300));
        verticalLayout = new QVBoxLayout(DialogProduct);
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(9);
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        label_5 = new QLabel(DialogProduct);
        label_5->setObjectName("label_5");

        horizontalLayout_5->addWidget(label_5);

        lineEdit_6 = new QLineEdit(DialogProduct);
        lineEdit_6->setObjectName("lineEdit_6");

        horizontalLayout_5->addWidget(lineEdit_6);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(5);
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        label_6 = new QLabel(DialogProduct);
        label_6->setObjectName("label_6");

        horizontalLayout_6->addWidget(label_6);

        lineEdit_5 = new QLineEdit(DialogProduct);
        lineEdit_5->setObjectName("lineEdit_5");

        horizontalLayout_6->addWidget(lineEdit_5);


        verticalLayout->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(41);
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        label_7 = new QLabel(DialogProduct);
        label_7->setObjectName("label_7");

        horizontalLayout_7->addWidget(label_7);

        doubleSpinBox = new QDoubleSpinBox(DialogProduct);
        doubleSpinBox->setObjectName("doubleSpinBox");
        doubleSpinBox->setMaximum(99999999999999999209038626283633850822756121694230455365568299008.000000000000000);

        horizontalLayout_7->addWidget(doubleSpinBox);


        verticalLayout->addLayout(horizontalLayout_7);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        label_8 = new QLabel(DialogProduct);
        label_8->setObjectName("label_8");

        horizontalLayout_8->addWidget(label_8);

        textEdit_2 = new QTextEdit(DialogProduct);
        textEdit_2->setObjectName("textEdit_2");

        horizontalLayout_8->addWidget(textEdit_2);


        verticalLayout->addLayout(horizontalLayout_8);

        buttonBox = new QDialogButtonBox(DialogProduct);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(DialogProduct);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, DialogProduct, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, DialogProduct, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(DialogProduct);
    } // setupUi

    void retranslateUi(QDialog *DialogProduct)
    {
        DialogProduct->setWindowTitle(QCoreApplication::translate("DialogProduct", "Dialog", nullptr));
        label_5->setText(QCoreApplication::translate("DialogProduct", "\320\235\320\260\320\267\320\262\320\260\320\275\320\270\320\265", nullptr));
        label_6->setText(QCoreApplication::translate("DialogProduct", "\320\232\320\260\321\202\320\265\320\263\320\276\321\200\320\270\321\217", nullptr));
        label_7->setText(QCoreApplication::translate("DialogProduct", "\320\246\320\265\320\275\320\260", nullptr));
        label_8->setText(QCoreApplication::translate("DialogProduct", "\320\236\320\277\320\270\321\201\320\260\320\275\320\270\320\265", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DialogProduct: public Ui_DialogProduct {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGPRODUCT_H
