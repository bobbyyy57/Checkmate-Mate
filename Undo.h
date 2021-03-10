#ifndef __UNDO_H__
#define __UNDO_H__

#include "Operation.hpp"
#include "Menu.h"
#include <string>
#include <iostream>
#include "Board.h"

class Undo: public Operation{

	public:
	void Operation(Board board){
		string end = MovesLog.back();
		MovesLog.pop_back();
		strin destination = MovesLog.back();
		MovesLog.pop_back();
		
		Operation* undo = new Move();
		undo->move(end, destination);
		delete undo;
	}	

};

#endif // __UNDO_H__
