#include "gmock/gmock.h"
#include "gtest/gtest.h"
#include "lib/Calendar.h"
#include "lib/Printer.h"
#include <lib/PrintDate.h>

using ::testing::Return;
using ::testing::_; // Matcher for parameters

/** \brief Mock for the Calendar interface.
 */
class MockCalendar : public Calendar {
public:

    // see https://github.com/google/googletest/blob/master/googlemock/docs/ForDummies.md
    MOCK_METHOD(time_t, today, (), (const, override));
};

/** \brief Mock for the Printer interface.
 */
class MockPrinter : public Printer {
public:
    MockPrinter() {

    }

    MOCK_METHOD(void, printLine, (char * ), (override));
};

TEST(PrintDateTest, PrintCurrentDate) {
    MockCalendar calendar;
    std::shared_ptr<MockPrinter> printer = std::make_shared<MockPrinter>();
    PrintDate printDate(calendar, printer);
    time_t now = time(0);
    EXPECT_CALL(calendar, today())
    .WillRepeatedly(Return(now));
    char *expectedPrintedTime = ctime(&now);

    //EXPECT_CALL(*printer, printLine(_)) // Not making assumptions on the line send ...
    //EXPECT_CALL(*printer, printLine("expect_to_match_this_string"))
    EXPECT_CALL(*printer, printLine(expectedPrintedTime))
    .Times(1);

    printDate.printCurrentDate();
}

/** \brief Main test entrance point.
 * \param[in] argc
 * \param[in] argv
 */
int main(int argc, char **argv) {
    ::testing::InitGoogleMock(&argc, argv);
    return RUN_ALL_TESTS();
}
