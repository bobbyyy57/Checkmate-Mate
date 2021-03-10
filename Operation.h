#ifndef OPERATION_HPP
#define OPERATION_HPP

#include "Board.h"
#include "Menu.h"

using namespace std;

class Operation : public Board {
	protected: 
		string position1;
		string position2;
        public:
           	virtual void operation(Board) = 0;
};

#endif
