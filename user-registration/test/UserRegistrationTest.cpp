#include "gmock/gmock.h"
#include "gtest/gtest.h"

using ::testing::Return;
using ::testing::_; // Matcher for parameters


TEST(UserRegistrationTest, this_is_the_test_name_please_change_me) {
    EXPECT_EQ("foo", "foo");
}

int main(int argc, char **argv) {
    ::testing::InitGoogleMock(&argc, argv);
    return RUN_ALL_TESTS();
}
