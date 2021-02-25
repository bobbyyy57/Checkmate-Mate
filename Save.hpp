#ifndef __SAVE_HPP__
#define __SAVE_HPP__
#include <iostream>
using namespace std;

class Save: public Button{
protected:
        std::string message;
        bool isTaken;
public:
        void saveMatch(){
		string save_container;
		cout << "Please enter name of file where you would like to save the match: " << endl;;
		getline(cin, save_container);
		
		std::ofstream ofs(file_name);
		if(ofs.is_open()){
		
			for(unsigned i = 0: i <Postion::MakeLog->match.size(); ++i){
			ofs <<MakeLog->math[i] << endl;
			}
		ofs.close();
		cout << "Game saved in " << save_container << ", go take your coffee break." << endl;
		}
		else{
			cout << "Error creating/saving file!" << endl;
		}
	return;
        }
};


#endif // __SAVE_HPP__
