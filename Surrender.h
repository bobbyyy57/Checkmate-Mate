#ifndef __SURRENDER_H__
#define __SURRENDER_H__
#include "Operation.h"
#include "Menu.h"



class Surrender : public Operation{
        public:
                void operation(){
                        //called  when user chooses S or s
                        char choice;
                        cout << "Are you sure you would like to surrender? (Y)ES/(N)O: " << endl;
                        cin >> choice;
                        if(toupper(choice) == 'Y'){
                                cout << "You chose to surrender" << endl;
                                if(currentTurn == 1){
                                        cout << "Player 2 wins!!" << endl;
                                }
                                else{cout << "Player 1 wins!!" << endl;}
                                quit();
                        }
                        else{
                        printBoard();
                        printGameMenu();
        }
}
#endif
