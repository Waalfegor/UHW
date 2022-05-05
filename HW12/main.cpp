#include "MyArr.cpp"

int main()
{
	srand(time(0));
	int size = rand() % 10 + 5;
	double* Arr = new double[size];
	FillArr(Arr, size);
	cout << "Your array: \n";
	OutArr(Arr, size);
	cout << "Sorted array: \n";
	bubbleSort(Arr, size);
	OutArr(Arr, size);
	delete[] Arr;
}




