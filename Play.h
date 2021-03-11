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
		virtual void operation(Board game) {
			Menu m;
			game.setInitialBoard();
			game.setTurn(0);
			m.gameMenu(game);
		}

};

#endif

