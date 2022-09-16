#include "PrintDate.h"


PrintDate::PrintDate(Calendar *calendar, Printer *printer) {
    this->calendar = calendar;
    this->printer = printer;
}

void PrintDate::printCurrentDate() {
    time_t now = this->calendar->today();
    char *timeNow = ctime(&now);
    this->printer->printLine(timeNow);
}