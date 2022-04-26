#include "Student.h"

int main()
{
	Student me("Fomin", "Egor", "21.01.03", "KVBO-01-21");
	Student other;
	cout << me << "\n";
	cin >> other;
	me = other;
	cout << "\n" << me;
}

