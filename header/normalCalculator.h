#pragma once
#ifndef NORMALCALCULATOR_H
#define NORMALCALCULATOR_H
#include <iostream>
#include <cmath>	// sqrt()
#include "linkToWelcome.h"

namespace nCN {
	void normalCalculatorFunction() {
		int num1 = 0;
		int num2 = 0;
		char sign;
		int sum = 0;
		system("clear");
		std::cout << "Shamans normal Calculator" << std::endl;
		std::cout << "Enter first number here (q to quit): ";
		std::cin >> num1;

		// TODO: quit goes to the welcome function again
		if (num1 == 'q' || num1 == 'Q') {
			linkLinearFunction::linkToWelcomeFunc();
		}
		std::cout << "Enter second number: ";  // entering num2
		std::cin >> num1;

		std::cout << "Enter the sign you want to expect: ";  // entering operator
		std::cin >> sign;

		// multiply
		if (sign == '*') {
		  sum = num1 * num2;
		  std::cout << sum << std::endl;
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
		  }
		}

		// subtraction
		if (sign == '+') {
		  sum = num1 + num2;
		  std::cout << sum << std::endl;
		}

		// addition
		if (sign == '-') {
		  sum = num1 - num2;
		  std::cout << sum << std::endl;
		}

	}
}
#endif // NORMALCALCULATOR_H
