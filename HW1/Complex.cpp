#include "Complex.h"

Complex::Complex()
    {
        re = 0;
        im = 0;
    }

Complex::Complex(double re, double im)
    {
        this->re = re;
        this->im = im;
    }

void Complex::SetReIm(double re, double im)
    {
        this->re = re;
        this->im = im;
    }

std::ostream& operator<<(std::ostream& out, const Complex& c) {
	out << c.re;
	if (c.im == 0) out << "+0i";
	else if (c.im > 0) out << "+" << c.im << "i";
	else out << c.im << "i";
	return out;
}

Complex Complex::operator+(Complex& num)
{
	Complex temp;
	temp.re = this->re + num.re;
	temp.im = this->im + num.im;
	return temp;
}

Complex Complex::operator-(Complex& num)
{
	Complex temp;
	temp.re = this->re - num.re;
	temp.im = this->im - num.im;
	return temp;
}

Complex Complex::operator*(Complex& num)
{
	Complex temp;
	temp.re = this->re * num.re;
	temp.im = this->im * num.im;
	return temp;
}

Complex Complex::operator/(Complex& num)
{
	Complex quotient = { re * num.re + im * num.im, im * num.re - re * num.im };
	double divisor = pow(num.re, 2) + pow(num.im, 2);
	Complex temp = { quotient.re / divisor, quotient.im / divisor };
	return temp;
}

double Complex::Abs()
{
	return {sqrt(pow(re, 2) + pow(im, 2))};
}
