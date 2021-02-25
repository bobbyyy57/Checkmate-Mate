#ifndef PLAY_HPP
#define PLAY_HPP

#include "button.hpp"
#include "Menu.h"
#include "Board.h"

using namespace std;

class Play : public Button {

	public: 
		virtual void printMessage() {
			cout << "Starting Game" << endl;
		}

		virtual void operation() {
			printMessage();
			Board* game = new Board();
			game->printBoard();
			gameMenu();
		}

};

#endif

