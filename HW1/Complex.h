#ifndef COMPLEX_H_
#define COMPLEX_H_
#include <iostream>
#include <fstream>
#include <vector>
#include <string>

struct Complex 
{
private:

	double re, im;

public:

	Complex()
	{
		re = 0;
		im = 0;
	}
	Complex(double re, double im)
	{
		this->re = re;
		this->im = im;
	}

	void SetReIm(double re, double im)
	{
		this->re = re;
		this->im = im;
	}

	Complex operator+(Complex& num);
	Complex operator-(Complex& num);
	Complex operator*(Complex& num);
	Complex operator/(Complex& num);
	friend std::ostream& operator<< (std::ostream& out, const Complex& num);

	double Abs();

};

#endif
