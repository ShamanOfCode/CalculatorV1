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
#include "header/welcome.h"

int main() {
	welcomeNamespace::welcomeClass welcomeClassI;
	welcomeClassI.welcomeInputFunction();
	system("clear");
	return main();
}
