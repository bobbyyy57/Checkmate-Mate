#include <iostream>
#include <stdlib.h>

#include "Menu.cpp"
#include "Board.cpp"

using namespace std;


int main() {
	Menu m;
	m.clearScreen();	
	m.printGreeting();
	m.clearScreen();
	m.beginningMenu();
}
