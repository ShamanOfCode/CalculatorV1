cmake_minimum_required(VERSION 3.5)

project(CalculatorV1 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(CalculatorV1 main.cpp
    header/linearFunction.h
    header/normalCalculator.h
    header/welcome.h)

install(TARGETS CalculatorV1
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
