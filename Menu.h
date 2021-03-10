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
		void gameMenu();
		void beginningMenu();
		void clearScreen() { system("clear"); }
    	/*		for (int n = 0; n < 3; n++) {
      				cout << "\n\n\n\n\n\n\n\n\n";
    			}
		}*/

};
#endif
