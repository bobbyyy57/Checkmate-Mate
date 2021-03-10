
#include <iostream>
#include <typeinfo>

#include "Piece.h"
#include "Board.h"
#include "Pawn.h"
#include "Knight.h"
#include "King.h"
#include "Queen.h"
#include "Bishop.h"
#include "Rook.h"
using namespace std;



void Board::printBoard() {
		//chess 8x8
cout << "			      A       B       C       D       E       F       G       H    " << endl;
	cout << endl;
	cout << "                                  ::::::::        ::::::::        ::::::::        ::::::::" << endl;

	cout << "                       0     " + printP(initialBoard[0][0]) + "    :::" + printP(throwawayBoard[0][1]) + "::::   " + printP(throwawayBoard[0][2]) + "    :::" + printP(throwawayBoard[0][3]) + "::::   " + printP(throwawayBoard[0][4]) + "    :::" + printP(throwawayBoard[0][5]) + "::::   " + printP(throwawayBoard[0][6]) + "    :::" + printP(throwawayBoard[0][7]) + "::::" << endl;

	cout << "                                  ::::::::        ::::::::        ::::::::        ::::::::" << endl; 
	cout << "                                  ::::::::        ::::::::        ::::::::        ::::::::" << endl; 
	cout << "                          ::::::::        ::::::::        ::::::::        ::::::::        " << endl;
	cout << "                       1  :::" + printP(throwawayBoard[1][0]) + "::::   " + printP(throwawayBoard[1][1]) + "    :::" + printP(throwawayBoard[1][2]) + "::::   " + printP(throwawayBoard[1][3]) + "    :::" + printP(throwawayBoard[1][4]) + "::::   " + printP(throwawayBoard[1][5]) + "    :::" + printP(throwawayBoard[1][6]) + "::::   " + printP(throwawayBoard[1][7]) + "    " << endl;
	cout << "                          ::::::::        ::::::::        ::::::::        ::::::::        " << endl;
	cout << "                          ::::::::        ::::::::        ::::::::        ::::::::        " << endl;
	cout << "                                  ::::::::        ::::::::        ::::::::        ::::::::" << endl;
	cout << "                       2     " + printP(throwawayBoard[2][0]) + "    :::" + printP(throwawayBoard[2][1]) + "::::   " + printP(throwawayBoard[2][2]) + "    :::" + printP(throwawayBoard[2][3]) + "::::   " + printP(throwawayBoard[2][4]) + "    :::" + printP(throwawayBoard[2][5]) + "::::   " + printP(throwawayBoard[2][6]) + "    :::" + printP(throwawayBoard[2][7]) + "::::" << endl;
        cout << "                                  ::::::::        ::::::::        ::::::::        ::::::::" << endl;
        cout << "                                  ::::::::        ::::::::        ::::::::        ::::::::" << endl;
	cout << "                          ::::::::        ::::::::        ::::::::        ::::::::        " << endl;
	cout << "                       3  :::" + printP(throwawayBoard[3][0]) + "::::   " + printP(throwawayBoard[3][1]) + "    :::" + printP(throwawayBoard[3][2]) + "::::   " + printP(throwawayBoard[3][3]) + "    :::" + printP(throwawayBoard[3][4]) + "::::   " + printP(throwawayBoard[3][5]) + "    :::" + printP(throwawayBoard[3][6]) + "::::   " + printP(throwawayBoard[3][7]) + "    " << endl;
        cout << "                          ::::::::        ::::::::        ::::::::        ::::::::        " << endl;
        cout << "                          ::::::::        ::::::::        ::::::::        ::::::::        " << endl;	
        cout << "                                  ::::::::        ::::::::        ::::::::        ::::::::" << endl;
	cout << "                       4     " + printP(throwawayBoard[4][0]) + "    :::" + printP(throwawayBoard[4][1]) + "::::   " + printP(throwawayBoard[4][2]) + "    :::" + printP(throwawayBoard[4][3]) + "::::   " + printP(throwawayBoard[4][4]) + "    :::" + printP(throwawayBoard[4][5]) + "::::   " + printP(throwawayBoard[4][6]) + "    :::" + printP(throwawayBoard[4][7]) + "::::" << endl;
        cout << "                                  ::::::::        ::::::::        ::::::::        ::::::::" << endl;
        cout << "                                  ::::::::        ::::::::        ::::::::        ::::::::" << endl;
        cout << "                          ::::::::        ::::::::        ::::::::        ::::::::        " << endl;
        cout << "                       5  :::" + printP(throwawayBoard[5][0]) + "::::   " + printP(throwawayBoard[5][1]) + "    :::" + printP(throwawayBoard[5][2]) + "::::   " + printP(throwawayBoard[5][3]) + "    :::" + printP(throwawayBoard[5][4]) + "::::   " + printP(throwawayBoard[5][5]) + "    :::" + printP(throwawayBoard[5][6]) + "::::   " + printP(throwawayBoard[5][7]) + "    " << endl;
        cout << "                          ::::::::        ::::::::        ::::::::        ::::::::        " << endl;
        cout << "                          ::::::::        ::::::::        ::::::::        ::::::::        " << endl;
        cout << "                                  ::::::::        ::::::::        ::::::::        ::::::::" << endl;
	cout << "                       6     " + printP(throwawayBoard[6][0]) + "    :::" + printP(throwawayBoard[6][1]) + "::::   " + printP(throwawayBoard[6][2]) + "    :::" + printP(throwawayBoard[6][3]) + "::::   " + printP(throwawayBoard[6][4]) + "    :::" + printP(throwawayBoard[6][5]) + "::::   " + printP(throwawayBoard[6][6]) + "    :::" + printP(throwawayBoard[6][7]) + "::::" << endl;
        cout << "                                  ::::::::        ::::::::        ::::::::        ::::::::" << endl;
        cout << "                                  ::::::::        ::::::::        ::::::::        ::::::::" << endl;
	cout << "                          ::::::::        ::::::::        ::::::::        ::::::::        " << endl;
        cout << "                       7  :::" + printP(throwawayBoard[7][0]) + "::::   " + printP(throwawayBoard[7][1]) + "    :::" + printP(throwawayBoard[7][2]) + "::::   " + printP(throwawayBoard[7][3]) + "    :::" + printP(throwawayBoard[7][4]) + "::::   " + printP(throwawayBoard[7][5]) + "    :::" + printP(throwawayBoard[7][6]) + "::::   " + printP(throwawayBoard[7][7]) + "    " << endl;
        cout << "                          ::::::::        ::::::::        ::::::::        ::::::::        " << endl;
        cout << "                          ::::::::        ::::::::        ::::::::        ::::::::        " << endl;
	cout << endl;
	cout << "            -------------------------------------------------------------------------------------------" << endl;
}

