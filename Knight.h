#ifndef KNIGHT_H
#define KNIGHT_H

using namespace std;

#include "Piece.h"
#include "Board.h"

#include <iostream>

class Knight : public Piece {
        public:
		virtual string getType() { return "Knight"; }
                virtual bool isValid(Position* start, Position* end, Board b) {

                        int colDifference = start->GetColumn() - end->GetColumn();
                        int rowDifference = start->GetRow() - end->GetRow();

			cout << endl;
                        cout << "KNIGHT TEST: " << start->GetColor()<< ", " << end->GetColor() << endl;
                        cout << "StartCol: " << start->GetColumn() << endl;
                        cout << "EndCol: " << end->GetColumn() << endl;
                        cout << "StartRow: " << start->GetRow() << endl;
                        cout << "EndROw: " << end->GetRow() << endl;
                        cout << "colDiff: " << colDifference << endl;
                        cout << "rowDiff: " << rowDifference << endl;	
			cout << "StartColor: " << start->GetColor() << endl;
                        cout << "EndColor: " << end->GetColor() << endl;
		

                        //WRONG COLOR
                        if (b.getTurn() != start->GetColor()) {
                                cout << "ERROR: Wrong color!" << endl;
                                return false;
                        }


                        //SAME COLOR
                        if (start->GetColor() == end->GetColor()) {
                                cout << "ERROR: Destination is occupied by a piece of your color!" << endl;
                                return false;
                        }

                        //WITHIN RANGE  
                        if (colDifference == 0 && rowDifference == 0) {
                                cout << "ERROR: Same position!" << endl;
                                return false;
                        }
                        else if ((colDifference > 1 || colDifference < -1) &&
                                (rowDifference != 1 && rowDifference != -1)) {
					cout << "here 1";
                                        cout << "ERROR: Out of Knight's ability!" << endl;
                                        return false;
                                
                        }
                        else if ((rowDifference > 1 || rowDifference < -1) &&
                                (colDifference != 1 && colDifference != -1)) {
                         		cout << "here 2";
			                cout << "ERROR: Out of Knight's ability!" << endl;
                                        return false;
                                
                        }
                	return true;
		}
};

#endif
