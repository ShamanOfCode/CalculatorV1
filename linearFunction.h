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
			char x= 'x';
			int b = 0;
	};
	lFC lFO;

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

	class calculation {
		public:
			void calculationSteps() {
				if (wiXO.isXchar == true) {
					std::cout << "Your function: y=" << lFO.m << lFO.x << "+" << lFO.b << std::endl;
					// y=0 (Nullstellen)
					// TODO: Calculation with negativ numbers
					std::cout << lFO.y << " = " << lFO.m << lFO.x << " + " << lFO.b << "  | -" << lFO.b<< std::endl;	// If it's: mx+b then | -b if: mx-b then | +b
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
		class inputCorrect {
			public:
				std::string choice;
				void inputCorrectFunction() {
					std::cout << "Is your function correct or do you want to change it? (yes/no):" << std::endl;
					std::cin >> choice;
				}
		};
		inputCorrect iCO;

		void fortnite() {
			std::cout << "deine mutter" << std::endl;
		}
		std::cout << "Linear function calculator" << std::endl;
		std::cout << "Enter your function step by step: " << std::endl;

		cout << "m = ";
		cin >> linearVariablesObj.m;
		cout << "y=" << linearVariablesObj.m << "x + b" << endl;

		// FIXME: x = "x"(x to be calculated) and if x = number then calculate
		// cout << "Enter 'x' to leave it blank" << endl;
		std::cout << "\nx = ";
		std::cin >> linearVariablesObj.x;
		wiXO.functionPrint();

		std::cout << "\nb = ";
		std::cin >> linearVariablesObj.b;
		std::cout << "y=" << linearVariablesObj.m << linearVariablesObj.x << " + " <<linearVariablesObj.b << endl;
		/**************************************************************************
		 * TODO: Function which will print the steps in the calculation
		 *
		 * Here it asks if your function is correct --> TODO: Create a class
		 *
		 * NOTE: Class for this function or extra void function
		 *************************************************************************/
		system("clear");
		if (whatisXObj.isXchar == true) {
			cout << "Your function: y=" << linearVariablesObj.m << "x" << "+" << linearVariablesObj.b << endl;
			inputCorrectObject.inputCorrectFunction();
		}
		else if (whatisXObj.isXchar == false) {
			cout << "Your function: y=" << linearVariablesObj.m << "*" << linearVariablesObj.x << "+" << linearVariablesObj.b << endl;
			inputCorrectObject.inputCorrectFunction();
		}

		if (inputCorrectObject.choice == "yes" || inputCorrectObject.choice == "Yes" || inputCorrectObject.choice == "YES" || inputCorrectObject.choice == "y" || inputCorrectObject.choice == "Y") {
			calculationObj.calculationSteps();
		}

		// FIXME: "Your Function"
		else if (inputCorrectObject.choice == "no" || inputCorrectObject.choice == "No" || inputCorrectObject.choice == "NO") {
			system("clear");
			cout << "Your Function: y=" << linearVariablesObj.m << "x" << "+" << linearVariablesObj.b << endl;
			return linearFunction();
		}

	};
	LF LFO;
};

#endif // LINEARVARIABLE_H
