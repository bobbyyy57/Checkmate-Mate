#ifndef BUTTON_HPP
#define BUTTON_HPP

using namespace std;

#include "Menu.h"

class Operation {
	public: 
		virtual void printMessage() = 0;
		virtual void operation() = 0;
};

#endif
