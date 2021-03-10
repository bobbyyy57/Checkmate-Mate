#ifndef PIECE_FACTORY_H
#define PIECE_FACTORY_H

using namespace std;

#include "Piece.h"
#include "Bishop.h"
#include "King.h"
#include "Queen.h"
#include "Rook.h"
#include "Knight.h"
#include "Pawn.h"
#include "Board.h"

//CREATOR
class PieceFactory {
	protected: 
		Position start;
		Position end;
		Board b;
        public:
		PieceFactory() {}
		virtual ~PieceFactory() = default;

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
		KingFactory(Position x, Position y, Board be) {
                        start = x;
                        end = y;
			b = be;
                }
		virtual Piece* factory() {

			return new King;
		}
};	

class QueenFactory : public PieceFactory {
        public:
		QueenFactory(Position x, Position y, Board be) {
                        start = x;
                        end = y;
                	b = be;
		}
                virtual Piece* factory() {
			return new Queen;
		}
};

class BishopFactory : public PieceFactory {
        public:

		BishopFactory(Position x, Position y, Board be) {
                        start = x;
                        end = y;
			b = be;
                }
		virtual Piece* factory() {
                	return new Bishop;
		}
};

class KnightFactory : public PieceFactory {
        public:
		KnightFactory(Position x, Position y, Board be) {
                        start = x;
                        end = y;
			b = be;
                }
		virtual Piece* factory() {
        	        return new Knight;
		}
};

class RookFactory : public PieceFactory {
        public:
		RookFactory(Position x, Position y, Board be) {
                        start = x;
                        end = y;
			b = be;
                }
                virtual Piece* factory() {
			return new Rook;
		}
};

class PawnFactory : public PieceFactory {
        public:

		PawnFactory(Position x, Position y, Board be) {
                        start = x;
                        end = y;
			b = be;
                }
		virtual Piece* factory() {
                	return new Pawn;
		}
};


#endif
