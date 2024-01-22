#ifndef TESTER_H
#define TESTER_H
#include <ctype.h>
#include <iostream>

namespace tester {
	void isNumber() {
		bool isXchar;
		char x = 'x';
		void ifFunction() {		// void function for the check
			/***************************************
				 * isalpha() --> is char a char
				 * isdigit() --> is char a digit(number)
				***************************************/
			std::cout << "enter number or x: ";
			std::cin >> x;
			if (isalpha(x)) {
				isXchar = true;
			}
			else if (isdigit(x)) {
				isXchar = false;
			}
		}
	}
}

#endif // TESTER_H
