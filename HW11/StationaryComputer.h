#ifndef STATIONARYCOMPUTER_H_
#define STATIONARYCOMPUTER_H_ 


#include "Screen.h"
#include "Keyboard.h"

class StationaryComputer : public Screen, public Keyboard
{
	void pixel() override {};
	void Key() override {};
};

#endif 
