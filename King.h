#ifndef KING_H
#define KING_H

#include "Piece.h"
#include "Board.h"

using namespace std;

class King : public Piece {
	virtual string getType() { return "King"; }
	virtual bool isValid(Position* start, Position* end, Board b) {
		 
		int colDifference = start->GetColumn() - end->GetColumn();
                int rowDifference = start->GetRow() - end->GetRow();
		
		
		if (b.getTurn() != start->GetColor()) {
             		cout << "ERROR: Wrong color!" << endl;
                       	return false;
		}
		
		
		if (start->GetColor() == end->GetColor()) {
                        cout << "ERROR: Destination is occupied by a piece of your color!" << endl;
                        return false;
                }
	
		
		if (colDifference == 0 && rowDifference == 0 ) {
                     	cout << "ERROR: Same position!" << endl;
                      	return false;
               	}

		
		for(int i = start->GetRow() + 1; i < end->GetRow(); ++i) {
                        if (throwawayBoard[i][start->GetColumn()].isEmpty() == false) {
	                        cout << "ERROR: Path is not clear!" << endl;
       		                return false;
                 	}
                }
		for(int i = start->GetColumn() + 1; i < end->GetColumn(); ++i) {
      	                if (throwawayBoard[start->GetRow()][i].isEmpty() == false) {
                                cout << "ERROR: Path is not clear!" << endl;
                                return false;
                        }
                }

		
		if ((colDifference > 1 || colDifference < -1) ||
		    (rowDifference > 1 || rowDifference < -1)) {
			cout << "ERROR: Out of King's Capability!" << endl;
			return false; 
		}
	
		return true;
			
	}

};





#endif

