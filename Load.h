// #ifndef __LOAD_H__
// #define __LOAD_H__
// #include <fstream>
// #include <iostream>
// #include <string>
// #include "Operation.h"
// #include <fstream>

// using namespace std;

// class Load : public Operation
// {
// private:
// 	string file = "";
// 	string line = "";

// public:
// 	void operation(Board board)
// 	{
// 		string save_container;
// 		cout << "Done with your coffee break? Please input save match/file name: " << endl;
// 		cout << "Please only enter .txt files." << endl;
// 		getline(cin, save_container);

// 		file = save_container + ".txt";
// 		std::ifstream ifs(file);

// 		board.setInitialBoard();

// 		Operation *load = new Move();

// 		while (std::getline(ifs, line))
// 		{
// 			string delimiter = " ";
// 			size_t pos = 0;

// 			string pos1 = "";
// 			string pos2 = "";

// 			while ((pos = line.find(delimiter)) != std::string::npos)
// 			{
// 				pos1 = line.substr(0, pos);
// 				line.erase(0, pos + delimeter.length());
// 				pos2 = line.substr(0, pos);
// 			}
// 			load->move(pos1, po2, board);
// 		}
// 		delete load;
// 		ifs.close();

// 		Menu game = new Menu();
// 		game.gameMenu(board);
// 	}
// 	else
// 	{
// 		cout << "Could not open file, please try again." << endl;
// 	}
// };

// #endif // __LOAD_H__
