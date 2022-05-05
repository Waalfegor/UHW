#include "MyArr.h"

template<class T>
void FillArr(T* Arr, int n)
{
	for (int i = 0; i < n; i++)
	{
		Arr[i] = rand() % 100;
	}
}

template<class T>
void OutArr(T* Arr, int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << Arr[i] << " ";
	}
	cout << "\n";
}

template<class T>
void bubbleSort(T* Arr, int n)
{
	T temp;
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




