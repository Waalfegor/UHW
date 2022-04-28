#ifndef BOSS_H_
#define BOSS_H_

#include "Human.h"

class Boss : public Human
{
	int number_of_workers;

public:

	Boss();
	Boss(string name, string surname, string midname, int age, int number_of_workers) :
		Human(name, surname, midname, age), number_of_workers(number_of_workers) {};

	void print() override;

	~Boss() {};

};


#endif