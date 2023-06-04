/********************************************************************************
** Form generated from reading UI file 'audienceform.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AUDIENCEFORM_H
#define UI_AUDIENCEFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_audienceForm
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QSpinBox *spinBox;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QSpinBox *spinBox_2;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QSpinBox *spinBox_3;
    QPushButton *pushButton_2;
    QPushButton *pushButton;
    QPushButton *save;
    QPushButton *load;

    void setupUi(QWidget *audienceForm)
    {
        if (audienceForm->objectName().isEmpty())
            audienceForm->setObjectName("audienceForm");
        audienceForm->resize(450, 350);
        audienceForm->setMaximumSize(QSize(450, 350));
        verticalLayout = new QVBoxLayout(audienceForm);
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label = new QLabel(audienceForm);
        label->setObjectName("label");

        horizontalLayout->addWidget(label);

        lineEdit = new QLineEdit(audienceForm);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setReadOnly(true);

        horizontalLayout->addWidget(lineEdit);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_2 = new QLabel(audienceForm);
        label_2->setObjectName("label_2");

        horizontalLayout_2->addWidget(label_2);

        spinBox = new QSpinBox(audienceForm);
        spinBox->setObjectName("spinBox");
        spinBox->setReadOnly(true);
        spinBox->setButtonSymbols(QAbstractSpinBox::NoButtons);
        spinBox->setMinimum(1);
        spinBox->setMaximum(999999999);

        horizontalLayout_2->addWidget(spinBox);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label_3 = new QLabel(audienceForm);
        label_3->setObjectName("label_3");

        horizontalLayout_3->addWidget(label_3);

        spinBox_2 = new QSpinBox(audienceForm);
        spinBox_2->setObjectName("spinBox_2");
        spinBox_2->setReadOnly(true);
        spinBox_2->setButtonSymbols(QAbstractSpinBox::NoButtons);
        spinBox_2->setMinimum(1);
        spinBox_2->setMaximum(999999999);
        spinBox_2->setStepType(QAbstractSpinBox::AdaptiveDecimalStepType);

        horizontalLayout_3->addWidget(spinBox_2);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        label_4 = new QLabel(audienceForm);
        label_4->setObjectName("label_4");

        horizontalLayout_4->addWidget(label_4);

        spinBox_3 = new QSpinBox(audienceForm);
        spinBox_3->setObjectName("spinBox_3");
        spinBox_3->setReadOnly(true);
        spinBox_3->setButtonSymbols(QAbstractSpinBox::NoButtons);
        spinBox_3->setMaximum(150);

        horizontalLayout_4->addWidget(spinBox_3);


        verticalLayout->addLayout(horizontalLayout_4);

        pushButton_2 = new QPushButton(audienceForm);
        pushButton_2->setObjectName("pushButton_2");

        verticalLayout->addWidget(pushButton_2);

        pushButton = new QPushButton(audienceForm);
        pushButton->setObjectName("pushButton");

        verticalLayout->addWidget(pushButton);

        save = new QPushButton(audienceForm);
        save->setObjectName("save");

        verticalLayout->addWidget(save);

        load = new QPushButton(audienceForm);
        load->setObjectName("load");

        verticalLayout->addWidget(load);


        retranslateUi(audienceForm);

        QMetaObject::connectSlotsByName(audienceForm);
    } // setupUi

    void retranslateUi(QWidget *audienceForm)
    {
        audienceForm->setWindowTitle(QCoreApplication::translate("audienceForm", "Form", nullptr));
        label->setText(QCoreApplication::translate("audienceForm", "\320\234\320\265\321\201\321\202\320\276\320\277\320\276\320\273\320\276\320\266\320\265\320\275\320\270\320\265", nullptr));
        label_2->setText(QCoreApplication::translate("audienceForm", "\320\234\321\203\320\266", nullptr));
        label_3->setText(QCoreApplication::translate("audienceForm", "\320\226\320\265\320\275", nullptr));
        label_4->setText(QCoreApplication::translate("audienceForm", "\320\241\320\240 \320\222\320\276\320\267\321\200", nullptr));
        pushButton_2->setText(QCoreApplication::translate("audienceForm", "\320\240\320\265\320\264\320\260\320\272\321\202\320\270\321\200\320\276\320\262\320\260\321\202\321\214", nullptr));
        pushButton->setText(QCoreApplication::translate("audienceForm", "\320\227\320\260\320\277\320\276\320\273\320\275\320\270\321\202\321\214", nullptr));
        save->setText(QCoreApplication::translate("audienceForm", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214", nullptr));
        load->setText(QCoreApplication::translate("audienceForm", "\320\227\320\260\320\263\321\200\321\203\320\267\320\270\321\202\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class audienceForm: public Ui_audienceForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AUDIENCEFORM_H
