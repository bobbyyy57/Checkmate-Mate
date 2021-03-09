#ifndef PLAY_H
#define PLAY_H

#include "Menu.h"
#include "Board.h"

using namespace std;

class Play : public Operation {

	public: 
		void printMessage() {
			cout << "Starting Game" << endl;
		}

		virtual void operation() {
			Menu m;
			printMessage();
			Board* game = new Board();
			game->printBoard();
			m.gameMenu();
		}

};

#endif
