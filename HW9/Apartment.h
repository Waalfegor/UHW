#ifndef APARTMET_H_
#define APARTMET_H_


#include "Property.h"


class Apartment :public Property
{

public:

	Apartment(double worth) : Property(worth) {};

	double Tax() override;

};

#endif