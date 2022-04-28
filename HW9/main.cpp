#include "Property.h"
#include "Apartment.h"
#include "Car.h"
#include "CountryHouse.h"

int main()
{
	Property* p[7];

	for (int i = 1; i < 8; i++)
	{
		if (i < 4) p[i - 1] = new Apartment(1000 * (double)i * 2);
		else if (i < 6) p[i - 1] = new Car(200 * (double)i * 2);
		else p[i - 1] = new CountryHouse(500 * (double)i * 2);
	}
	for (int i = 1; i < 8; i++)
	{
		if (i < 4)
		{ 
			cout << "Apartmet " << i << endl;
			cout << "Worth: " << p[i - 1]->GetWorth() << endl;
			cout << "Tax: " << p[i - 1]->Tax() << "\n\n";
		}
		else if (i < 6)
		{
			cout << "Car " << i - 3 << endl;
			cout << "Worth: " << p[i - 1]->GetWorth() << endl;
			cout << "Tax: " << p[i - 1]->Tax() << "\n\n";
		}
		else
		{
			cout << "Country House " << i - 5 << endl;
			cout << "Worth: " << p[i - 1]->GetWorth() << endl;
			cout << "Tax: " << p[i - 1]->Tax() << "\n\n";
		}
	}
}

