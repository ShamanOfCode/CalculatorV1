#pragma once
#ifndef NORMALCALCULATOR_H
#define NORMALCALCULATOR_H
#include <iostream>
#include <math.h>

namespace nCN {
	void main() {
		int num1 = 0;
		int num2 = 0;
		char sign;

		std::cout << "Shamans normal Calculator" << std::endl;
		std::cout << "Enter first number here: ";
		std::cin >> num1;
		std::cout << "Enter operator: ";
		std::cin >> sign;
		std::cout << "Enter second number:  ";
		std::cin >> num2;

	}
}

#endif // NORMALCALCULATOR_H
