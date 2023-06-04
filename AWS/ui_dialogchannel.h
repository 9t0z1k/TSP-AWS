/********************************************************************************
** Form generated from reading UI file 'dialogchannel.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGCHANNEL_H
#define UI_DIALOGCHANNEL_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_DialogChannel
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QDoubleSpinBox *doubleSpinBox;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QSpinBox *spinBox;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *DialogChannel)
    {
        if (DialogChannel->objectName().isEmpty())
            DialogChannel->setObjectName("DialogChannel");
        DialogChannel->resize(400, 300);
        DialogChannel->setMinimumSize(QSize(400, 300));
        DialogChannel->setMaximumSize(QSize(400, 300));
        verticalLayout = new QVBoxLayout(DialogChannel);
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(14);
        horizontalLayout->setObjectName("horizontalLayout");
        label = new QLabel(DialogChannel);
        label->setObjectName("label");

        horizontalLayout->addWidget(label);

        lineEdit = new QLineEdit(DialogChannel);
        lineEdit->setObjectName("lineEdit");

        horizontalLayout->addWidget(lineEdit);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_2 = new QLabel(DialogChannel);
        label_2->setObjectName("label_2");

        horizontalLayout_2->addWidget(label_2);

        doubleSpinBox = new QDoubleSpinBox(DialogChannel);
        doubleSpinBox->setObjectName("doubleSpinBox");
        doubleSpinBox->setMaximum(9999999999999999455752309870428160.000000000000000);

        horizontalLayout_2->addWidget(doubleSpinBox);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(41);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label_3 = new QLabel(DialogChannel);
        label_3->setObjectName("label_3");

        horizontalLayout_3->addWidget(label_3);

        spinBox = new QSpinBox(DialogChannel);
        spinBox->setObjectName("spinBox");
        spinBox->setMaximum(999999999);

        horizontalLayout_3->addWidget(spinBox);


        verticalLayout->addLayout(horizontalLayout_3);

        buttonBox = new QDialogButtonBox(DialogChannel);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(DialogChannel);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, DialogChannel, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, DialogChannel, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(DialogChannel);
    } // setupUi

    void retranslateUi(QDialog *DialogChannel)
    {
        DialogChannel->setWindowTitle(QCoreApplication::translate("DialogChannel", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("DialogChannel", "\320\235\320\260\320\267\320\262\320\260\320\275\320\270\320\265", nullptr));
        label_2->setText(QCoreApplication::translate("DialogChannel", "\320\241\321\202\320\276\320\270\320\274\320\276\321\201\321\202\321\214", nullptr));
        label_3->setText(QCoreApplication::translate("DialogChannel", "\320\236\321\205\320\262\320\260\321\202", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DialogChannel: public Ui_DialogChannel {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGCHANNEL_H
