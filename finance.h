#ifndef FINANCE_H
#define FINANCE_H
#include <QVector>
#include "transaction.h"

class Finance {
public:
    Finance();
    void addTransaction(const Transaction &t);
    QVector<Transaction> getTransactions() const;
    double balance() const;
    double totalIncome() const;
    double totalExpenses() const;

private:
    QVector<Transaction> transactions;
};

#endif // FINANCE_H
