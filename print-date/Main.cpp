#include<iostream>
#include "PrintDate.h"

using namespace std;

int main(int, char *[]) {
    cout << "---- PrintDate kata ----" << endl;

    PrintDate printDate;
    printDate.printCurrentDate();

    cout << "--------- END ----------" << endl;
    return 0;
}