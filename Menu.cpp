#include <iostream>

#include "Menu.h"
#include "Quit.h"
#include "Play.h"
#include "Operation.h"
#include "Board.h"

using namespace std;

void Menu::printLogo(){
	cout << "                                                                                                            " << endl;
	cout << "                                                                                                            " << endl;
    	cout << "           __________ ____   ____ __________ _________ ___  ___  _______ _______ _________ __________ __________\n";
    	cout << "          /  _______//   /__/   //  _______/  _______//  / /  / /  ___  '___   //  ___   //___   ___//  _______/\n";
    	cout << "         /  /       /   ___    //  /_____ /  /       /  //  /  /  /  /  /  /  //  /__/  /    /  /   /  /_____\n";
    	cout << "        /  /_______/   /  /   //   _____//  /_______/  /\\  \\  /  /  /  /  /  //  /  /  /    /  /   /   _____/ __\n";
   	cout << "        \\_________/___/  /___//_________/\\_________/__/  \\__\\/__/  /__/  /__//__/  /__/    /__/   /_________// /\n";
    	cout << "                                       _______ _______ _________ __________ __________  ___                  '\n";
    	cout << "                                      /  ___  '___   //  ___   //___   ___//  _______/ /  /\n";
    	cout << "                                     /  /  /  /  /  //  /__/  /    /  /   /  /_____   /__/\n";
    	cout << "                                    /  /  /  /  /  //  /  /  /    /  /   /   _____/  ___\n";
    	cout << "                                   /__/  /__/  /__//__/  /__/    /__/   /_________/ /__/\n";
}

void Menu::printGreeting() {
 
 	cout << "      -----------------------------------------------------------------------------------------------------------------" << endl;	
  	cout << "      |                                                                                                               |" << endl; 
  	cout << "      |                                                  Hey! Hey! Hey!                                               |" << endl;
  	cout << "      |            Welcome to Checkmate, Mate! A two-player game that calls upon the most clever to defend,           |" << endl;
  	cout << "      |         attack, and strategize to secure a win. Brought to you by Ashley Bautista, Rodrigo Lamas, and         |" << endl;
  	cout << "      |              Bobby Lerias. We thank you for playing, but we have one question for you. You ready?             |" << endl;
  	cout << "      |                                                     GAME ON!                                                  |" << endl;
  	cout << "      |                                                                                                               |" << endl;
  	cout << "      -----------------------------------------------------------------------------------------------------------------" << endl;
  	cout << "                                                                                            press 'ENTER' to proceed..." << endl;

	cin.get();
}

void Menu::printBeginningMenu() {
	cout << "                                                                                                                       "       << endl;
	cout << "                                                -----------------------                      				"       << endl;
	cout << "                                                      P - Play                              				" 	<< endl;
	cout << "    '-.-'                                             L - Load Game                                            '-.-'"          << endl;
	cout << "   __.'.__      ()                                    Q - Quit                                        ()      __.'.__"         << endl;
	cout << "  |_______|  .-:--:-.                           -----------------------                            .-:--:-.  |_______|"        << endl;
	cout << "   \\=====/    \\____/      ()                                                                ()      \\____/    \\=====/"     << endl;
	cout << "    )___(     {====}      /\\                                                                /\\      {====}     )___("        << endl;
	cout << "   /_____\\     )__(      //\\\\     (\\=,                                            (\\=,     //\\\\      )__(     /_____\\" << endl;
	cout << "    |   |     /____\\    (    )   //  .\\   |'-'-'|    __          __    |'-'-'|  //  .\\    (    )    /____\\     |   |"      << endl;
	cout << "    |   |      |  |      )__(   (( \\_  \\  |_____|   /  \\        /  \\   |_____| (( \\_  \\    )__(      |  |      |   |"    << endl;
	cout << "    |   |      |  |     /____\\   ))  `\\_)  |===|    \\__/        \\__/    |===|   ))  `\\_)  /____\\     |  |      |   |"    << endl;
	cout << "    |   |      |  |      |  |   (/     \\   |   |   /____\\      /____\\   |   |  (/     \\    |  |      |  |      |   |"      << endl;
	cout << "    |   |      |  |      |  |    | _.-'|   |   |    |  |        |  |    |   |   | _.-'|    |  |      |  |      |   |"          << endl;
	cout << "   /_____\\    /____\\    /____\\    )___(    )___(    |__|        |__|    )___(    )___(    /____\\    /____\\    /_____\\"   << endl;
	cout << "  (=======)  (======)  (======)  (=====)  (=====)  (====)      (====)  (=====)  (=====)  (======)  (======)  (=======)"        << endl;
	cout << "  }======={  }======{  }======{  }====={  }====={  }===={      }===={  }====={  }====={  }======{  }======{  }======={"        << endl;
	cout << " (_________)(________)(________)(_______)(_______)(______)    (______)(_______)(_______)(________)(________)(_________)"       << endl;
	cout << endl;
	cout << endl;
}

void Menu::beginningMenu() {
	printLogo();
	printBeginningMenu();
  
	string input;
  	cout << "Choose Option: ";
  	cin >> input;

  	if (input == "P" || input == "p") { 
		click = new Play();
		clearScreen();
		click->operation();
		delete click;
	}
//  	else if (input == "L" || input == "l") { 
//       		click = new Load();
//       		click->operation();
//  	}
	else if (input == "Q" || input == "q") {
		click = new Quit("beginning");
     		click->operation();
	}
  	else {	
		clearScreen();
   		cout << "ERROR: Invalid Option. Please Try Again." << endl;
		beginningMenu();
  	}
}

