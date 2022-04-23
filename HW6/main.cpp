#include "Main.h"

int main()
{
	srand(time(0));
	cout << "Enter the n of the array: ";
	int n;
	cin >> n;
	if (!InCheck(n)) return 0;
	int* Arr = new int[n];
	FillArr(Arr, n);
	cout << "Your int array: \n";
	OutArr(Arr, n);
	cout << "Sorted int array: \n";
	bubbleSort(Arr, n);
	OutArr(Arr, n);
	delete[] Arr;
	double* doubleArr = new double[n];
	FillArr(doubleArr, n);
	cout << "Your double array: \n";
	OutArr(doubleArr, n);
	cout << "Sorted double array: \n";
	bubbleSort(doubleArr, n);
	OutArr(doubleArr, n);
	delete[] doubleArr;
}

