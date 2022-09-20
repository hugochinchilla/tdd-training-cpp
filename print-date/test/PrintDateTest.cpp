#include "gmock/gmock.h"
#include "gtest/gtest.h"
#include "Calendar.h"
#include "Printer.h"
#include "PrintDate.h"

using ::testing::Return;
using ::testing::_; // Matcher for parameters


TEST(PrintDateTest, this_is_the_test_name_please_change_me) {
    // https://google.github.io/googletest/gmock_cheat_sheet.html

    //PrintDate printDate(calendar, printer);

    //printDate.printCurrentDate();
}

int main(int argc, char **argv) {
    ::testing::InitGoogleMock(&argc, argv);
    return RUN_ALL_TESTS();
}
