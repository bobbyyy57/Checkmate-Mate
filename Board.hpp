#ifndef __BOARD_HPP__
#define __BOARD_HPP__
#include <map>

using namespace std;

struct Position{

	
};

class Board{
protected:
	int PlayerColor;
	int CurrentTurn;
	map<int, int> initial_board;
	map<int, int> throw_board;
public:
	void changeTurn(int currentTurn){};
	void SetPieceAndColor(Piece, int PlayerColor){};
};

#endif // __BOARD_HPP__	
