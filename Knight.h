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
/*
                        int colDifference = start->GetColumn() - end->GetColumn();
                        int rowDifference = start->GetRow() - end->GetRow();

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
                        if (colDifference == 0 || rowDifference == 0) {
                                cout << "ERROR: Same position!" << endl;
                                return false;
                        }
                        else if (colDifference > 1 || colDifference < -1)  {
                                if (rowDifference != 1 || rowDifference != -1) {
                                        cout << "ERROR: Out of Knight's ability!" << endl;
                                        return false;
                                }
                        }
                        else if (rowDifference > 1 || rowDifference < -1)  {
                                if (colDifference != 1 || colDifference != -1) {
                                        cout << "ERROR: Out of Knight's ability!" << endl;
                                        return false;
                                }
                        }

                        //PATH CLEAR
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

  */                      return true;
                }
};

#endif
