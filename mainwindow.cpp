#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "finance.h"
#include "transaction.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QStringList tableHeaders;
    tableHeaders << "Date" << "Type" << "Category" << "Amount";
    ui->tableWidget->setHorizontalHeaderLabels(tableHeaders);
    connect(ui->addTransactionButton, &QPushButton::clicked, this, &MainWindow::addTransaction);
    Finance f;
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::addTransaction() {
    Transaction t;
    t.amount = ui->amount->value();
    t.category = ui->category->currentText();
    t.date = ui->date->date();
    t.intakeType = ui->intakeType->currentText();

    f.addTransaction(t);
    updateTable();
}

void MainWindow::updateTable() {
    ui->tableWidget->setRowCount(0);

    const QVector<Transaction> &transactions = f.getTransactions();

    for (const Transaction &t : transactions) {
        int row = ui->tableWidget->rowCount();
        ui->tableWidget->insertRow(row);

        ui->tableWidget->setItem(row, 0, new QTableWidgetItem(t.date.toString("MM-dd-yyyy")));
        ui->tableWidget->setItem(row, 1, new QTableWidgetItem(t.intakeType));
        ui->tableWidget->setItem(row, 2, new QTableWidgetItem(t.category));
        ui->tableWidget->setItem(row, 3, new QTableWidgetItem("$" + QString::number(t.amount, 'f', 2)));
    }

    updateTotals();
}

void MainWindow::updateTotals() {
    double balance = f.balance();
    double income = f.totalIncome();
    double expense = f.totalExpenses();

    ui->balance->setText("Balance: $" + QString::number(balance, 'f', 2));
    ui->income->setText("Total Income: $" + QString::number(income, 'f', 2));
    ui->expense->setText("Total Expenses: $" + QString::number(expense, 'f', 2));
}
