#ifndef HUMAN_H_
#define HUMAN_H_

#include <iostream>
#include <string>
using namespace std;

class Human
{
protected:

	string surname, name, midname;
	int age;

public:

	Human() {};
	Human(string name, string surname, string midname, int age)
		: surname(surname), name(name), midname(midname), age(age) {};

	virtual void print() = 0;
	
	~Human() {};

};

#endif 