cmake_minimum_required(VERSION 3.5)

project(CalculatorV1 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(CalculatorV1 main.cpp
    header/linearFunction.h
    header/normalCalculator.h
    header/linear_system_of_equation.h
    header/theorem_of_pythagoras.h
    header/quadratic_functions.h
	header/welcome.h
	header/tester.h)

install(TARGETS CalculatorV1
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
