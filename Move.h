#ifndef __MOVE_H__
#define __MOVE_H__

#include "Operation.h"
#include "Menu.h"
#include <string>
#include <iostream>
#include <typeinfo>

using namespace std;
class Move : public Operation {
        public:

                void operation(){
                        string pos1;
                        string pos2;
				if (turn == 0){ cout << "White's move!: " << endl; }
				else if (turn == 0){ cout << "Black's move!: " << endl; }
                       		cout << "Which piece would you like to move?: ";
                       		cin >> pos1;
                        	cout << "Where would you like to move it?: "
                        	cin >> pos2;
				position1 = pos1;
				position2 = pos2;

				move(pos1, pos2);
		}



           
                 void move(pos1, pos2){
			int col1;
                        int row1;
                        int col2;
                        int row2;
			bool stop = false;

			while(!stop){ 
				col1 = ColumnToNum(pos1[0]);
                                row1 = pos1[1];
                                col2 = ColumnToNum(pos2[0]);
                                row2 = pos2[1];
                                if (col1 < 0 || col1 > 7 || row1 < 0 || row1 > 7 || col2 < 0 || col2 > 7 || row2 < 0 || row2 > 7){
                                        cout << "Out of bounds, try again." << endl;
                                }
                                else if(getPosition(row1,col1)->getPiece() == typeid(King)){
                                        PieceFactory* factory = new KingFactory();
                                        bool valid = factory->status();
                                        //move is not valid
                                        if(valid == false){
                                                cout << "Try again." << endl;
                              				  cout << "Which piece would you like to move?: ";
                              				  cin >> pos1;
                               				 cout << "Where would you like to move it?: "
                                			cin >> pos2;
                                        }
                                        else{
                                                stop = true;
                                                MoveLog(pos1, pos2);
                                                throwawayBoard[row2][col2].setEmpty();
                                                throwawayBoard[row2][col2].setPieceandColor(getPosition(row1,col1)->getPiece(),getPosition(row1,col1)->getColor());
                                                throwawayBoard[row1][col1].setEmpty();
                                                printBoard();
                                                if(temp->getPiece() == typeid(King)){
                                                        if(getPosition(row1,row2)->getColor() == 0){
                                                                cout << "White wins!!! Congrats :)" << endl;
                                                        }
                                                        else{
                                                                cout << "Black wins!!! Congrats :)" << endl;
                                                        }
                                                }
                                                delete temp;
                                        }
                                }
				
				else if(getPosition(row1,row1)->getPiece() == typeid(Queen)){
                                        PieceFactory* factory = new QueenFactory();
                                        bool valid = factory->status();
					if(valid == false){
                                                cout << "Try again." << endl;
						cout << "Which piece would you like to move?: ";
                                                          cin >> pos1;
                                                         cout << "Where would you like to move it?: "
                                                        cin >> pos2;
                                        }
                                        else{
                                                stop = true;
                                                MoveLog(pos1, pos2);
                                                throwawayBoard[row2][col2].setEmpty();
                                                throwawayBoard[row2][col2].setPieceandColor(getPosition(row1,col1)->getPiece(),getPosition(row1,col1)->getColor());
                                                throwawayBoard[row1][col1].setEmpty();
                                                printBoard();
						if(temp->getPiece() == typeid(King)){
                                                        if(getPosition(row1,row2)->getColor() == 0){
                                                                cout << "White wins!!! Congrats :)" << endl;
                                                        }
                                                        else{
                                                                cout << "Black wins!!! Congrats :)" << endl;
                                                        }
                                                }
                                                delete temp;
                                	}
				}

				else if(getPosition(row1,row1)->getPiece() == typeid(Bishop)){
                                        PieceFactory* factory = new BishopFactory();
                                        bool valid = factory->status();
                                        if(valid == false){
                                                cout << "Try again." << endl;
						cout << "Which piece would you like to move?: ";
                                                          cin >> pos1;
                                                         cout << "Where would you like to move it?: "
                                                        cin >> pos2;
                                        }
                                        else{
                                                stop = true;
                                                MoveLog(pos1, pos2);
                                                throwawayBoard[row2][col2].setEmpty();
                                                throwawayBoard[row2][col2].setPieceandColor(getPosition(row1,col1)->getPiece(),getPosition(row1,col1)->getColor());
                                                throwawayBoard[row1][col1].setEmpty();
                                                printBoard();
						if(temp->getPiece() == typeid(King)){
                                                        if(getPosition(row1,row2)->getColor() == 0){
                                                                cout << "White wins!!! Congrats :)" << endl;
                                                        }
                                                        else{
                                                                cout << "Black wins!!! Congrats :)" << endl;
                                                        }
                                                }
                                                delete temp;
                                        }
				}

				else if(getPosition(row1,row1)->getPiece() == typeid(Rook)){
                                        PieceFactory* factory = new RookFactory();
                                        bool valid = factory->status();
                                        if(valid == false){
                                                cout << "Try again." << endl;
						cout << "Which piece would you like to move?: ";
                                                          cin >> pos1;
                                                         cout << "Where would you like to move it?: "
                                                        cin >> pos2;
                                        }
                                        else{
                                                stop = true;
                                                MoveLog(pos1, pos2);
                                                throwawayBoard[row2][col2].setEmpty();
                                                throwawayBoard[row2][col2].setPieceandColor(getPosition(row1,col1)->getPiece(),getPosition(row1,col1)->getColor());
                                                throwawayBoard[row1][col1].setEmpty();
                                                printBoard();
						if(temp->getPiece() == typeid(King)){
                                                        if(getPosition(row1,row2)->getColor() == 0){
                                                                cout << "White wins!!! Congrats :)" << endl;
                                                        }
                                                        else{
                                                                cout << "Black wins!!! Congrats :)" << endl;
                                                        }
                                                }
                                                delete temp;
                                        }
				}

				else if(getPosition(row1,row1)->getPiece() == typeid(Knight)){
                                        PieceFactory* factory = new KnightFactory();
                                        bool valid = factory->status();
                                        if(valid == false){
                                                cout << "Try again." << endl;
						cout << "Which piece would you like to move?: ";
                                                          cin >> pos1;
                                                         cout << "Where would you like to move it?: "
                                                        cin >> pos2;
                                        }
                                        else{
                                                stop = true;
                                                MoveLog(pos1, pos2);
                                                throwawayBoard[row2][col2].setEmpty();
                                                throwawayBoard[row2][col2].setPieceandColor(getPosition(row1,col1)->getPiece(),getPosition(row1,col1)->getColor());
                                                throwawayBoard[row1][col1].setEmpty();
                                                printBoard();
						if(temp->getPiece() == typeid(King)){
                                                        if(getPosition(row1,row2)->getColor() == 0){
                                                                cout << "White wins!!! Congrats :)" << endl;
                                                        }
                                                        else{
                                                                cout << "Black wins!!! Congrats :)" << endl;
                                                        }
                                                }
                                                delete temp;
                                        }
				}

				else if(getPosition(row1,row1)->getPiece() == typeid(Pawn)){
                                        PieceFactory* factory = new PawnFactory();
                                        bool valid = factory->status();
                                        if(valid == false){
                                               cout << "Try again." << endl;
						cout << "Which piece would you like to move?: ";
                                                          cin >> pos1;
                                                         cout << "Where would you like to move it?: "
                                                        cin >> pos2;
                                        }
                                        else{
                                                stop = true;
                                                MoveLog(pos1, pos2);
						Position* temp = throwawayBoard[row2][col2];
                                                throwawayBoard[row2][col2].setEmpty();
                                                throwawayBoard[row2][col2].setPieceandColor(getPosition(row1,col1)->getPiece(),getPosition(row1,col1)->getColor());
                                              	throwawayBoard[row1][col1].setEmpty();
                                                printBoard();
						if(temp->getPiece() == typeid(King)){
                               				if(getPosition(row1,row2)->getColor() == 0){
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
			changeTurn(turn);
                        printGameMenu();
		}
};

#endif



