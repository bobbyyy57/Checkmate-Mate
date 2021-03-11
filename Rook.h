#ifndef ROOK_H
#define ROOK_H

#include "Board.h"
#include "Piece.h"

using namespace std;

class Rook : public Piece {
	public:
	Rook() {};
	virtual string getType() { return "Rook"; }
        virtual bool isValid(Position* start, Position* end, Board b) {

			int colDifference = start->GetColumn() - end->GetColumn();
                        int rowDifference = start->GetRow() - end->GetRow();

			cout << endl;
			cout << "ROOK TEST: color 1, " << start->GetColor()<< " || color 2, " << end->GetColor() << endl;
			cout << "StartCol: " << start->GetColumn() << endl;
			cout << "EndCol: " << end->GetColumn() << endl;
			cout << "StartRow: " << start->GetRow() << endl;
                        cout << "EndROw: " << end->GetRow() << endl;
			cout << "colDiff: " << colDifference << endl;
			cout << "rowDiff: " << rowDifference << endl;
			
			//wrong color
                        if(b.getTurn() != start->GetColor()){
                                std::cout << "ERROR: Wrong color!" << std::endl;
                                return false;
                        }

			//same color
                        if (start->GetColor() == end->GetColor()){
                                std::cout << "ERROR: Destination is occupied by a piece of your color!" << std::endl;
                                return false;
                        }
			
			//same spot
			if (colDifference == 0 && rowDifference == 0 ) {
                                cout << "ERROR: Same position!" << endl;
                                return false;
                        }		
			
			//out of rooks ability
                        else if (colDifference > 1 && rowDifference > 1)  {
                                cout << "ERROR: Out of Rook's ability!" << endl;
				return false;
                        }

			else if (colDifference < -1 && rowDifference <-1){
				cout << "ERROR: Out of Rook's ability!" << endl;
				return false;
			}

			else if (colDifference > 1 && rowDifference < -1)  {
                                cout << "ERROR: Out of Rook's ability!" << endl;
				return false;
                        }

			else if (colDifference < -1 && rowDifference > 1)  {
                                cout << "ERROR: Out of Rook's ability!" << endl;
                                return false;
                        }
				
			//path not clear
			for(int i = start->GetRow() + 1; i < end->GetRow(); ++i) {
                                if (b.getPosition(i,start->GetColumn())->isEmpty() == false) {
                               		std::cout << "ERROR: Path is not clear!" << std::endl;
                               		return false;
                                }
                        }
                        for(int i = start->GetColumn() + 1; i < end->GetColumn(); ++i) {
                                if (b.getPosition(start->GetRow(), i)->isEmpty() == false) {
                         		std::cout << "ERROR: Path is not clear!" << std::endl;
                              		return false;
                                }
                        }
			return true;

	}

};





#endif
