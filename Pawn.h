#ifndef PAWN_H
#define PAWN_H

#include <iostream> 
#include "Piece.h"
#include "Board.h"

using namespace std;


class Pawn : public Piece {
        public:
		Pawn() {};
		virtual string getType() { return "Pawn"; }
                virtual bool isValid(Position* start, Position* end, Board b) {

                        int colDifference = start->GetColumn() - end->GetColumn();
                        int rowDifference = start->GetRow() - end->GetRow();
				
			cout << endl;
			cout << "PAWN TEST: " << start->GetColor()<< ", " << end->GetColor() << endl;
			cout << "StartCol: " << start->GetColumn() << endl;
			cout << "EndCol: " << end->GetColumn() << endl;
			cout << "StartRow: " << start->GetRow() << endl;
                        cout << "EndROw: " << end->GetRow() << endl;
			cout << "colDiff: " << colDifference << endl;
			cout << "rowDiff: " << rowDifference << endl;
			

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


			//SAME SPOT
			if (colDifference == 0 && rowDifference == 0 ) {
                                cout << "ERROR: Same position!" << endl;
                                return false;
                        }

			//CLEAR
			for(int i = start->GetRow() + 1; i < end->GetRow(); ++i) {
                                if (b.getPosition(i,start->GetColumn())->isEmpty() == false) {
                                        cout << "ERROR: Path is not clear!" << endl;
                                        return false;
                                }
                        }

			//WITHIN
			if (start->GetFirst() == true && colDifference > 1) {
                                if (start->GetColumn() == end->GetColumn() &&
                                    start->GetRow() + 2 == end->GetRow()) {
                                        return true;
                                }
                                else {
					cout << "first";
                                        cout << "ERROR: Out of Pawn's ability!" << endl;
                                        return false;
                                }
                        }
                        else {
				//KILL
				if ( (colDifference == 1 || colDifference == -1) &&
                                    (rowDifference == 1 || rowDifference == -1) &&
                                     start->GetColor() != end->GetColor() &&
                                     end->isEmpty() == false )
                                {
                                        return true;
                                }

				//REG
				if (colDifference > 1 || colDifference < -1 ||
                                    rowDifference > 1 || rowDifference < -1 ) {
                                	cout << "reg";     
				   	cout << "ERROR: Out of Pawn's ability!" << endl;
                                        return false;
                                }
                        }

                        return true;
                }
};

#endif
