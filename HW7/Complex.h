#ifndef COMPLEX_H_
#define COMPLEX_H_
#include <iostream>
#include <fstream>
#include <vector>
#include <string>

using namespace std;

struct Complex
{
private:

	double re, im;

public:

	Complex();
	Complex(double re, double im);
	~Complex() {};

	void SetReIm(double re, double im);

	Complex operator+(Complex& num);
	Complex operator-(Complex& num);
	Complex operator*(Complex& num);
	Complex operator/(Complex& num);
	friend std::ostream& operator<< (std::ostream& out, const Complex& num);

	double Abs();

};

#endif