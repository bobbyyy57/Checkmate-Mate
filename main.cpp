
#include <iostream>
#include <stdlib.h>

#include "Menu.cpp"
#include "Board.cpp"

using namespace std;

//void clearScreen() { system("clear"); }

int main() {
	Menu m;
	m.clearScreen();	
	m.printGreeting();
	m.clearScreen();
	m.beginningMenu();
}
