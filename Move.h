#ifndef __MOVE_H__
#define __MOVE_H__

#include "Operation.h"
#include "Menu.h"
#include <string>
#include <iostream>
#include <typeinfo>
#include "PieceFactory.h"
#include "Board.h"
#include <stdio.h>
#include <ctype.h>

using namespace std;
class Move : public Operation {
        public:

                void operation(Board b){
                        string pos1;
                        string pos2;
                       		cout << "Which piece would you like to move?: (LETTER/ROW) ";
                       		cin >> pos1;
				bool yes = validInput(pos1);
				while (yes == false) {
					cout << "Invalid Input. Please Try Again." << endl;
					cout << "Which piece would you like to move?: (LETTER/ROW) ";
                                	cin >> pos1;
					yes = validInput(pos1);
				}	
                        	cout << "Where would you like to move it?: (LETTER/ROW) ";
                        	cin >> pos2;
				bool yes2 = validInput(pos2);
				 while (yes2 == false) {
                                        cout << "Invalid Input. Please Try Again." << endl;
                                        cout << "Where would you like to move it?: (LETTER/ROW) ";
					cin >> pos2;
                                        yes2 = validInput(pos2);
                                }
				position1 = pos1;
				position2 = pos2;

				move(pos1, pos2, b);
		}

		bool validInput(string input) {
				
			if(input.size() != 2) {
				return false;
			}

			if (( input.at(1) == '1' || input.at(1) == '2' || input.at(1) == '3' ||
                             input.at(1) == '6' || input.at(1) == '5' || input.at(1) == '4' ||
                             input.at(1) == '7' || input.at(1) == '0' ) && ( input.at(0) == 'a' || input.at(0) == 'A' || input.at(0) == 'b' ||
                             input.at(0) == 'B' || input.at(0) == 'c' || input.at(0) == 'C' ||
                             input.at(0) == 'd' || input.at(0) == 'D' || input.at(0) == 'e' || input.at(0) == 'E' ||
                             input.at(0) == 'f' || input.at(0) == 'F' || input.at(0) == 'G' ||
                             input.at(0) == 'g' || input.at(0) == 'h' ||input.at(0) == 'H')) {
				return true; 
			}
			else {
				return false;
			}
			    
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
			bool firstM = true;

		
			while(!stop){ 
				col1 = ColumnToNums(pos1.at(0));
                                row1 = pos1.at(1) - 48;
                                col2 = ColumnToNums(pos2.at(0));
                                row2 = pos2.at(1) - 48;

                                if (col1 < -1 || col1 > 8 || row1 < -1 || row1 > 8 || col2 < -1 || col2 > 8 || row2 < -1 || row2 > 8){
                                        cout << "Out of bounds, try again." << endl;
                                	cout << "Try again." << endl;
                                                          cout << "Which piece would you like to move?: ";
                                                          cin >> pos1;
                                                         cout << "Where would you like to move it?: ";
                                                        cin >> pos2;
				}
                                else if(b.getPosition(row1,col1)->GetPiece()->getType() == "King"){
                                        PieceFactory* factory = new KingFactory(b.getPosition(row1,col1), b.getPosition(row2,col2), b);
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
                                        PieceFactory* factory = new KnightFactory(b.getPosition(row1,col1), b.getPosition(row2,col2), b);
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
                                             	b.getPosition(row2,col2)->set(b.getPosition(row1,col1)->GetPiece(), b.getPosition(row1,col1)->GetColor(), emptyy, false);
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
			b.changeTurn();
			m.clearScreen();
                        m.gameMenu(b);
		}
};

#endif


