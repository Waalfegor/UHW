#include "Funñ.h"

int InputSizeArr(int n)
{
	while (true)
	{
		cout << "Enter Arr size" << endl;
		cin >> n;
		if ((!cin) || n < 1)
		{
			cout << "Input Error" << endl;
			cin.clear();
			cin.ignore(1024, '\n');
		}
		else break;
	}
	return n;
}

vector<int> RandomFill(vector<int> Arr, int n)
{
	Arr.clear();
	for (int i = 0; i < n; i++)
	{
		Arr.push_back(rand() % 100 - 50);
	}
	return Arr;
}

void OutArr(vector<int> Arr)
{
	for (int i = 0; i < Arr.size(); i++)
	{
		cout << Arr[i] << "  ";
	}
	cout << "\n";
}

vector<int> Invert(vector <int> Arr)
{
	reverse(Arr.begin(), Arr.end());
	return Arr;
}

vector<int> DeletingMinuses(vector<int> Arr)
{
	for (int i = 0; i < Arr.size(); i++) if (Arr[i] < 0) Arr[i] = -1 * Arr[i];
	return Arr;
}

vector<int> ReplaceElementsBy5(vector<int> Arr)
{
	for (int i = 0; i < Arr.size(); i++) Arr[i] = 5;
	return Arr;
}

vector<int> SelectAction(vector<int> Arr, int choice)
{
	cout << "Choose what to do with the array:\n" 
		<< "1 - Invert\n"
		<< "2 - Remove minuses\n" 
		<< "3 - Replace the element values with 5\n"
		<< "4 - Replace element values with random values\n";
	cin >> choice;
	if ((!cin) || (choice < 1) || (choice > 4))
	{
		cout << "Input Error" << endl;
		cin.clear();
		cin.ignore(1024, '\n');
		SelectAction(Arr, choice);
	}
	if(choice == 1)Arr = Invert(Arr);
	else if(choice == 2)Arr = DeletingMinuses(Arr);
	else if(choice == 3)Arr = ReplaceElementsBy5(Arr);
	else if(choice == 4)Arr = RandomFill(Arr, Arr.size());
	return Arr;
}




