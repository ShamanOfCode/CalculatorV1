#ifndef WELCOME_H
#define WELCOME_H
#include <iostream>
#include <unistd.h>		// For usleep (i think)
#include <ctype.h>
#include "normalCalculator.h"
#include "linearFunction.h"

unsigned int microsecond = 1000000;	// Sleep function: usleep(x * microsecond); change x to define the seconds

// Welcome function ----> user decides which method
class welcomeClass {
	private:
		char choice;
		lFNS::LF lFi;
	public:
		void welcomeInputFunction() {
			std::cout << "Welcome to ShamanOfCodes calculator\n" << std::endl;
			std::cout << "(Q/q) Quit" << std::endl;
			std::cout << "(1) Normal Calculator" << std::endl;
			std::cout << "(2) Linear function" << std::endl;
			std::cout << "(3) Linear system of equation" << std::endl;
			std::cout << "(4) Theorem of Pythagoras " << std::endl;
			std::cout << "...more soon\n" << std::endl;

			std::cout << "Choose your method: ";
			std::cin >> choice;

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
					std::cout << "Still working on it!\nComing soon\n" << std::endl;
					usleep(3 * microsecond);		// Sleep for 3 seconds
					system("clear");
					welcomeInputFunction();
				break;
				case '4':
					system("clear");
					std::cout << "Still working on it!\nComing soon\n" << std::endl;
					usleep(3 * microsecond);		// Sleep for 3 seconds
					system("clear");
					welcomeInputFunction();
				break;
			}
		}

};
welcomeClass welcomeObj;

#endif // WELCOME_H
