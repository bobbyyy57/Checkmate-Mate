#ifndef OPERATION_HPP
#define OPERATION_HPP

#include "Board.h"

using namespace std;

class Operation : public Board {
	protected:
		int position1;
		int position2;
        public:
           	virtual void operation() = 0;
};

#endif
