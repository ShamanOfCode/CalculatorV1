#pragma once
#ifndef LINEARFUNCTION_H
#define LINEARFUNCTION_H
#include <ctype.h>
#include <iostream>

namespace lFNS {
	class lFC {
		public:
			int y = 0;
			int m = 0;
			char x = 'x';
			int b = 0;
	};
	lFC lFO;

	/**
	 * @brief The whatisX class
	 * FIXME: lFO.x = char; the if function will check if linearVariables.x is a char or int
	 * if it's a int it will be transformed to a int(cin into a new int variable if
	 * it will be decided from the user in linearFunction();
	 */

	class whatisX {
		public:
			bool isXchar;
			void ifFunction() {
				if (isalpha(lFO.x)) {
					isXchar = true;
				}
				else if (isdigit(lFO.x)) {
					isXchar = false;
				}
			}
			void functionPrint() {
				if (isXchar == true) {
					std::cout << "y=" << lFO.m << "x + " << lFO.b << std::endl;
				}
				else if (isXchar == false) {
					std::cout << "y=" << lFO.m << "*" << lFO.x << "+" << lFO.b << std::endl;
				}
			}
	};
	whatisX wiXO;

	/**
	 * @brief calculationStep
	 * if isXchar true --> deciding which way of calculating with x or with a number
	 * true = if it's x
	 * false = if it's a number
	 */

	class calculation {
		public:
			void calculationSteps() {
				if (wiXO.isXchar == true) {
					std::cout << "Your function: y=" << lFO.m << lFO.x << "+" << lFO.b << std::endl;
					// y=0 (Nullstellen)
					// TODO: Calculation with negativ numbers
					std::cout << lFO.y << " = " << lFO.m << lFO.x << " + " << lFO.b << "  | -" << lFO.b<< std::endl;	// if: mx+b then | -b if: mx-b then | +b
					lFO.y = lFO.y + lFO.b;
					std::cout << lFO.y << " = " << lFO.m << lFO.x << "  | /" << lFO.m << std::endl;
					lFO.y = lFO.y / lFO.m;
					std::cout << lFO.y << " = " << lFO.x << std::endl;
				}
				else if (wiXO.isXchar == false) {
					std::cout << "false" << std::endl;
				}
			}
	};
	calculation calcO;

	class LF {
		public:
			class inputCorrect {
				public:
					std::string choice;
					void inputCorrectFunction() {
					std::cout << "Is your function correct or do you want to change it? (yes/no):" << std::endl;
					std::cin >> choice;
			}
	};
			inputCorrect iCO;

			void main() {
				std::cout << "Linear function calculator" << std::endl;
				std::cout << "Enter your function step by step: " << std::endl;

				std::cout << "m = ";
				std::cin >> lFO.m;
				std::cout << "y=" << lFO.m << "x + b" << std::endl;

				// FIXME: x = "x"(x to be calculated) and if x = number then calculate
				// cout << "Enter 'x' to leave it blank" << endl;
				std::cout << "\nx = ";
				std::cin >> lFO.x;
				wiXO.functionPrint();

				std::cout << "\nb = ";
				std::cin >> lFO.b;
				std::cout << "y=" << lFO.m << lFO.x << " + " <<lFO.b << std::endl;
				/**************************************************************************
				 * TODO: Function which will print the steps in the calculation
				 *
				 * Here it asks if your function is correct --> TODO: Create a class
				 *
				 * NOTE: Class for this function or extra void function
				 *************************************************************************/
				system("clear");
				if (wiXO.isXchar == true) {
					std::cout << "Your function: y=" << lFO.m << "x" << "+" << lFO.b << std::endl;
					iCO.inputCorrectFunction();
				}
				else if (wiXO.isXchar == false) {
					std::cout << "Your function: y=" << lFO.m << "*" << lFO.x << "+" << lFO.b << std::endl;
					iCO.inputCorrectFunction();
				}

				if (iCO.choice == "yes" || iCO.choice == "Yes" || iCO.choice == "YES" || iCO.choice == "y" || iCO.choice == "Y") {
					calcO.calculationSteps();
				}

				// FIXME: "Your Function"
				else if (iCO.choice == "no" || iCO.choice == "No" || iCO.choice == "NO") {
					system("clear");
					std::cout << "Your Function: y=" << lFO.m << "x" << "+" << lFO.b << std::endl;
				}
				std::cout << "Linear function calculator" << std::endl;
				std::cout << "Enter your function step by step: " << std::endl;

				std::cout << "m = ";
				std::cin >> lFO.m;
				std::cout << "y=" << lFO.m << "x + b" << std::endl;

				// FIXME: x = "x"(x to be calculated) and if x = number then calculate
				// cout << "Enter 'x' to leave it blank" << endl;
				std::cout << "\nx = ";
				std::cin >> lFO.x;
				wiXO.functionPrint();

				std::cout << "\nb = ";
				std::cin >> lFO.b;
				std::cout << "y=" << lFO.m << lFO.x << " + " <<lFO.b << std::endl;
				/**************************************************************************
				 * TODO: Function which will print the steps in the calculation
				 *
				 * Here it asks if your function is correct --> TODO: Create a class
				 *
				 * NOTE: Class for this function or extra void function
				 *************************************************************************/
				system("clear");
				if (wiXO.isXchar == true) {
					std::cout << "Your function: y=" << lFO.m << "x" << "+" << lFO.b << std::endl;
					iCO.inputCorrectFunction();
				}
				else if (wiXO.isXchar == false) {
					std::cout << "Your function: y=" << lFO.m << "*" << lFO.x << "+" << lFO.b << std::endl;
					iCO.inputCorrectFunction();
				}

				if (iCO.choice == "yes" || iCO.choice == "Yes" || iCO.choice == "YES" || iCO.choice == "y" || iCO.choice == "Y") {
					calcO.calculationSteps();
				}

				// FIXME: "Your Function"
				else if (iCO.choice == "no" || iCO.choice == "No" || iCO.choice == "NO" || iCO.choice == "n" || iCO.choice == "N") {
					system("clear");
					std::cout << "Your Function: y=" << lFO.m << "x" << "+" << lFO.b << std::endl;
					return main();
				}
				return main();
			}
	};
};

#endif // LINEARVARIABLE_H
