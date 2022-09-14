#include <gtest/gtest.h>
#include "FizzBuzz.h"

TEST(FizzBuzzTest, Returns1For1) {
    FizzBuzz f = FizzBuzz();
    std::string* numbers = f.all();
    EXPECT_EQ(numbers[0], "1");
}

TEST(FizzBuzzTest, Returns2For2) {
    FizzBuzz f = FizzBuzz();
    std::string* numbers = f.all();
    EXPECT_EQ(numbers[1], "2");
}


TEST(FizzBuzzTest, ReturnsFizzBuzzFor15) {
    FizzBuzz f = FizzBuzz();
    std::string* numbers = f.all();
    EXPECT_EQ(numbers[14], "FizzBuzz");
}

TEST(FizzBuzzTest, ReturnsFizzFor3) {
    FizzBuzz f = FizzBuzz();
    std::string* numbers = f.all();
    EXPECT_EQ(numbers[2], "Fizz");
}

TEST(FizzBuzzTest, ReturnsBuzzFor5) {
    FizzBuzz f = FizzBuzz();
    std::string* numbers = f.all();
    EXPECT_EQ(numbers[4], "Buzz");
}
