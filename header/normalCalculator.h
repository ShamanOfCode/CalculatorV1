#pragma once
#ifndef NORMALCALCULATOR_H
#define NORMALCALCULATOR_H
#include <iostream>
#include <cmath>	// sqrt()

namespace nCN {
	void normalCalculatorFunction() {
		int num1 = 0;
		int num2 = 0;
		char sign;

		std::cout << "Shamans normal Calculator" << std::endl;
		// TODO: quit goes to the welcome function again
		std::cout << "Enter first number here (q to quit): ";
		std::cin >> num1;

		if (num1 == 'q' || num1 == 'Q') {

		}
		std::cout << "Enter operator: ";
		std::cin >> sign;
		std::cout << "Enter second number:  ";
		std::cin >> num2;
	}
}
#endif // NORMALCALCULATOR_H
