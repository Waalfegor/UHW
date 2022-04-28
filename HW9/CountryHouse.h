#ifndef COUNTRYHOUSE_H_
#define COUNTRYHOUSE_H_

#include "Property.h"

class CountryHouse :public Property
{

public:

	CountryHouse(double worht) : Property(worht) {};

	double Tax() override;

};

#endif