#ifndef __MENU_H__
#define __MENU_H__

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
		void gameMenu();
		void beginningMenu();
		void clearScreen() { system("clear"); }

};
#endif // __MENU_H__
