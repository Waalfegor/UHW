#include "Student.h"

Student::Student(string FirstName, string LastName, string BirthDate, string Group)
{
	this->FirstName = FirstName;
	this->LastName = LastName;
	this->BirthDate = BirthDate;
	this->Group = Group;

}

ostream& operator<<(ostream& out, Student& other)
{
	return{ out << "Student\n" 
		<< "First name: "
		<< other.FirstName << "\n"
		<< "Last name: "
		<< other.LastName <<"\n"
		<< "Birth date: "
		<< other.BirthDate <<"\n"
		<< "Group: "
		<< other.Group << "\n"};
}

istream& operator>>(istream &in, Student& other)
{
	cout << "Enter first name: ";
	in >> other.FirstName;
	cout << "Enter last name: ";
	in >> other.LastName;
	cout << "Enter birth date: ";
	in >> other.BirthDate;
	cout << "Enter group: ";
	in >> other.Group;
	return in;
}

Student& Student::operator=(Student& other)
{
	this->FirstName = other.FirstName;
	this->LastName = other.LastName;
	this->BirthDate = other.BirthDate;
	this->Group = other.Group;
	return *this;
}