#include "gtest/gtest.h"
#include "gmock/gmock.h"
#include "CoffeeMachine.h"


TEST(CoffeeMachineTest, ChangeTheTestName) {
    // https://google.github.io/googletest/gmock_cheat_sheet.html

    CoffeeMachine coffeeMachine;

    EXPECT_EQ("foo", "foo");
}
