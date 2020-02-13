# User Registration kata

## Goal
Create the functionality using Unit tests and test doubles.

## Requirements
Part 1
- Validate that the user is persisted
- A userId is randomly generated

Part 2
- It cannot exist two users with the same email
- The password should meet security requirements
  - Have more than 8 characters
  - Contains an underscore
- Sends a confirmation email when the user is registered

## Remember
- Write a failing test.
- Write the minimum amount of code to make it pass.
- Do not forget to refactor the code.

### Example of mock

Mock definition:

    class MockPrinter : public Printer {
    public:
        MockPrinter() {
    
        }
    
        MOCK_METHOD(void, printLine, (char * ), (override));
    };

Mock usage:

    std::shared_ptr<MockPrinter> printer = std::make_shared<MockPrinter>();
    EXPECT_CALL(*printer, printLine(expectedPrintedTime))
        .Times(1);
### Example of stub
Stub definition:

    class MockCalendar : public Calendar {
    public:
        MOCK_METHOD(time_t, today, (), (const, override));
    };

Stub usage:

    MockCalendar calendar;
    time_t now = time(0);
    EXPECT_CALL(calendar, today())
        .WillRepeatedly(Return(now));

## Authors
Luis Rovirosa [@luisrovirosa](https://www.twitter.com/luisrovirosa)

Jordi Anguela [@jordianguela](https://www.twitter.com/jordianguela)
