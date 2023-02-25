#pragma once
#ifndef NORMALCALCULATOR_H
#define NORMALCALCULATOR_H
#include <iostream>
#include <cmath>	// sqrt()
#include <unistd.h>		// For usleep (i think)

namespace normalCalculatorNamespace {
	void normalCalculatorVoid() {
		unsigned int microsecond = 1000000;	// Sleep function: usleep(x * microsecond); change x to define the seconds
		int num1 = 0;
		int num2 = 0;
		char sign;
		int sum = 0;
		system("clear");
		std::cout << "Shamans normal Calculator" << std::endl;
		std::cout << "Enter first number here (q to quit): ";
		std::cin >> num1;

		if (num1 == 'q' || num1 == 'Q') {
			// TODO: quit goes to the welcome function again
			// linkLinearFunction::linkToWelcomeFunc();
			#endif
		}
		std::cout << "Enter second number: ";  // entering num2
		std::cin >> num2;

		std::cout << "Enter the sign you want to expect: ";  // entering operator
		std::cin >> sign;

		// multiply
		if (sign == '*') {
			sum = num1 * num2;
			std::cout << sum << std::endl;
			unsigned int microsecond = 1000000;	// Sleep function: usleep(x * microsecond); change x to define the seconds
			usleep(3 * microsecond);				// Sleep for 3 seconds
			return normalCalculatorVoid();
		}
		// division
		if (sign == '/') {
			if (num1 == 0) {
				std::cout << "You can't divide by 0" << std::endl;  // if you can't divide by 0
			}
			else if (num2 == 0) {
				std::cout << "You can't divide by 0" << std::endl;  // if you can't divide by 0
			}
			else {
				sum = num1 / num2;
				std::cout << sum << std::endl;
				unsigned int microsecond = 1000000;	// Sleep function: usleep(x * microsecond); change x to define the seconds
				usleep(3 * microsecond);				// Sleep for 3 seconds
				return normalCalculatorVoid();
			}
		}
		// subtraction
		if (sign == '+') {
			sum = num1 + num2;
			std::cout << sum << std::endl;
			unsigned int microsecond = 1000000;	// Sleep function: usleep(x * microsecond); change x to define the seconds
			usleep(3 * microsecond);				// Sleep for 3 seconds
			return normalCalculatorVoid();
		}
		// addition
		if (sign == '-') {
			sum = num1 - num2;
			std::cout << sum << std::endl;
			unsigned int microsecond = 1000000;	// Sleep function: usleep(x * microsecond); change x to define the seconds
			usleep(3 * microsecond);				// Sleep for 3 seconds
			return normalCalculatorVoid();
		}
	}
}
