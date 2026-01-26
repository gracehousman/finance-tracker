/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGroupBox *groupBox;
    QComboBox *intakeType;
    QDateEdit *date;
    QPushButton *addTransactionButton;
    QComboBox *category;
    QLabel *label;
    QDoubleSpinBox *amount;
    QTableWidget *tableWidget;
    QLabel *header;
    QLabel *balance;
    QLabel *income;
    QLabel *expense;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(832, 481);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(100, 180, 131, 191));
        QFont font;
        font.setPointSize(13);
        font.setKerning(true);
        groupBox->setFont(font);
        groupBox->setAlignment(Qt::AlignmentFlag::AlignCenter);
        groupBox->setCheckable(false);
        intakeType = new QComboBox(groupBox);
        intakeType->addItem(QString());
        intakeType->addItem(QString());
        intakeType->setObjectName("intakeType");
        intakeType->setGeometry(QRect(0, 51, 131, 31));
        date = new QDateEdit(groupBox);
        date->setObjectName("date");
        date->setGeometry(QRect(0, 120, 131, 22));
        addTransactionButton = new QPushButton(groupBox);
        addTransactionButton->setObjectName("addTransactionButton");
        addTransactionButton->setGeometry(QRect(0, 150, 131, 41));
        category = new QComboBox(groupBox);
        category->addItem(QString());
        category->addItem(QString());
        category->addItem(QString());
        category->addItem(QString());
        category->addItem(QString());
        category->addItem(QString());
        category->addItem(QString());
        category->setObjectName("category");
        category->setGeometry(QRect(0, 80, 131, 32));
        label = new QLabel(groupBox);
        label->setObjectName("label");
        label->setGeometry(QRect(0, 20, 71, 21));
        amount = new QDoubleSpinBox(groupBox);
        amount->setObjectName("amount");
        amount->setGeometry(QRect(71, 20, 61, 22));
        amount->setMaximum(1000000000.000000000000000);
        tableWidget = new QTableWidget(centralwidget);
        if (tableWidget->columnCount() < 4)
            tableWidget->setColumnCount(4);
        tableWidget->setObjectName("tableWidget");
        tableWidget->setGeometry(QRect(320, 160, 421, 231));
        tableWidget->setColumnCount(4);
        tableWidget->horizontalHeader()->setCascadingSectionResizes(false);
        header = new QLabel(centralwidget);
        header->setObjectName("header");
        header->setGeometry(QRect(90, 80, 131, 31));
        QFont font1;
        font1.setPointSize(18);
        header->setFont(font1);
        header->setFrameShape(QFrame::Shape::Box);
        header->setFrameShadow(QFrame::Shadow::Sunken);
        balance = new QLabel(centralwidget);
        balance->setObjectName("balance");
        balance->setGeometry(QRect(320, 90, 171, 16));
        QFont font2;
        font2.setPointSize(14);
        balance->setFont(font2);
        income = new QLabel(centralwidget);
        income->setObjectName("income");
        income->setGeometry(QRect(320, 110, 191, 16));
        income->setFont(font2);
        expense = new QLabel(centralwidget);
        expense->setObjectName("expense");
        expense->setGeometry(QRect(320, 130, 181, 16));
        expense->setFont(font2);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 832, 37));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "Add Transaction", nullptr));
        intakeType->setItemText(0, QCoreApplication::translate("MainWindow", "Income", nullptr));
        intakeType->setItemText(1, QCoreApplication::translate("MainWindow", "Expense", nullptr));

        addTransactionButton->setText(QCoreApplication::translate("MainWindow", "Add Transaction", nullptr));
        category->setItemText(0, QCoreApplication::translate("MainWindow", "Work", nullptr));
        category->setItemText(1, QCoreApplication::translate("MainWindow", "Food & Drink", nullptr));
        category->setItemText(2, QCoreApplication::translate("MainWindow", "Bills & Utilities", nullptr));
        category->setItemText(3, QCoreApplication::translate("MainWindow", "Groceries", nullptr));
        category->setItemText(4, QCoreApplication::translate("MainWindow", "Shopping", nullptr));
        category->setItemText(5, QCoreApplication::translate("MainWindow", "Personal", nullptr));
        category->setItemText(6, QCoreApplication::translate("MainWindow", "Other", nullptr));

        label->setText(QCoreApplication::translate("MainWindow", "Amount: $", nullptr));
        header->setText(QCoreApplication::translate("MainWindow", "Finance Tracker", nullptr));
        balance->setText(QString());
        income->setText(QString());
        expense->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
