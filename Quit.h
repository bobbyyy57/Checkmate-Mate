#ifndef QUIT_H
#define QUIT_H

#include "Menu.h"
#include "Operation.h"

class Quit : public Operation {
	private: 
		string status;
	public: 
		Quit(string current) { status = current; }
		void printMessage() {
			cout << "      -----------------------------------------------------------------------------------------------------------------" << endl;
		        cout << "      |                                                                                                               |" << endl;
  		        cout << "      |                           Thank you so much for playing! We hope to see you soon! :)                          |" << endl;
        		cout << "      |                                                      ----                                                     |" << endl;
       		 	cout << "      |                                Ashley Bautista, Rodrigo Lamas, and Bobby Lerias                               |" << endl;
			cout << "      |                                                                                                               |" << endl;
      		  	cout << "      -----------------------------------------------------------------------------------------------------------------" << endl;
			cout << endl;
			cout << endl;
		}
	
		virtual void operation(Board b) {
			Menu m;
			m.clearScreen();
			if (status == "beginning") {
				printMessage();
				exit;
			}
			else {
				m.beginningMenu();
			}
		}
	
};

#endif
