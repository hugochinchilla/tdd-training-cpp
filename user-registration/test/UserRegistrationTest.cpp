#include "gmock/gmock.h"
#include "gtest/gtest.h"

using ::testing::Return;
using ::testing::_; // Matcher for parameters


TEST(UserRegistrationTest, ThisIsTheTestNamePleaseChangeMe) {
    EXPECT_EQ("foo", "foo");
}

int main(int argc, char **argv) {
    ::testing::InitGoogleMock(&argc, argv);
    return RUN_ALL_TESTS();
}
