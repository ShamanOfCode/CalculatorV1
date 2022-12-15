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
// Import headers
#include "header/linearFunction.h"
#include "header/normalCalculator.h"

/***************************************
 * isalpha() --> is char a char
 * isdigit() --> is char a digit(number)
***************************************/

unsigned int microsecond = 1000000;	// Sleep function: usleep(x * microsecond); change x to define the seconds

using namespace std;

// Welcome function ----> user decides which method
class welcomeClass {
	private:
		char choice;
		lFNS::LF lFi;
	public:
		void welcomeInputFunction() {
			cout << "Welcome to ShamanOfCodes calculator\n" << endl;
			cout << "(Q/q) Quit" << endl;
			cout << "(1) Normal Calculator" << endl;
			cout << "(2) Linear function" << endl;
			cout << "(3) Linear system of equation" << endl;
			cout << "(4) Theorem of Pythagoras " << endl;
			cout << "...more soon\n" << endl;

			cout << "Choose your method: ";
			cin >> choice;

			switch (choice) {
				case 'q':
					exit(EXIT_FAILURE);
					system("clear");
				break;
				case '1':
					nCN::normalCalculatorFunction();
					system("clear");
				break;
				case '2':
					lFi.linearFunctionCalcFunction();
					system("clear");
				break;
				case '3':
					system("clear");
					cout << "Still working on it!\nComing soon\n" << endl;
					usleep(3 * microsecond);		// Sleep for 3 seconds
					system("clear");
					welcomeInputFunction();
				break;
				case '4':
					system("clear");
					cout << "Still working on it!\nComing soon\n" << endl;
					usleep(3 * microsecond);		// Sleep for 3 seconds
					system("clear");
					welcomeInputFunction();
				break;
			}
		}

};
welcomeClass welcomeObj;


int main() {
	welcomeObj.welcomeInputFunction();

	system("clear");
	return main();
}
