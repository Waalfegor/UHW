#include "Main.h"

int main()
{
	srand(time(0));
	int n;
	int m;
	cout << "Enter Array height:" << endl;
	cin >> n;
	if (!InCheck(n)) return 0;
	cout << "Enter Array width:" << endl;
	cin >> m;
	if (!InCheck(m)) return 0;
	int** Arr = new int* [n];
	for (int i = 0; i < n; i++) Arr[i] = new int[m];
	FillArr(Arr, n, m);
	OutArr(Arr, n, m);
	for (int i = 0; i < n; i++) delete[] Arr[i];
	delete[] Arr;
}


void FillArr(int** Arr, int n, int m)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			Arr[i][j] = rand() % 41 + 10;
		}
	}
}

void OutArr(int** Arr, int n, int m)
{
	cout << "\n";
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)

		{
			cout << Arr[i][j] << " ";
		}
		cout << "\n";
	}
}

bool InCheck(int num)
{
	if (!(cin) || num < 1)
	{
		cout << "Input error";
		return false;
	}
	else return true;
}

