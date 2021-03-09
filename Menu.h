#ifndef MENU_H
#define MENU_H

using namespace std;

#include "Operation.h"
#include <stdlib.h>

class Menu {

	private: 
		Button* click;

	public: 	
		void printLogo();
		void printBeginningMenu();
		void printGameMenu();
		void printGreeting();
		void gameMenu();
		void beginningMenu();
		void clearScreen() { system("clear"); }

};
#endif