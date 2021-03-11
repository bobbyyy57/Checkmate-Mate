#ifndef __SAVE_H__
#define __SAVE_H__
#include <iostream>
#include <fstream>
#include <string>
#include "Board.h"
#include "Operation.h"

using namespace std;

class Save: public Operation{
protected:
        std::string file;

public:
        void operation(Board board){
		string save_container;
		cout << "Please enter name of file where you would like to save the match." << endl;
		cout << "Please only enter .txt files: " << endl;
		getline(cin, save_container);
		
		file = save_container + ".txt";
		std::ofstream ofs(file);
		if(ofs.is_open()){
		
			for(unsigned i = 0: i <MovesLog.size(); ++i){
			ofs << MovesLog.at(i) << " ";
				if((i % 2) != 0){
					cout << endl; 
				}
			}
		ofs.close();
		cout << "Game saved in " << file << ", go take your coffee break." << endl;
		}
		else{
			cout << "ERROR: file not found, please try again!" << endl;
		}
	return;
        }
};


#endif // __SAVE_H__

