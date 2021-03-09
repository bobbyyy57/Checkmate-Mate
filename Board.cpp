#include <iostream>
#include <typeinfo>

#include "Board.h"

using namespace std;

void Board::printBoard() {
		
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

string Board::printP(Position curr) {

	if (curr.isEmpty() == false) {

		if (curr.GetColor() == 1) {	
			if (typeid(King) == typeid(curr.getPiece())) {
				return "K";
			}
			else if (typeid(Queen) == typeid(curr.getPiece())) {
                                return "Q";
                        }
			else if (typeid(Bishop) == typeid(curr.getPiece())) {
                                return "B";
                        }
			else if (typeid(Knight) == typeid(curr.getPiece())) {
                                return "H";
                        }
			else if (typeid(Rook) == typeid(curr.getPiece())) {
                                return "R";
                        }
			else if (typeid(Pawn) == typeid(curr.getPiece())) {
                                return "P";
                        }
		}
		else {
			if (typeid(King) == typeid(curr.getPiece())) {
                                return "k";
                        }
                        else if (typeid(Queen) == typeid(curr.getPiece())) {
                                return "q";
                        }
                        else if (typeid(Bishop) == typeid(curr.getPiece())) {
                                return "b";
                        }
                        else if (typeid(Knight) == typeid(curr.getPiece())) {
                                return "h";
                        }
                        else if (typeid(Rook) == typeid(curr.getPiece())) {
                                return "r";
                        }
                        else if (typeid(Pawn) == typeid(curr.getPiece())) {
                                return "p";
                        }
		}
			
	else {
		return ":";
	}
}

void Board::setInitialBoard(){

                initialBoard[0][0].setPieceAndColor(new Rook(), 0, );
                initialBoard[1][0].setPieceAndColor(new Knight(), 0);
                initialBoard[2][0].setPieceAndColor(new Bishop(), 0);
                initialBoard[3][0].setPieceAndColor(new Queen(), 0);
                initialBoard[4][0].setPieceAndColor(new King(), 0);
                initialBoard[5][0].setPieceAndColor(new Bishop(), 0);
                initialBoard[6][0].setPieceAndColor(new Knight(), 0);
                initialBoard[7][0].setPieceAndColor(new Rook(), 0);

                initialBoard[0][7].setPieceAndColor(new Rook(), 1);
                initialBoard[1][7].setPieceAndColor(new Knight(), 1);
                initialBoard[2][7].setPieceAndColor(new Bishop(), 1);
                initialBoard[3][7].setPieceAndColor(new Queen(), 1);
                initialBoard[4][7].setPieceAndColor(new King(), 1);
                initialBoard[5][7].setPieceAndColor(new Bishop(), 1);
                initialBoard[6][7].setPieceAndColor(new Knight(), 1);
                initialBoard[7][7].setPieceAndColor(new Rook(), 1);

                initialBoard[0][1].setPieceAndColor(new Pawn(), 0);
                initialBoard[1][1].setPieceAndColor(new Pawn(), 0);
                initialBoard[2][1].setPieceAndColor(new Pawn(), 0);
                initialBoard[3][1].setPieceAndColor(new Pawn(), 0);
                initialBoard[4][1].setPieceAndColor(new Pawn(), 0);
                initialBoard[5][1].setPieceAndColor(new Pawn(), 0);
                initialBoard[6][1].setPieceAndColor(new Pawn(), 0);
                initialBoard[7][1].setPieceAndColor(new Pawn(), 0);

                initialBoard[0][6].setPieceAndColor(new Pawn(), 1);
                initialBoard[1][6].setPieceAndColor(new Pawn(), 1);
                initialBoard[1][6].setPieceAndColor(new Pawn(), 1);
                initialBoard[1][6].setPieceAndColor(new Pawn(), 1);
                initialBoard[1][6].setPieceAndColor(new Pawn(), 1);
                initialBoard[1][6].setPieceAndColor(new Pawn(), 1);
                initialBoard[1][6].setPieceAndColor(new Pawn(), 1);
                initialBoard[1][6].setPieceAndColor(new Pawn(), 1);
                for (int i = 0; i < 8; i++){
                        initialBoard[i][1].setPieceAndColor(new Pawn(), 0);
                        initialBoard[i][6].setPieceAndColor(new Pawn(), 1);
                }
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
