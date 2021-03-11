#ifndef __UNDO_H__
#define __UNDO_H__

#include "Operation.h"
#include "Menu.h"
#include <string>
#include <iostream>
#include "Board.h"

class Undo: public Operation{
	private:
	int number;
	int letter;
	
	public:
	void Operation(Board board){
		string end = MovesLog.back();
		MovesLog.pop_back();
		strin destination = MovesLog.back();
		MovesLog.pop_back();
		
		void splitString(destination);
		if(board[number][letter].isEmpty() != true){
			std::cout<< "Cannot undo move, previous position is not free."<<std::endl;
		}
		else{
			Operation* undo = new Move();
			undo->move(end, destination, board);
			delete undo;
		}
	}	

	void splitString(string str){ 
	std::string num, alpha;
	    for (int i=0; i<str.length(); i++){ 
	        if (isdigit(str[i])){
	            num.push_back(str[i]); 
			number = std::stoi(num);
		}
	        else if((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z')){
	            alpha.push_back(str[i]); 
	
			if(alpha == 'a' || alpha == 'A'){
				letter = 0;
			}
			else if(alpha == 'b' || alpha == 'B'){
				letter = 1;
			}
			else if(alpha == 'c' || alpha == 'C'){
				letter = 2;
                	}
			else if(alpha == 'd' || alpha == 'D'){
				letter = 3;
                	}
			else if(alpha == 'e' || alpha == 'E'){
				letter = 4;
                	}
			else if(alpha == 'f' || alpha == 'F'){
				letter = 5;
                	}
			else if(alpha == 'g' || alpha == 'G'){
				letter = 6;
                	}
			else if(alpha == 'h' || alpha == 'H'){
				letter = 7;
                	}
		} 
};

#endif // __UNDO_H__