void printGreeting() {
 
 	cout << "      -----------------------------------------------------------------------------------------------------------------" << endl;	
  	cout << "      |                                                                                                               |" << endl; 
  	cout << "      |                                                  Hey! Hey! Hey!                                               |" << endl;
  	cout << "      |            Welcome to Checkmate, Mate! A two-player game that calls upon the most clever to defend,           |" << endl;
  	cout << "      |         attack, and strategize to secure a win. Brought to you by Ashley Bautista, Rodrigo Lamas, and         |" << endl;
  	cout << "      |              Bobby Lerias. We thank you for playing, but we have one question for you. You ready?             |" << endl;
  	cout << "      |                                                     GAME ON!                                                  |" << endl;
  	cout << "      |                                                                                                               |" << endl;
  	cout << "      -----------------------------------------------------------------------------------------------------------------" << endl;
  	cout << "                                                                                            press 'ENTER' to proceed..." << endl;

	cin.get();
}

void printBeginningMenu() {
	cout << "                                                                                                                       "       << endl;
	cout << "                                                -----------------------                      				"       << endl;
	cout << "                                                      P - Play                              				" 	<< endl;
	cout << "    '-.-'                                             L - Load Game                                            '-.-'"          << endl;
	cout << "   __.'.__      ()                                    Q - Quit                                        ()      __.'.__"         << endl;
	cout << "  |_______|  .-:--:-.                           -----------------------                            .-:--:-.  |_______|"        << endl;
	cout << "   \\=====/    \\____/      ()                                                                ()      \\____/    \\=====/"     << endl;
	cout << "    )___(     {====}      /\\                                                                /\\      {====}     )___("        << endl;
	cout << "   /_____\\     )__(      //\\\\     (\\=,                                            (\\=,     //\\\\      )__(     /_____\\" << endl;
	cout << "    |   |     /____\\    (    )   //  .\\   |'-'-'|    __          __    |'-'-'|  //  .\\    (    )    /____\\     |   |"      << endl;
	cout << "    |   |      |  |      )__(   (( \\_  \\  |_____|   /  \\        /  \\   |_____| (( \\_  \\    )__(      |  |      |   |"    << endl;
	cout << "    |   |      |  |     /____\\   ))  `\\_)  |===|    \\__/        \\__/    |===|   ))  `\\_)  /____\\     |  |      |   |"    << endl;
	cout << "    |   |      |  |      |  |   (/     \\   |   |   /____\\      /____\\   |   |  (/     \\    |  |      |  |      |   |"      << endl;
	cout << "    |   |      |  |      |  |    | _.-'|   |   |    |  |        |  |    |   |   | _.-'|    |  |      |  |      |   |"          << endl;
	cout << "   /_____\\    /____\\    /____\\    )___(    )___(    |__|        |__|    )___(    )___(    /____\\    /____\\    /_____\\"   << endl;
	cout << "  (=======)  (======)  (======)  (=====)  (=====)  (====)      (====)  (=====)  (=====)  (======)  (======)  (=======)"        << endl;
	cout << "  }======={  }======{  }======{  }====={  }====={  }===={      }===={  }====={  }====={  }======{  }======{  }======={"        << endl;
	cout << " (_________)(________)(________)(_______)(_______)(______)    (______)(_______)(_______)(________)(________)(_________)"       << endl;
	cout << endl;
	cout << endl;
}

void beginningMenu() {
	printLogo();
	printBeginningMenu();
  
	string input;
  	cout << "Choose Option: ";
  	cin >> input;

  	if (input == "P" || input == "p") { 
		Button* play = new Play();
		clearScreen();
		play->operation();
  	}
	/*  	else if (input == "L" || input == "l") { 
    	       		Button* load = new Load();
    	       		       		load->operation();
    	       		       		  	}*/	
	else if(input == "Q" || input == "q") { 
       		Button* quit = new Quit("beginning");
   	    	quit->operation();
  	}
	/*	else {
	    		cout << "Invalid Option";
	    		  	}*/
}


void Menu::printGameMenu() {
  cout << endl;
  cout << "                                                     M - Move" << endl;
  cout << "                                                     U - Undo" << endl;
  cout << "                                                     X - Surrender" << endl;
  cout << "                                                     S - Save" << endl;
  cout << "                                                     Q - Quit" << endl;

}

void Menu::gameMenu() {
  
	printGameMenu();

	string input;
 	cout << "Choose Option: ";
  	cin >> input;

/*

 	while(input != "Q" || input == "q") {


	
 		if (input == "M" || input == "m") { 
			click = new Move();
			click->operation();
 	 	}
	  	else if (input == "U" || input == "u") { 
			click = new Undo();
      			click->operation();
 	 	}
 	 	else if (input == "X" || input == "x") { 
			click = new Surrender();
    			click->operation();
 	 	}
 	 	else if (input == "S" || input == "s") { 
			click = new Save();
      			click->operation();
		  }
		  else {
	    		cout << "Invalid Option. Please Try Again." << endl;
   	  	}
 	}

*/	
	click = new Quit("game");
        click->operation();

}






