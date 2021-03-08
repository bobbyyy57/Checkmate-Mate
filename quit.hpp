#ifndef QUIT_HPP
#define QUIT_HPP

#include "button.hpp"
#include "Menu.h"

class Quit : public Button {
	private: 
		string status;
	public: 
		Quit(string current) { status = current; }
		virtual void printMessage() {
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
		virtual void operation() {
			clearScreen();
			//	opearions::quit();			

			if (status == "beginning") {
				printMessage();
				exit;
			}
			else {
				beginningMenu();
			}
		}
	
};

#endif
