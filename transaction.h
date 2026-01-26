#ifndef TRANSACTION_H
#define TRANSACTION_H
#include <QString>
#include <QDate>


class Transaction
{
public:
    Transaction();
    double amount;
    QString category;
    QDate date;
    QString intakeType;
};

#endif // TRANSACTION_H
