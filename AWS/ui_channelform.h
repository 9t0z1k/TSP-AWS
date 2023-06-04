/********************************************************************************
** Form generated from reading UI file 'channelform.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHANNELFORM_H
#define UI_CHANNELFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_channelForm
{
public:
    QHBoxLayout *horizontalLayout_4;
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
    QPushButton *pushButton_2;
    QPushButton *pushButton;
    QPushButton *save;
    QPushButton *load;

    void setupUi(QWidget *channelForm)
    {
        if (channelForm->objectName().isEmpty())
            channelForm->setObjectName("channelForm");
        channelForm->resize(400, 300);
        channelForm->setMinimumSize(QSize(400, 300));
        channelForm->setMaximumSize(QSize(400, 300));
        horizontalLayout_4 = new QHBoxLayout(channelForm);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(14);
        horizontalLayout->setObjectName("horizontalLayout");
        label = new QLabel(channelForm);
        label->setObjectName("label");

        horizontalLayout->addWidget(label);

        lineEdit = new QLineEdit(channelForm);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setReadOnly(true);

        horizontalLayout->addWidget(lineEdit);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_2 = new QLabel(channelForm);
        label_2->setObjectName("label_2");

        horizontalLayout_2->addWidget(label_2);

        doubleSpinBox = new QDoubleSpinBox(channelForm);
        doubleSpinBox->setObjectName("doubleSpinBox");
        doubleSpinBox->setReadOnly(true);
        doubleSpinBox->setButtonSymbols(QAbstractSpinBox::NoButtons);
        doubleSpinBox->setMaximum(9999999999999999538762658202121142272.000000000000000);

        horizontalLayout_2->addWidget(doubleSpinBox);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(34);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label_3 = new QLabel(channelForm);
        label_3->setObjectName("label_3");

        horizontalLayout_3->addWidget(label_3);

        spinBox = new QSpinBox(channelForm);
        spinBox->setObjectName("spinBox");
        spinBox->setReadOnly(true);
        spinBox->setButtonSymbols(QAbstractSpinBox::NoButtons);
        spinBox->setMaximum(999999999);

        horizontalLayout_3->addWidget(spinBox);


        verticalLayout->addLayout(horizontalLayout_3);

        pushButton_2 = new QPushButton(channelForm);
        pushButton_2->setObjectName("pushButton_2");

        verticalLayout->addWidget(pushButton_2);

        pushButton = new QPushButton(channelForm);
        pushButton->setObjectName("pushButton");

        verticalLayout->addWidget(pushButton);

        save = new QPushButton(channelForm);
        save->setObjectName("save");

        verticalLayout->addWidget(save);

        load = new QPushButton(channelForm);
        load->setObjectName("load");

        verticalLayout->addWidget(load);


        horizontalLayout_4->addLayout(verticalLayout);


        retranslateUi(channelForm);

        QMetaObject::connectSlotsByName(channelForm);
    } // setupUi

    void retranslateUi(QWidget *channelForm)
    {
        channelForm->setWindowTitle(QCoreApplication::translate("channelForm", "Form", nullptr));
        label->setText(QCoreApplication::translate("channelForm", "\320\235\320\260\320\267\320\262\320\260\320\275\320\270\320\265", nullptr));
        label_2->setText(QCoreApplication::translate("channelForm", "\320\241\321\202\320\276\320\270\320\274\320\276\321\201\321\202\321\214", nullptr));
        label_3->setText(QCoreApplication::translate("channelForm", "\320\236\321\205\320\262\320\260\321\202", nullptr));
        pushButton_2->setText(QCoreApplication::translate("channelForm", "\320\240\320\265\320\264\320\260\320\272\321\202\320\270\321\200\320\276\320\262\320\260\321\202\321\214", nullptr));
        pushButton->setText(QCoreApplication::translate("channelForm", "\320\227\320\260\320\277\320\276\320\273\320\275\320\270\321\202\321\214", nullptr));
        save->setText(QCoreApplication::translate("channelForm", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214", nullptr));
        load->setText(QCoreApplication::translate("channelForm", "\320\227\320\260\320\263\321\200\321\203\320\267\320\270\321\202\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class channelForm: public Ui_channelForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHANNELFORM_H
