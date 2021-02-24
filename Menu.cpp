#include <iostream>

using namespace std;

void printLogo(){

    cout << "       __________ ____   ____ __________ _________ ___  ___  _______ _______ _________ __________ __________\n";
    cout << "      /  _______//   /__/   //  _______/  _______//  / /  / /  ___  '___   //  ___   //___   ___//  _______/\n";
    cout << "     /  /       /   ___    //  /_____ /  /       /  //  /  /  /  /  /  /  //  /__/  /    /  /   /  /_____\n";
    cout << "    /  /_______/   /  /   //   _____//  /_______/  /\\  \\  /  /  /  /  /  //  /  /  /    /  /   /   _____/ __\n";
    cout << "    \\_________/___/  /___//_________/\\_________/__/  \\__\\/__/  /__/  /__//__/  /__/    /__/   /_________// /\n";
    cout << "                                       _______ _______ _________ __________ __________  ___              '\n";
    cout << "                                      /  ___  '___   //  ___   //___   ___//  _______/ /  /\n";
    cout << "                                     /  /  /  /  /  //  /__/  /    /  /   /  /_____   /__/\n";
    cout << "                                    /  /  /  /  /  //  /  /  /    /  /   /   _____/  ___\n";
    cout << "                                   /__/  /__/  /__//__/  /__/    /__/   /_________/ /__/\n";

}
void surrender(){
	//called from main when user chooses S or s
	char choice;
	cout << "Are you sure you would like to surrender? (Y)ES/(N)O: " << endl;
	cin >> choice;
	if(toupper(choice) == 'Y'){
		cout << "You chose to surrender" << endl;
		if(currentTurn == 1){ //currentTurn is a variable in board 
			cout << "Player 2 wins!!" << endl;
       		}
       		else{cout << "Player 1 wins!!" << endl;}
		printGameMenu();
	}
	else{
		//printBoard(); (still need to implement)
		printGameMenu();
	}
}
    
void move(){
	//called from main when user chooses M or m
	//movePiece(); (still need to implement)
	//printBoard(); (still need to implement)
	printGameMenu();
}
