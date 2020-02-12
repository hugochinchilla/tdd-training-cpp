#include <ctime>
#include <iostream>

#include "PrintDate.h"

using namespace std;

PrintDate::PrintDate() {

}

void PrintDate::printCurrentDate() {
    time_t now = time(0);
    cout << ctime(&now);
}
