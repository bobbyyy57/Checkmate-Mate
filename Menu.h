#ifndef MENU_H
#define MENU_H

using namespace std;

#include "Operation.h"
#include <stdlib.h>

class Menu {

	private: 
		Operation* click;

	public: 	
		void printLogo();
		void printBeginningMenu();
		void printGameMenu();
		void printGreeting();
		void gameMenu(Board);
		void beginningMenu();
		void clearScreen() { system("clear"); }

};
#endif
