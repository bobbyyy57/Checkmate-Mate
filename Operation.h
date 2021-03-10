#ifndef OPERATION_HPP
#define OPERATION_HPP

using namespace std;

#include "Menu.h"
#include "Board.h"
class Operation: public Board {
        public:
           	virtual void operation() = 0;
};

#endif
