#ifndef FUNÑ_H_
#define FUNÑ_H_

#include <iostream>
#include <stdlib.h>
#include <ctime>
#include <vector>
#include <algorithm>

using namespace std;


int InputSizeArr(int n);
vector<int> RandomFill(vector<int> Arr, int n);
void OutArr(vector<int> Arr);

vector<int> Invert(vector<int> Arr);
vector<int> DeletingMinuses(vector<int> Arr);
vector<int> ReplaceElementsBy5(vector<int> Arr);

vector<int> SelectAction(vector<int> Arr, int choice);


#endif