string  Board::printP(Position curr) {

	if (curr.isEmpty() == false) {
		if (curr.GetPiece() == nullptr) {
			cout << "Piece: null" << endl;
		}

		string key = curr.GetPiece()->getType();

		if (curr.GetColor() == 1) {	
			if (key == "King") {
                                return "K";
                        }
                        else if (key == "Queen") {
                                return "Q";
                        }
                        else if (key == "Bishop") {
                                return "B";
                        }
                        else if (key == "Knight") {
                                return "H";
                        }
                        else if (key == "Rook") {
                                return "R";
                        }
                        else if (key == "Pawn") {
                                return "P";
                        }
		}
		else {
			if (key == "King") {
                                return "k";
                        }
                        else if (key == "Queen") {
                                return "q";
                        }
                        else if (key == "Bishop") {
                                return "b";
                        }
                        else if (key == "Knight") {
                                return "h";
                        }
                        else if (key == "Rook") {
				return "r";
                        }
                        else if (key == "Pawn") {

                                return "p";
                        }
		}
	}		
	else {
		if (curr.GetColor() == 1) {		
			return " ";
		}
		else if (curr.GetColor() == 0) {
			return ":";
		}
		else {
			return "-1";
		}
	}
}


void Board::setInitialBoard() {

	
		//SET: PIECE , COLOR, EMPTY, FIRSTMOVE 			
	            	initialBoard[0][0].set(new Rook(), 0, false, true);
                initialBoard[1][0].set(new Knight(), 0, false, true);
                initialBoard[2][0].set(new Bishop(), 0, false, true);
                initialBoard[3][0].set(new Queen(), 0, false, true);
                initialBoard[4][0].set(new King(), 0, false, true);
                initialBoard[5][0].set(new Bishop(), 0, false, true);
                initialBoard[6][0].set(new Knight(), 0, false, true);
                initialBoard[7][0].set(new Rook(), 0, false, true);
	
		            initialBoard[0][7].set(new Rook(), 1, false, true);
                initialBoard[1][7].set(new Knight(), 1, false, true);
                initialBoard[2][7].set(new Bishop(), 1, false, true);
                initialBoard[3][7].set(new Queen(), 1, false, true);
                initialBoard[4][7].set(new King(), 1, false, true);
                initialBoard[5][7].set(new Bishop(), 1, false, true);
                initialBoard[6][7].set(new Knight(), 1, false, true);
                initialBoard[7][7].set(new Rook(), 1, false, true);

                initialBoard[0][1].set(new Pawn(), 0, false, true);
                initialBoard[1][1].set(new Pawn(), 0, false, true);
                initialBoard[2][1].set(new Pawn(), 0, false, true);
                initialBoard[3][1].set(new Pawn(), 0, false, true);
                initialBoard[4][1].set(new Pawn(), 0, false, true);
                initialBoard[5][1].set(new Pawn(), 0, false, true);
                initialBoard[6][1].set(new Pawn(), 0, false, true);
                initialBoard[7][1].set(new Pawn(), 0, false, true);

                initialBoard[0][6].set(new Pawn(), 1, false, true);
                initialBoard[1][6].set(new Pawn(), 1, false, true);
                initialBoard[2][6].set(new Pawn(), 1, false, true);
                initialBoard[3][6].set(new Pawn(), 1, false, true);
                initialBoard[4][6].set(new Pawn(), 1, false, true);
                initialBoard[5][6].set(new Pawn(), 1, false, true);
                initialBoard[6][6].set(new Pawn(), 1, false, true);
                initialBoard[7][6].set(new Pawn(), 1, false, true);

                for (int i = 2; i < 6; i++){
                        for (int j = 0; j < 8; j++)
                                initialBoard[j][i].setEmpty(true);
                }

                for (int i = 0; i < 8; i++){
                        for (int j = 0; j < 8; j++){
                                int colAscii = 65 + i;
                                char col = colAscii;
                                initialBoard[i][j].setColumn(col);
                                initialBoard[i][j].setRow(j);
                        }
                }
}

