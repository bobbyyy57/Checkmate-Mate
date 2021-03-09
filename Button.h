#ifndef __BUTTON_H__
#define __BUTTON_H__


class Button{
protected:
	int currentTurn;
public:
	virtual void PrintMessage() = 0;
	virtual void operation() = 0;

};

#endif // __BUTTON_H__
