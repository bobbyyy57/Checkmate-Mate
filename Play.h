#ifndef PLAY_H
#define PLAY_H

#include "Menu.h"
#include "Board.h"
#include <stdio.h>
#include <string.h>

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
			memcpy(throwawayBoard, initialBoard, sizeof(Position)* 8 * 8);
			game->printBoard();
			m.gameMenu();
		}

};

#endif

