#ifndef __BOARD_HPP__
#define __BOARD_HPP__
#include <map>

using namespace std;

class Board{
protected:
	int PlayerColor;
	int CurrentTurn = 0;
	map<int, int> initial_board;
	map<int, int> throw_board;
public:
	void changeTurn(int currentTurn){
	//white's turn is denoted by int 0
	//black pieces' turn is denoted by 1
		if(currentTurn == 0){
			CurrentTurn = 1;
		}
		else{
			CurreentTurn = 0;	
		}
	}
	int GetTurn(){
		return CurrenTurn;
	}
};

struct Position(){
        protected:
        int row;
        char column;
        int color;
        bool empty;
	bool firstMove;
	Piece* type;

        public:
	Position(){
		color = -1;
		type = nullptr;
		empty = true;
		firstMove = true;
	}
        void SetEmpty(){
                empty = true;
        }
	void SetPieceAndColor(Piece* curr, int PieceColor){
		type = curr;
		color = PieceColor;
	}
        int GetColumn(){
		int columnNum = ColumnToNum(column);
		return columnNum;
        }
	//We are using a map to make the board so wen the 
	//user inputs a charater that represent their desired
	//column move we are tranlastin that to an int
	int ColumnToNum(char column){
		if(column == 'a' || 'A'){
		return 0;
		}
		else if(column == 'b' || 'B'){
		return 1;
		}
		else if(column == 'c'  || 'C'){
		return 2;
                }
		else if(column == 'd'  || 'D'){
		return 3;
                }
		else if(column == 'e'  || 'E'){
		return 4;
                }
		else if(column == 'f'  || 'F'){
		return 5;
                }
		else if(column == 'g' || 'G'){
		return 6;
                }
		else if(column == 'h'  || 'H'){
		return 7;
                }
	}

};

#endif // __BOARD_HPP__	
