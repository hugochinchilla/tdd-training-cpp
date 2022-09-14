#include "FizzBuzz.h"

FizzBuzz::FizzBuzz() {}

std::string FizzBuzz::fromInt(int number) {

    if (number % 15 == 0) {
        return "FizzBuzz";
    }

    if (number % 3 == 0) {
        return "Fizz";
    }

    if (number % 5 == 0) {
        return "Buzz";
    }

    return std::to_string(number);
};

std::string * FizzBuzz::all() {
    std::string *numbers = new std::string[100];

    for (int i=0; i<100; i++) {
        numbers[i] = FizzBuzz::fromInt(i+1);
    }

    return numbers;
}