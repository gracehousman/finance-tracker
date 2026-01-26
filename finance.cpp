#include "finance.h"

Finance::Finance() {
    transactions = {};
}

void Finance::addTransaction(const Transaction &t) {
    transactions.append(t);
}

QVector<Transaction> Finance::getTransactions() const{
    return transactions;
}

double Finance::balance() const{
    return totalIncome() - totalExpenses();
}

double Finance::totalIncome() const{
    double income = 0;
    for (Transaction t : transactions) {
        if (t.intakeType == "Income") {
            income += t.amount;
        }
    }
    return income;
}

double Finance::totalExpenses() const{
    double expenses = 0;
    for (Transaction t : transactions) {
        if (t.intakeType == "Expense") {
            expenses += t.amount;
        }
    }
    return expenses;
}
