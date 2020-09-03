cmake_minimum_required (VERSION 2.6)

project (Devops_example)

add_executable(Devops_example src/Devops_example.cpp src/HelloSpeaker.cpp)
add_executable(Devops_example_tests tests/tests_main.cpp tests/HelloSpeaker_test.cpp src/HelloSpeaker.cpp)
