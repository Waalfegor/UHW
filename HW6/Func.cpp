#include "Main.h"

void OutArr(int* Arr, int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << Arr[i] << " ";
	}
	cout << "\n";
}

void OutArr(double* Arr, int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << Arr[i] << " ";
	}
	cout << "\n";
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

void FillArr(int* Arr, int n)
{
	for (int i = 0; i < n; i++)
	{
		Arr[i] = rand() % 100;
	}
}

void FillArr(double* Arr, int n)
{
	for (int i = 0; i < n; i++)
	{
		Arr[i] = rand() % 1001 ;
		Arr[i] = Arr[i] / 10;
	}
}

void bubbleSort(int* Arr, int n)
{
	int temp;
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = 0; j < n - i - 1; j++)
		{
			if (Arr[j] > Arr[j + 1])
			{
				temp = Arr[j];
				Arr[j] = Arr[j + 1];
				Arr[j + 1] = temp;
			}
		}
	}
}

void bubbleSort(double* Arr, int n)
{
	double temp;
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = 0; j < n - i - 1; j++)
		{
			if (Arr[j] > Arr[j + 1])
			{
				temp = Arr[j];
				Arr[j] = Arr[j + 1];
				Arr[j + 1] = temp;
			}
		}
	}
}