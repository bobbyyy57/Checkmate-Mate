#ifndef OPERATION_HPP
#define OPERATION_HPP

#include "Board.h"

using namespace std;

class Operation : public Board {
        public:
           	virtual void operation(Board) = 0;
};

#endif
