#ifndef __MOVE_H__
#define __MOVE_H__

#include "Operation.h"
#include "Menu.h"
#include <string>
#include <iostream>
#include <typeinfo>
#include "PieceFactory.h"

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



           
                 void move(string pos1, string pos2, Board b){
			int col1;
                        int row1;
                        int col2;
                        int row2;
			bool stop = false;
			bool emptyy = false;
			bool firstM = false;

		
			while(!stop){ 
				col1 = ColumnToNum(pos1[0]);
                                row1 = pos1[1];
                                col2 = ColumnToNum(pos2[0]);
                                row2 = pos2[1];
                                if (col1 < 0 || col1 > 7 || row1 < 0 || row1 > 7 || col2 < 0 || col2 > 7 || row2 < 0 || row2 > 7){
                                        cout << "Out of bounds, try again." << endl;
                                }
                                else if(getPosition(row1,col1).GetPiece()->getType() == "King"){
                                        PieceFactory* factory = new KingFactory(getPosition(row1,col1), getPosition(row2,col2));
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
                                                delete temp;
                                        }
                                }
				
				else if(getPosition(row1,col1).GetPiece()->getType() == "Queen"){
                                        PieceFactory* factory = new QueenFactory(getPosition(row1,col1), getPosition(row2, col2));
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
                                                delete temp;
                                	}
				}

				else if(getPosition(row1,col1).GetPiece()->getType() == "Bishop"){
                                        PieceFactory* factory = new BishopFactory(getPosition(row1,col1), getPosition(row2,col2));
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
                                                delete temp;
                                        }
				}

				else if(getPosition(row1,col1).GetPiece()->getType() == "Rook"){
                                        PieceFactory* factory = new RookFactory(getPosition(row1,col1), getPosition(row2,col2));
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
                                                delete temp;
                                        }
				}

				else if(getPosition(row1,col1).GetPiece()->getType() == "Knight"){
                                        PieceFactory* factory = new KnightFactory(getPosition(row1,col1), getPosition(row2,col2));
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
                                                delete temp;
                                        }
				}

				else if(getPosition(row1,col1).GetPiece()->getType() == "Pawn"){
                                        PieceFactory* factory = new PawnFactory(getPosition(row1,col1), getPosition(row2,col2));
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
						Position* temp = throwawayBoard[row2][col2];
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
						delete temp;		
               		                }
				}
			}
			Menu m;
			changeTurn(turn);
                        m.gameMenu(b);
		}
};

#endif


