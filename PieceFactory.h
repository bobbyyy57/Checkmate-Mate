#ifndef PIECE_FACTORY_H
#define PIECE_FACTORY_H

using namespace std;

#include "Menu.h"
#include "Board.h"
#include "Piece.h"
#include "Knight.h"
#include "Pawn.h"

//CREATOR
class PieceFactory {
        public:
		PieceFactory() {};
		~PieceFactory() = default; 

		virtual Piece* PieceFactory() {} = 0; 
		
		bool status() {
			Piece* current = this->PieceFactory();
			bool answer = current->isValid();	
			delete current;
			return answer;
		}

};

//CONCRETE CREATOR
class KingFactory : public PieceFactory {
	public: 
		return new King;
};

class QueenFactory : public PieceFactory {
        public:
                return new Queen;
};

class BishopFactory : public PieceFactory {
        public:
                return new Bishop;
};

class KnightFactory : public PieceFactory {
        public:
                return new Knight;
};

class RookFactory : public PieceFactory {
        public:
                return new Rook;
};

class PawnFactory : public PieceFactory {
        public:
                return new Pawn;
};
		


#endif

