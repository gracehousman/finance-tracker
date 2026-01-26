#include "transaction.h"

Transaction::Transaction() {
    amount = 0;
    category = "";
    date = QDate::currentDate();
    intakeType = "";
}
