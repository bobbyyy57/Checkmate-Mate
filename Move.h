#ifndef __MOVE_H__
#define __MOVE_H__

#include "Operation.h"
#include "Menu.h"
#include <string>
#include <iostream>
#include <typeinfo>
#include "PieceFactory.h"
#include "Board.h"

using namespace std;
class Move : public Operation {
        public:

                void operation(Board b){
                        string pos1;
                        string pos2;
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
                                cout << "test: " << b.getPosition(row1,col1)->GetPiece()->getType() << endl;
				cout << "Row1: " << row1 << endl;
				 cout << "Color1: " << b.getPosition(row1,col1)->GetColor() << endl;

                                cout << "Col2: " << col2 << endl;
        			cout << "test: " << b.getPosition(row2,col2)->GetPiece()->getType() << endl;
	                        cout << "Row2: " << row2 << endl;
	

				cout << "Turn: " << b.getTurn() << endl;
				cout << "Color2: " << b.getPosition(row2,col2)->GetColor() << endl;

                                if (col1 < -1 || col1 > 8 || row1 < -1 || row1 > 8 || col2 < -1 || col2 > 8 || row2 < -1 || row2 > 8){
                                        cout << "Out of bounds, try again." << endl;
                                	cout << "Try again." << endl;
                                                          cout << "Which piece would you like to move?: ";
                                                          cin >> pos1;
                                                         cout << "Where would you like to move it?: ";
                                                        cin >> pos2;
				}
                                else if(b.getPosition(row1,col1)->GetPiece()->getType() == "King"){
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
                                                b.getPosition(row2,col2)->setEmpty(true);
                                                b.getPosition(row2,col2)->set(b.getPosition(row1,col1)->GetPiece(), b.getPosition(row1,col1)->GetColor(), emptyy, firstM);
                                                b.getPosition(row1,col1)->setEmpty(true);
                                                b.printBoard();
                                                if( b.getPosition(row2, col2)->GetPiece()->getType() == "King"){
                                                        if(b.getPosition(row1,col1)->GetColor() == 0){
                                                                cout << "White wins!!! Congrats :)" << endl;
                                                        }
                                                        else{
                                                                cout << "Black wins!!! Congrats :)" << endl;
                                                        }
                                                }
					}
                                }
				
				else if(b.getPosition(row1,col1)->GetPiece()->getType() == "Queen"){
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
                                                b.getPosition(row2,col2)->setEmpty(true);
                                                b.getPosition(row2,col2)->set(b.getPosition(row1,col1)->GetPiece(), b.getPosition(row1,col1)->GetColor(), emptyy, firstM);
                                                b.getPosition(row1,col1)->setEmpty(true);
                                                b.printBoard();
                                                if( b.getPosition(row2, col2)->GetPiece()->getType() == "King"){
                                                        if(b.getPosition(row1,col1)->GetColor() == 0){
                                                                cout << "White wins!!! Congrats :)" << endl;
                                                        }
                                                        else{
                                                                cout << "Black wins!!! Congrats :)" << endl;
                                                        }
                                                }
					}
				}

				else if(b.getPosition(row1,col1)->GetPiece()->getType() == "Bishop"){
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
                                                b.getPosition(row2,col2)->setEmpty(true);
                                                b.getPosition(row2,col2)->set(b.getPosition(row1,col1)->GetPiece(), b.getPosition(row1,col1)->GetColor(), emptyy, firstM);
                                                b.getPosition(row1,col1)->setEmpty(true);
                                                b.printBoard();
                                                if( b.getPosition(row2, col2)->GetPiece()->getType() == "King"){
                                                        if(b.getPosition(row1,col1)->GetColor() == 0){
                                                                cout << "White wins!!! Congrats :)" << endl;
                                                        }
                                                        else{
                                                                cout << "Black wins!!! Congrats :)" << endl;
                                                        }
                                                }
					}
				}

				else if(b.getPosition(row1,col1)->GetPiece()->getType() == "Rook"){
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
                                                b.getPosition(row2,col2)->setEmpty(true);
                                                b.getPosition(row2,col2)->set(b.getPosition(row1,col1)->GetPiece(), b.getPosition(row1,col1)->GetColor(), emptyy, firstM);
                                                b.getPosition(row1,col1)->setEmpty(true);
                                                b.printBoard();
                                                if( b.getPosition(row2, col2)->GetPiece()->getType() == "King"){
                                                        if(b.getPosition(row1,col1)->GetColor() == 0){
                                                                cout << "White wins!!! Congrats :)" << endl;
                                                        }
                                                        else{
                                                                cout << "Black wins!!! Congrats :)" << endl;
                                                        }
                                                }
					}
				}

				else if(b.getPosition(row1,col1)->GetPiece()->getType() == "Knight"){
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
                                                b.getPosition(row2,col2)->setEmpty(true);
                                                b.getPosition(row2,col2)->set(b.getPosition(row1,col1)->GetPiece(), b.getPosition(row1,col1)->GetColor(), emptyy, firstM);
                                                b.getPosition(row1,col1)->setEmpty(true);
                                                b.printBoard();
                                                if( b.getPosition(row2, col2)->GetPiece()->getType() == "King"){
                                                        if(b.getPosition(row1,col1)->GetColor() == 0){
                                                                cout << "White wins!!! Congrats :)" << endl;
                                                        }
                                                        else{
                                                                cout << "Black wins!!! Congrats :)" << endl;
                                                        }
                                                }
					}
				}

				else if(b.getPosition(row1,col1)->GetPiece()->getType() == "Pawn"){
					cout << "PAWN REACHED!" << endl;

					cout << "Col1: " << col1 << endl;
                                cout << "test: " << b.getPosition(row1,col1)->GetPiece()->getType() << endl;
                                cout << "Row1: " << row1 << endl;
                                 cout << "Color1: " << b.getPosition(row1,col1)->GetColor() << endl;

                                cout << "Col2: " << col2 << endl;
                                cout << "test: " << b.getPosition(row2,col2)->GetPiece()->getType() << endl;
                                cout << "Row2: " << row2 << endl;
				

				cout << "get column" << b.getPosition(row1,col1)->GetColumn() << endl;
			        cout << "get row" << b.getPosition(row1,col1)->GetRow() << endl;


                                        PieceFactory* factory = new PawnFactory(b.getPosition(row1,col1), b.getPosition(row2,col2), b);
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
                                                b.getPosition(row2,col2)->set(new Empty(), -1, true, true);
                                             	b.getPosition(row2,col2)->set(b.getPosition(row1,col1)->GetPiece(), b.getPosition(row1,col1)->GetColor(), emptyy, firstM);
						b.getPosition(row1,col1)->set(new Empty(), -1, true, true);
                                                b.printBoard();
						if( b.getPosition(row2, col2)->GetPiece()->getType() == "King"){
                               				if(b.getPosition(row1,col1)->GetColor() == 0){
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
                        cout << "6" << endl;
			b.changeTurn();
                        cout << "7" << endl;
                        m.gameMenu(b);
		}
};

#endif

