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
			printMessage();
			Board* game = new Board();
			game->setInitialBoard();
	
			copyBoard();
			cout << "Throw: " << sizeof(throwawayBoard) << endl;
			cout << "Init: " << sizeof(initialBoard) << endl;
			cout << "Pos: " << sizeof(Position) * 8 * 8 << endl;
	//		memcpy(&throwawayBoard, initialBoard, sizeof(Position) * 8 * 8);

//			cout << "Initial: "<< initialBoard[0][0].GetPiece()->getType() << endl;
		//	cout << "Throw: " <<  throwawayBoard[0][0].GetPiece()->getType() << endl;
		
			game->printBoard();
			game->setTurn(0);
			m.gameMenu();
		}

};

#endif

