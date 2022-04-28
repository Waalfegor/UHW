#ifndef STUDENT_H_
#define STUDENT_H_

#include "Human.h"

class Student : public Human
{
	bool on_lesson;

public:

	Student() : Human() {};

	Student(string surname, string name, string midname, int age, bool onLesson) :
		Human(surname, name, midname, age), on_lesson(on_lesson) {};

	~Student() {};

	void print() override;

};

#endif