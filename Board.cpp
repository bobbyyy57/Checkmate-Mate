
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
	cout << "                       0     " + printP(throwawayBoard[0][0]) + "    :::" + printP(throwawayBoard[0][1]) + "::::   " + printP(throwawayBoard[0][2]) + "    :::" + printP(throwawayBoard[0][3]) + "::::   " + printP(throwawayBoard[0][4]) + "    :::" + printP(throwawayBoard[0][5]) + "::::   " + printP(throwawayBoard[0][6]) + "    :::" + printP(throwawayBoard[0][7]) + "::::" << endl;
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

		if (curr.GetColor() == 1) {	
			if (typeid(King) == typeid(curr.GetPiece())) {
				return "K";
			}
			else if (typeid(Queen) == typeid(curr.GetPiece())) {
                                return "Q";
                        }
			else if (typeid(Bishop) == typeid(curr.GetPiece())) {
                                return "B";
                        }
			else if (typeid(Knight) == typeid(curr.GetPiece())) {
                                return "H";
                        }
			else if (typeid(Rook) == typeid(curr.GetPiece())) {
                                return "R";
                        }
			else if (typeid(Pawn) == typeid(curr.GetPiece())) {
                                return "P";
                        }
		}
		else {
			if (typeid(King) == typeid(curr.GetPiece())) {
                                return "k";
                        }
                        else if (typeid(Queen) == typeid(curr.GetPiece())) {
                                return "q";
                        }
                        else if (typeid(Bishop) == typeid(curr.GetPiece())) {
                                return "b";
                        }
                        else if (typeid(Knight) == typeid(curr.GetPiece())) {
                                return "h";
                        }
                        else if (typeid(Rook) == typeid(curr.GetPiece())) {
                                return "r";
                        }
                        else if (typeid(Pawn) == typeid(curr.GetPiece())) {
                                return "p";
                        }
		}
	}		
	else {
		return ":";
	}
}


void Board::setInitialBoard() {
			
		
		Rook* wRook1;
		Rook* wRook2;
		Knight* wKnight1;
		Knight* wKnight2;
		Bishop* wBishop1; 
		Bishop* wBishop2;
		Queen* wQueen; 
		King* wKing;

		Rook* bRook1;
                Rook* bRook2;
                Knight* bKnight1;
                Knight* bKnight2;
                Bishop* bBishop1;
                Bishop* bBishop2;
                Queen* bQueen;
                King* bKing;

                initialBoard[0][0].setPieceAndColor(wRook1, 0);
                initialBoard[1][0].setPieceAndColor(wKnight1, 0);
                initialBoard[2][0].setPieceAndColor(wBishop1, 0);
                initialBoard[3][0].setPieceAndColor(wQueen, 0);
                initialBoard[4][0].setPieceAndColor(wKing, 0);
                initialBoard[5][0].setPieceAndColor(wBishop2, 0);
                initialBoard[6][0].setPieceAndColor(wKnight2, 0);
                initialBoard[7][0].setPieceAndColor(wRook2, 0);

                initialBoard[0][7].setPieceAndColor(bRook1, 1);
                initialBoard[1][7].setPieceAndColor(bKnight1, 1);
                initialBoard[2][7].setPieceAndColor(bBishop1, 1);
                initialBoard[3][7].setPieceAndColor(bQueen, 1);
                initialBoard[4][7].setPieceAndColor(bKing, 1);
                initialBoard[5][7].setPieceAndColor(bBishop2, 1);
                initialBoard[6][7].setPieceAndColor(bKnight2, 1);
                initialBoard[7][7].setPieceAndColor(bRook2, 1);

		Pawn* wPawn1;
                Pawn* wPawn2;
                Pawn* wPawn3;
                Pawn* wPawn4;
                Pawn* wPawn5;
                Pawn* wPawn6;
                Pawn* wPawn7;
                Pawn* wPawn8;
                Pawn* bPawn1;
                Pawn* bPawn2;
                Pawn* bPawn3;
                Pawn* bPawn4;
                Pawn* bPawn5;
                Pawn* bPawn6;
                Pawn* bPawn7;
                Pawn* bPawn8;
		

                initialBoard[0][1].setPieceAndColor(wPawn1, 0);
                initialBoard[1][1].setPieceAndColor(wPawn2, 0);
                initialBoard[2][1].setPieceAndColor(wPawn3, 0);
                initialBoard[3][1].setPieceAndColor(wPawn4, 0);
                initialBoard[4][1].setPieceAndColor(wPawn5, 0);
                initialBoard[5][1].setPieceAndColor(wPawn6, 0);
                initialBoard[6][1].setPieceAndColor(wPawn7, 0);
                initialBoard[7][1].setPieceAndColor(wPawn8, 0);

                initialBoard[0][6].setPieceAndColor(bPawn1, 1);
                initialBoard[1][6].setPieceAndColor(bPawn2, 1);
                initialBoard[1][6].setPieceAndColor(bPawn3, 1);
                initialBoard[1][6].setPieceAndColor(bPawn4, 1);
                initialBoard[1][6].setPieceAndColor(bPawn5, 1);
                initialBoard[1][6].setPieceAndColor(bPawn6, 1);
                initialBoard[1][6].setPieceAndColor(bPawn7, 1);
                initialBoard[1][6].setPieceAndColor(bPawn8, 1);

                for (int i = 2; i < 6; i++){
                        for (int j = 0; j < 8; j++)
                                initialBoard[j][i].setEmpty();
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

