
#include "deletedialog.h"
#include <QVBoxLayout>

DeleteDialog::DeleteDialog(const QList<int>& numbers, QWidget* parent)
    : QDialog(parent), selectedNumber(-1)
{
    QVBoxLayout* layout = new QVBoxLayout(this);
    numberListWidget = new QListWidget(this);
    deleteButton = new QPushButton("Удалить", this);
    cancelButton = new QPushButton("Отмена", this);

    for (int number : numbers) {
        numberListWidget->addItem(QString::number(number));
    }

    layout->addWidget(numberListWidget);
    layout->addWidget(deleteButton);
    layout->addWidget(cancelButton);

    connect(numberListWidget, &QListWidget::currentRowChanged, this, &DeleteDialog::onNumberSelected);
    connect(deleteButton, &QPushButton::clicked, this, &DeleteDialog::onDeleteClicked);
    connect(cancelButton, &QPushButton::clicked, this, &DeleteDialog::reject);
}

int DeleteDialog::getSelectedNumber() const
{
    return selectedNumber;
}

void DeleteDialog::onNumberSelected()
{
    selectedNumber = numberListWidget->currentRow();
}

void DeleteDialog::onDeleteClicked()
{
    if (selectedNumber >= 0 && selectedNumber < numberListWidget->count()) {
        accept();
    }
}

