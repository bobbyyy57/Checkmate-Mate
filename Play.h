#ifndef PLAY_H
#define PLAY_H

#include "Menu.h"
#include "Board.h"
#include <stdio.h>
#include <string.h> 
#include "Piece.h"
#include "Rook.h"

using namespace std;

class Play : public Operation {

	public: 
		void printMessage() {
			cout << "Starting Game" << endl;
		}

		virtual void operation() {
			Menu m;
			Board* game = new Board();

			printMessage();
			game->setInitialBoard();
			game->printBoard();
			game->setTurn(0);
			m.gameMenu();
		}

};

#endif

