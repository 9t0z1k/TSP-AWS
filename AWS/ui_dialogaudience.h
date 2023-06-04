/********************************************************************************
** Form generated from reading UI file 'dialogaudience.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGAUDIENCE_H
#define UI_DIALOGAUDIENCE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_DialogAudience
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_6;
    QLineEdit *lineEdit_6;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_5;
    QSpinBox *spinBox;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_8;
    QSpinBox *spinBox_2;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_7;
    QSpinBox *spinBox_3;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *DialogAudience)
    {
        if (DialogAudience->objectName().isEmpty())
            DialogAudience->setObjectName("DialogAudience");
        DialogAudience->resize(472, 322);
        DialogAudience->setMinimumSize(QSize(472, 322));
        DialogAudience->setMaximumSize(QSize(472, 322));
        verticalLayout = new QVBoxLayout(DialogAudience);
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(7);
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        label_6 = new QLabel(DialogAudience);
        label_6->setObjectName("label_6");

        horizontalLayout_6->addWidget(label_6);

        lineEdit_6 = new QLineEdit(DialogAudience);
        lineEdit_6->setObjectName("lineEdit_6");

        horizontalLayout_6->addWidget(lineEdit_6);


        verticalLayout->addLayout(horizontalLayout_6);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(73);
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        label_5 = new QLabel(DialogAudience);
        label_5->setObjectName("label_5");

        horizontalLayout_5->addWidget(label_5);

        spinBox = new QSpinBox(DialogAudience);
        spinBox->setObjectName("spinBox");
        spinBox->setMaximum(999999999);

        horizontalLayout_5->addWidget(spinBox);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(70);
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        label_8 = new QLabel(DialogAudience);
        label_8->setObjectName("label_8");

        horizontalLayout_8->addWidget(label_8);

        spinBox_2 = new QSpinBox(DialogAudience);
        spinBox_2->setObjectName("spinBox_2");
        spinBox_2->setMaximum(999999999);

        horizontalLayout_8->addWidget(spinBox_2);


        verticalLayout->addLayout(horizontalLayout_8);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(50);
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        label_7 = new QLabel(DialogAudience);
        label_7->setObjectName("label_7");

        horizontalLayout_7->addWidget(label_7);

        spinBox_3 = new QSpinBox(DialogAudience);
        spinBox_3->setObjectName("spinBox_3");
        spinBox_3->setMaximum(250);

        horizontalLayout_7->addWidget(spinBox_3);


        verticalLayout->addLayout(horizontalLayout_7);

        buttonBox = new QDialogButtonBox(DialogAudience);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setMinimumSize(QSize(450, 0));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(DialogAudience);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, DialogAudience, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, DialogAudience, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(DialogAudience);
    } // setupUi

    void retranslateUi(QDialog *DialogAudience)
    {
        DialogAudience->setWindowTitle(QCoreApplication::translate("DialogAudience", "Dialog", nullptr));
        label_6->setText(QCoreApplication::translate("DialogAudience", "\320\234\320\265\321\201\321\202\320\276\320\277\320\276\320\273\320\276\320\266\320\265\320\275\320\270\320\265", nullptr));
        label_5->setText(QCoreApplication::translate("DialogAudience", "\320\234\321\203\320\266\321\207\320\270\320\275", nullptr));
        label_8->setText(QCoreApplication::translate("DialogAudience", "\320\226\320\265\320\275\321\211\320\270\320\275", nullptr));
        label_7->setText(QCoreApplication::translate("DialogAudience", "\320\241\321\200. \320\222\320\276\320\267\321\200\320\260\321\201\321\202", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DialogAudience: public Ui_DialogAudience {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGAUDIENCE_H
