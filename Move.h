#ifndef __MOVE_H__
#define __MOVE_H__

#include "Operation.h"
#include "Menu.h"
#include <string>
#include <iostream>
#include <typeinfo>
#include "PieceFactory.h"
#include "Board.h"
class KingFactory;

using namespace std;
class Move : public Operation {
        public:

                void operation(Board b){
                        string pos1;
                        string pos2;
				if (turn == 0){ cout << "White's move!: " << endl; }
				else if (turn == 0){ cout << "Black's move!: " << endl; }
                       		cout << "Which piece would you like to move?: ";
                       		cin >> pos1;
                        	cout << "Where would you like to move it?: ";
                        	cin >> pos2;
				position1 = pos1;
				position2 = pos2;

				move(pos1, pos2, b);
		}


		int ColumnToNums(char column){
                        if(column == 'a' || column == 'A'){
                                return 0;
                        }
                        else if(column == 'b' || column == 'B'){
                                return 1;
                        }
                        else if(column == 'c' || column == 'C'){
                                return 2;
                        }
                        else if(column == 'd' || column == 'D'){
                                return 3;
                        }
                        else if(column == 'e' || column == 'E'){
                                return 4;
                        }
                        else if(column == 'f' || column == 'F'){
                                return 5;
                        }
                        else if(column == 'g' || column == 'G'){
                                return 6;
                        }
                        else if(column == 'h' || column == 'H'){
                                return 7;
                        }
			else {
				return 10;
			}		
                }

           
                 void move(string pos1, string pos2, Board b){
			int col1;
                        int row1;
                        int col2;
                        int row2;
			bool stop = false;
			bool emptyy = false;
			bool firstM = false;

		
			while(!stop){ 
				col1 = ColumnToNums(pos1.at(0));
                                row1 = pos1.at(1) - 48;
                                col2 = ColumnToNums(pos2.at(0));
                                row2 = pos2.at(1) - 48;

				cout << "Col1: " << col1 << endl;
                                cout << "test: " << b.getPosition(row1,col1).GetPiece()->getType() << endl;
				cout << "Row1: " << row1 << endl;
                                cout << "Col2: " << col2 << endl;
                                cout << "Row2: " << row2 << endl;
				cout << "Turn: " << b.getTurn() << endl;
				

                                if (col1 < -1 || col1 > 8 || row1 < -1 || row1 > 8 || col2 < -1 || col2 > 8 || row2 < -1 || row2 > 8){
                                        cout << "Out of bounds, try again." << endl;
                                	cout << "Try again." << endl;
                                                          cout << "Which piece would you like to move?: ";
                                                          cin >> pos1;
                                                         cout << "Where would you like to move it?: ";
                                                        cin >> pos2;
				}
/*                                else if(getPosition(row1,col1).GetPiece()->getType() == "King"){
                                        PieceFactory* factory = new KingFactory(getPosition(row1,col1), getPosition(row2,col2), b);
                                        bool valid = factory->status();
					if(valid == false){
                                                cout << "Try again." << endl;
                              				  cout << "Which piece would you like to move?: ";
                              				  cin >> pos1;
                               				 cout << "Where would you like to move it?: ";
                                			cin >> pos2;
                                        }
                                        else{
                                                stop = true;
                                                MoveLog(pos1, pos2);
						Position temp = throwawayBoard[row2][col2];
                                                throwawayBoard[row2][col2].setEmpty(true);
                                                throwawayBoard[row2][col2].set(getPosition(row1,col1).GetPiece(),getPosition(row1,col1).GetColor(), emptyy, firstM);
                                                throwawayBoard[row1][col1].setEmpty(true);
                                                b.printBoard();
                                                if(temp.GetPiece()->getType() == "King"){
                                                        if(getPosition(row1,row2).GetColor() == 0){
                                                                cout << "White wins!!! Congrats :)" << endl;
                                                        }
                                                        else{
                                                                cout << "Black wins!!! Congrats :)" << endl;
                                                        }
                                                }
                                        }
                                }
				
				else if(getPosition(row1,col1).GetPiece()->getType() == "Queen"){
                                        PieceFactory* factory = new QueenFactory(getPosition(row1,col1), getPosition(row2, col2), b);
                                        bool valid = factory->status();
					if(valid == false){
                                                cout << "Try again." << endl;
						cout << "Which piece would you like to move?: ";
                                                          cin >> pos1;
                                                         cout << "Where would you like to move it?: ";
                                                        cin >> pos2;
                                        }
                                        else{
                                                stop = true;
                                                MoveLog(pos1, pos2);
						Position temp = throwawayBoard[row2][col2];
                                                throwawayBoard[row2][col2].setEmpty(true);
                                                throwawayBoard[row2][col2].set(getPosition(row1,col1).GetPiece(),getPosition(row1,col1).GetColor(), emptyy, firstM);
                                                throwawayBoard[row1][col1].setEmpty(true);
                                                b.printBoard();
						if(temp.GetPiece()->getType() == "King"){
                                                        if(getPosition(row1,row2).GetColor() == 0){
                                                                cout << "White wins!!! Congrats :)" << endl;
                                                        }
                                                        else{
                                                                cout << "Black wins!!! Congrats :)" << endl;
                                                        }
                                                }
                                	}
				}

				else if(getPosition(row1,col1).GetPiece()->getType() == "Bishop"){
                                        PieceFactory* factory = new BishopFactory(getPosition(row1,col1), getPosition(row2,col2), b);
                                        bool valid = factory->status();
                                        if(valid == false){
                                                cout << "Try again." << endl;
						cout << "Which piece would you like to move?: ";
                                                          cin >> pos1;
                                                         cout << "Where would you like to move it?: ";
                                                        cin >> pos2;
                                        }
                                        else{
                                                stop = true;
                                                MoveLog(pos1, pos2);
						Position temp = throwawayBoard[row2][col2];
                                                throwawayBoard[row2][col2].setEmpty(true);
                                                throwawayBoard[row2][col2].set(getPosition(row1,col1).GetPiece(),getPosition(row1,col1).GetColor(), emptyy, firstM);
                                                throwawayBoard[row1][col1].setEmpty(true);
                                                b.printBoard();
						if(temp.GetPiece()->getType() == "King"){
                                                        if(getPosition(row1,row2).GetColor() == 0){
                                                                cout << "White wins!!! Congrats :)" << endl;
                                                        }
                                                        else{
                                                                cout << "Black wins!!! Congrats :)" << endl;
                                                        }
                                                }
                                        }
				}

				else if(getPosition(row1,col1).GetPiece()->getType() == "Rook"){
                                        PieceFactory* factory = new RookFactory(getPosition(row1,col1), getPosition(row2,col2), b);
                                        bool valid = factory->status();
                                        if(valid == false){
                                                cout << "Try again." << endl;
						cout << "Which piece would you like to move?: ";
                                                          cin >> pos1;
                                                         cout << "Where would you like to move it?: ";
                                                        cin >> pos2;
                                        }
                                        else{
                                                stop = true;
                                                MoveLog(pos1, pos2);
						Position temp = throwawayBoard[row2][col2];
                                                throwawayBoard[row2][col2].setEmpty(true);
                                                throwawayBoard[row2][col2].set(getPosition(row1,col1).GetPiece(),getPosition(row1,col1).GetColor(), emptyy, firstM);
                                                throwawayBoard[row1][col1].setEmpty(true);
                                                b.printBoard();
						if(temp.GetPiece()->getType() == "King"){
                                                        if(getPosition(row1,row2).GetColor() == 0){
                                                                cout << "White wins!!! Congrats :)" << endl;
                                                        }
                                                        else{
                                                                cout << "Black wins!!! Congrats :)" << endl;
                                                        }
                                                }
                                        }
				}

				else if(getPosition(row1,col1).GetPiece()->getType() == "Knight"){
                                        PieceFactory* factory = new KnightFactory(getPosition(row1,col1), getPosition(row2,col2), b);
                                        bool valid = factory->status();
                                        if(valid == false){
                                                cout << "Try again." << endl;
						cout << "Which piece would you like to move?: ";
                                                          cin >> pos1;
                                                         cout << "Where would you like to move it?: ";
                                                        cin >> pos2;
                                        }
                                        else{
                                                stop = true;
                                                MoveLog(pos1, pos2);
						Position temp = throwawayBoard[row2][col2];
                                                throwawayBoard[row2][col2].setEmpty(true);
						throwawayBoard[row2][col2].set(getPosition(row1,col1).GetPiece(),getPosition(row1,col1).GetColor(), emptyy, firstM);
                                                throwawayBoard[row1][col1].setEmpty(true);
                                                b.printBoard();
						if(temp.GetPiece()->getType() == "King"){
                                                        if(getPosition(row1,row2).GetColor() == 0){
                                                                cout << "White wins!!! Congrats :)" << endl;
                                                        }
                                                        else{
                                                                cout << "Black wins!!! Congrats :)" << endl;
                                                        }
                                                }
                                        }
				}
*/
				else if(b.getPosition(row1,col1).GetPiece()->getType() == "Pawn"){
					cout << "PAWN REACHED!" << endl;
                                        PieceFactory* factory = new PawnFactory(getPosition(row1,col1), getPosition(row2,col2), b);
                                        bool valid = factory->status();
                                        if(valid == false){
                                               cout << "Try again." << endl;
						cout << "Which piece would you like to move?: ";
                                                          cin >> pos1;
                                                         cout << "Where would you like to move it?: ";
                                                        cin >> pos2;
                                        }
                                        else{
                                                stop = true;
                                                MoveLog(pos1, pos2);
						Position temp = throwawayBoard[row2][col2];
                                                throwawayBoard[row2][col2].setEmpty(true);
                                                throwawayBoard[row2][col2].set(getPosition(row1,col1).GetPiece(),getPosition(row1,col1).GetColor(), emptyy, firstM);
                                              	throwawayBoard[row1][col1].setEmpty(true);
                                                b.printBoard();
						if(temp.GetPiece()->getType() == "King"){
                               				if(getPosition(row1,row2).GetColor() == 0){
                                				cout << "White wins!!! Congrats :)" << endl;
                               				}
                                			else{
                                         			cout << "Black wins!!! Congrats :)" << endl;
                               				}
                        			}
               		                }
				}
			}
			Menu m;
			changeTurn(turn);
                        m.gameMenu(b);
		}
};

#endif //__MOVE_H__
