#include "Complex.h"

int main()
{
	int n = 0;
	double temp = 0;
	Complex module, maxmodule;
	vector<double> p;
	string str;
	ifstream fin("complex.txt");
	if (!fin.is_open())
	{
		cout << "Opening failed" << endl;
		return 0;
	}
	else
	{
		while (!fin.eof())
		{
			fin >> str;
			p.push_back(stod(str));
		}
		n = p.size() / 2;
		for (int i = 0; i < p.size() - 1; i++)
		{
			module.SetReIm(p[i], p[i + 1]);
			i++;
			if (temp < module.Abs())
			{
				temp = module.Abs();
				maxmodule = module;
			}
		}
	}
	cout << "Number of complex numbers: " << n << endl;
	cout << "A complex number with a maximal module: " << maxmodule << endl;
	fin.close();
}
