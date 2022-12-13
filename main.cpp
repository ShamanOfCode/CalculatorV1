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

// Welcome function ----> user decides which method

int welcome() {
	class welcomeClass {
		private:
			string choice;
		public:
			lFNS::LF lFi;
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
					lFi.main();
					system("clear");
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
