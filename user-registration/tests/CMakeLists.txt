cmake_minimum_required (VERSION 2.8)
project (user-registration)

include_directories(../)

add_executable(UserRegistrationTest UserRegistrationTest.cpp)
target_link_libraries(UserRegistrationTest gmock gtest)