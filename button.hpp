#ifndef BUTTON_HPP
#define BUTTON_HPP

using namespace std;

#include "Menu.h"

class Button {
	public: 
		virtual void printMessage() = 0;
		virtual void operation() = 0;
};

#endif
