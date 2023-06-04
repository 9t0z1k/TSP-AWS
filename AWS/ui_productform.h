/********************************************************************************
** Form generated from reading UI file 'productform.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PRODUCTFORM_H
#define UI_PRODUCTFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_productForm
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label;
    QLineEdit *lineEdit_3;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_4;
    QLineEdit *lineEdit;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_2;
    QDoubleSpinBox *doubleSpinBox;
    QHBoxLayout *horizontalLayout;
    QLabel *label_3;
    QTextBrowser *textBrowser;
    QPushButton *pushButton_2;
    QPushButton *pushButton;
    QPushButton *save;
    QPushButton *load;

    void setupUi(QWidget *productForm)
    {
        if (productForm->objectName().isEmpty())
            productForm->setObjectName("productForm");
        productForm->resize(400, 300);
        productForm->setMaximumSize(QSize(400, 300));
        productForm->setStyleSheet(QString::fromUtf8("alternate-background-color: rgb(55, 255, 178);"));
        verticalLayout = new QVBoxLayout(productForm);
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        label = new QLabel(productForm);
        label->setObjectName("label");

        horizontalLayout_4->addWidget(label);

        lineEdit_3 = new QLineEdit(productForm);
        lineEdit_3->setObjectName("lineEdit_3");
        lineEdit_3->setMaximumSize(QSize(318, 16777215));
        lineEdit_3->setReadOnly(true);

        horizontalLayout_4->addWidget(lineEdit_3);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_4 = new QLabel(productForm);
        label_4->setObjectName("label_4");

        horizontalLayout_2->addWidget(label_4);

        lineEdit = new QLineEdit(productForm);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setReadOnly(true);

        horizontalLayout_2->addWidget(lineEdit);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label_2 = new QLabel(productForm);
        label_2->setObjectName("label_2");

        horizontalLayout_3->addWidget(label_2);

        doubleSpinBox = new QDoubleSpinBox(productForm);
        doubleSpinBox->setObjectName("doubleSpinBox");
        doubleSpinBox->setReadOnly(true);
        doubleSpinBox->setButtonSymbols(QAbstractSpinBox::NoButtons);
        doubleSpinBox->setMaximum(999999999999999945322333868247445125709646570021247924665841614848.000000000000000);

        horizontalLayout_3->addWidget(doubleSpinBox);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label_3 = new QLabel(productForm);
        label_3->setObjectName("label_3");

        horizontalLayout->addWidget(label_3);

        textBrowser = new QTextBrowser(productForm);
        textBrowser->setObjectName("textBrowser");
        textBrowser->setMaximumSize(QSize(318, 16777215));
        textBrowser->setUndoRedoEnabled(false);

        horizontalLayout->addWidget(textBrowser);


        verticalLayout->addLayout(horizontalLayout);

        pushButton_2 = new QPushButton(productForm);
        pushButton_2->setObjectName("pushButton_2");

        verticalLayout->addWidget(pushButton_2);

        pushButton = new QPushButton(productForm);
        pushButton->setObjectName("pushButton");

        verticalLayout->addWidget(pushButton);

        save = new QPushButton(productForm);
        save->setObjectName("save");

        verticalLayout->addWidget(save);

        load = new QPushButton(productForm);
        load->setObjectName("load");

        verticalLayout->addWidget(load);


        retranslateUi(productForm);

        QMetaObject::connectSlotsByName(productForm);
    } // setupUi

    void retranslateUi(QWidget *productForm)
    {
        productForm->setWindowTitle(QCoreApplication::translate("productForm", "Form", nullptr));
        label->setText(QCoreApplication::translate("productForm", "\320\235\320\260\320\267\320\262\320\260\320\275\320\270\320\265", nullptr));
        label_4->setText(QCoreApplication::translate("productForm", "\320\232\320\260\321\202\320\265\320\263\320\276\321\200\320\270\321\217", nullptr));
        label_2->setText(QCoreApplication::translate("productForm", "\320\246\320\265\320\275\320\260", nullptr));
        label_3->setText(QCoreApplication::translate("productForm", "\320\236\320\277\320\270\321\201\320\260\320\275\320\270\320\265", nullptr));
        pushButton_2->setText(QCoreApplication::translate("productForm", "\320\240\320\265\320\264\320\260\320\272\321\202\320\270\321\200\320\276\320\262\320\260\321\202\321\214", nullptr));
        pushButton->setText(QCoreApplication::translate("productForm", "\320\227\320\260\320\277\320\276\320\273\320\275\320\270\321\202\321\214", nullptr));
        save->setText(QCoreApplication::translate("productForm", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214", nullptr));
        load->setText(QCoreApplication::translate("productForm", "\320\227\320\260\320\263\321\200\321\203\320\267\320\270\321\202\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class productForm: public Ui_productForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PRODUCTFORM_H
