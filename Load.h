#ifndef __LOAD_H__
#define __LOAD_H__
#include <fstream>
#include <iostream>
#include <string>
#include "Operation.h"
#include <fstream>

using namespace std;

class Load: public Operation{
	private:
		string file = "";
		string line = "";
	public:
		void operation(Board board){
		string save_container;
		cout << "Done with your coffee break? Please input save match/file name: " << endl;
		cout << "Please only enter .txt files." << endl;
		getline(cin, save_container);

		file = save_container + ".txt";
		std::ifstream ifs(file);
			if(ifs){
		//RESETTING THE INITIAL BOARD
				board.setInitialBoard();
		//CALLING THE MOVE FUNCTION TO LOAD THE MOVES
		//SAVED FROM THE THE FILE INTO THE NEW BOARD
				Operation* load = new Move();

		//ITERATING THORUGH THE FILE & MAKING MOVES
				while(std::getline(ifs, line)){
					string delimiter = " ";
					size_t pos = 0;
				
					string pos1 = "";
					string pos2 = "";
					
					while((pos = line.find(delimiter)) != std::string::npos){
						pos1 = line.substr(0, pos);
						line.erase(0, pos + delimeter.length());
						pos2 = line.substr(0, pos);
					}
				load->move(pos1, po2);
				}
			delete load;
			ifs.close();
		//STARTING THE MATCH AGAIN
		Menu game = new Menu();
		game.gameMenu(board);
			}
			else{
			cout << "Could not open file, please try again." << endl;
			}
};

#endif // __LOAD_H__
