#ifndef OPERATIONS_HPP
#define OPERATIONS_HPP

using namespace std;

#include "Menu.h"

class Operations {
        public:
		
	//Quit Operations
	void quit(string status) {
		  if (status == "beginning") {
                           printMessage();
                           exit;
                  }
                  else {
                           beginningMenu();
                 }
	}
	
	//Play Operations
	
};

#endif
