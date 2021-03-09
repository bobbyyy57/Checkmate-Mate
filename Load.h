#include <fstream>
#ifndef __LOAD_HPP__
#define __LOAD_HPP__
#include <iostream>
#include <string>

using namespace std;

class Load: public Button{

public:
	void loadMatch(){
	string save_container;
	cout << "Done with your coffee break? Please input save match/file name: " << endl;

	std::ifstream ifs(save_container);
		if(ifs){
			throw_board = new Board();
		}
};

#endif // __LOAD_HPP
