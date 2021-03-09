#ifndef __SURRENDER_HPP__
#define __SURRENDER_HPP__
#include "button.hpp"
#include "Menu.h"



class Surrender : public Button{
	public:
		void printMessage() = 0;
		void operation(){
        		//called from main when user chooses S or s
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
               		 //printBoard(); (still need to implement)
               		printGameMenu();
        }
}
