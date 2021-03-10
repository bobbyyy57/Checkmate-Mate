#ifndef PIECE_FACTORY_H
#define PIECE_FACTORY_H

using namespace std;

#include "Piece.h"
#include "Knight.h"
#include "Pawn.h"
#include "Bishop.h"

//CREATOR
class PieceFactory {
        public:
		PieceFactory() {};
		~PieceFactory() = default; 

		virtual Piece* factory() = 0; 
		
		bool status() {
			Piece* current = this->factory();
			bool answer = current->isValid(start, end, b);	
			delete current;
			return answer;
		}

};


//CONCRETE CREATOR
class KingFactory : public PieceFactory {
	public: 
		virtual Piece* factory(Position x, Position, Board x) {
			return new King;
		}
};	

class QueenFactory : public PieceFactory {
        public:
                virtual Piece* factory(Position x, Position, Board x) {
			return new Queen;
		}
};

class BishopFactory : public PieceFactory {
        public:
		virtual Piece* factory(Position x, Position, Board x) {
                	return new Bishop;
		}
};

class KnightFactory : public PieceFactory {
        public:
		virtual Piece* factory(Position x, Position, Board x) {
        	        return new Knight;
		}
};

class RookFactory : public PieceFactory {
        public:
                virtual Piece* factory(Position x, Position, Board x) {
			return new Rook;
		}
};

class PawnFactory : public PieceFactory {
        public:
		virtual Piece* factory(Position x, Position, Board x) {
                	return new Pawn;
		}
};


#endif
