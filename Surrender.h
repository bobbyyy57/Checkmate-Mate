#ifndef __SURRENDER_H__
#define __SURRENDER_H__

#include "Operation.h"
#include "Menu.h"
#include <iostream> 
#include "Board.h"

class Surrender : public Operation{
        public:
        	virtual void operation(Board b) {
			
			char choice;
			Menu m;
                        cout << "Are you sure you would like to surrender? (Y)ES/(N)O: " << endl;
                        cin >> choice;
                        if(toupper(choice) == 'Y'){
                                cout << "You chose to surrender" << endl;
                                if(turn == 1){
                                        cout << "Player 2 wins!!" << endl;
                                }
                                else{cout << "Player 1 wins!!" << endl;}
                                m.beginningMenu();
                        }
                        else{
                        b.printBoard();
                        m.gameMenu(b);		
			}
		}
};

#endif
