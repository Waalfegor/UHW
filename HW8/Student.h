#ifndef STUDENT_H_
#define STUDENT_H_

#include<iostream>

using namespace std;

class Student
{

private:

	string FirstName;
	string LastName;
	string BirthDate;
	string Group;

public:

	Student() {}
	Student(string FirstNam, string LastName, string BirthDate, string Group);

	friend ostream& operator<<(ostream& out, Student& other);
	friend istream& operator>>(istream &in, Student& other);
	Student& operator=(Student &other);
};

#endif
