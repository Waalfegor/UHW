#ifndef STATIONARY_COMPUTER_H_
#define STATIONARY_COMPUTER_H_ 


#include "Screen.h"
#include "Keyboard.h"

class Phone : public Screen, public Keyboard
{
	void pixel() override {};
	void Key() override {};
};

#endif
