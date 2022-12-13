/*************************************************
* Calculator for everything
*
* TODO: Modes
* normal calculator		(normaler Rechner)
* recruitment procedure	(Einsetzungsverfahren)
* equalization procedure (Gleichsetzungsverfahren)
* addition procedure	(Additionverfahren)
* theorem of pythagoras	(Satz des Pythagoras)
**************************************************/

#include <iostream>
#include <unistd.h>		// For usleep (i think)
#include <ctype.h>
#include <cmath>		// Imports sqrt()
#include "linearFunction.h"

/***************************************
 * isalpha() --> is char a char
 * isdigit() --> is char a digit(number)
***************************************/

unsigned int microsecond = 1000000;	// Sleep function: usleep(x * microsecond); change x to define the seconds

using namespace std;

// Global Class for the function Variables
class linearVariables {
	public:
		int y = 0;
		int m = 0;
		char x = 'x';	// Will be changed in whatisX class
		int b = 0;
};
linearVariables linearVariablesObj;


/**
 * @brief The whatisX class
 * FIXME: linearVariablesObj.x = char; the if function will check if linearVariables.x is a char or int
 * if it's a int it will be transformed to a int(cin into a new int variable if
 * it will be decided from the user in linearFunction();
 */
class whatisX {
	public:
		bool isXchar;
		void ifFunction() {
			if (isalpha(linearVariablesObj.x)) {		// isalpha() for letter
				isXchar = true;
			}
			else if (isdigit(linearVariablesObj.x)) {	// isdigit() for number
				isXchar = false;
			}
		}
		void functionPrint() {
			if (isXchar == true) {
				cout << "y=" << linearVariablesObj.m << "x + " << linearVariablesObj.b << endl;
			}
			else if (isXchar == false) {
				cout << "y=" << linearVariablesObj.m << "*" << linearVariablesObj.x << "+" << linearVariablesObj.b<< endl;
			}
		}
};
whatisX whatisXObj;

/**
 * @brief calculationStep
 * if isXchar true --> deciding which way of calculating with x or with a number
 * true = if it's x
 * false = if it's a number
 */

class calculation {
	public:
		void calculationSteps() {
			if (whatisXObj.isXchar == true) {
				cout << "Your function: y=" << linearVariablesObj.m << linearVariablesObj.x << "+" << linearVariablesObj.b << endl;
				// y=0 (Nullstellen)
				// TODO: Calculation with negativ numbers
				cout << linearVariablesObj.y << " = " << linearVariablesObj.m << linearVariablesObj.x << " + " << linearVariablesObj.b << "  | -" << linearVariablesObj.b<< endl;	// If it's: mx+b then | -b if: mx-b then | +b
				linearVariablesObj.y = linearVariablesObj.y + linearVariablesObj.b;
				cout << linearVariablesObj.y << " = " << linearVariablesObj.m << linearVariablesObj.x << "  | /" << linearVariablesObj.m << endl;
				linearVariablesObj.y = linearVariablesObj.y / linearVariablesObj.m;
				cout << linearVariablesObj.y << " = " << linearVariablesObj.x << endl;
			}
			else if (whatisXObj.isXchar == false) {
				cout << "false" << endl;
			}
		}
};
calculation calculationObj;

int linearFunction() {
	class inputCorrect {
		public:
			string choice;
			void inputCorrectFunction() {
				cout << "Is your function correct or do you want to change it? (yes/no):" << endl;
				cin >> choice;
			}
	};
	inputCorrect inputCorrectObject;


	cout << "Linear function calculator" << endl;
	cout << "Enter your function step by step: " << endl;

	cout << "m = ";
	cin >> linearVariablesObj.m;
	cout << "y=" << linearVariablesObj.m << "x + b" << endl;

	// FIXME: x = "x"(x to be calculated) and if x = number then calculate
	// cout << "Enter 'x' to leave it blank" << endl;
	cout << "\nx = ";
	cin >> linearVariablesObj.x;
	whatisXObj.functionPrint();

	cout << "\nb = ";
	cin >> linearVariablesObj.b;
	cout << "y=" << linearVariablesObj.m << linearVariablesObj.x << " + " <<linearVariablesObj.b << endl;

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

	return 0;
}

// Welcome function ----> user decides which method

int welcome() {
	class welcomeClass {
		public:
			string choice;
			void welcomeInputFunction() {
				cout << "Welcome to ShamanOfCodes calculator\n" << endl;
				cout << "(Q/q) Quit" << endl;
				cout << "(1) Linear function" << endl;
				cout << "(2) Linear system of equation" << endl;
				cout << "(3) Normal Calculator" << endl;
				cout << "(4) Theorem of Pythagoras " << endl;
				cout << "...more soon\n" << endl;

				cout << "Choose your method: ";
				cin >> choice;

				if (choice == "q" || choice == "Q") {
					exit(EXIT_FAILURE);
					system("clear");
				}
				else if (choice == "1") {
					system("clear");
					linearFunction();
				}
				// TODO: Linear system of equation there you will decide which procedure
				else if (choice == "2") {
					system("clear");
					cout << "Still working on it!\nComing soon\n" << endl;
					usleep(3 * microsecond);		// Sleep for 3 seconds
					system("clear");
					welcomeInputFunction();
				}
			}
	};
	welcomeClass welcomeObj;

	welcomeObj.welcomeInputFunction();

	return 0;
}

int main() {
	welcome();

	system("clear");
	return main();
}
