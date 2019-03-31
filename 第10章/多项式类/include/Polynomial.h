#ifndef POLYNOMIAL_H
#define POLYNOMIAL_H

#include <iostream>
using namespace std;
class Polynomial
{
public:
	Polynomial();
	Polynomial operator+(const Polynomial&)const;
	Polynomial operator-(const Polynomial&)const;
	Polynomial operator*(const Polynomial&);
	Polynomial& operator+=(const Polynomial&);
	Polynomial& operator-=(const Polynomial&);
	Polynomial& operator*=(const Polynomial&);
	void InPolynomial();
	void OutPolynomial();
	void polynomial(Polynomial&);
private:
	int exponents[10];
	int coefficients[10];
};


#endif // POLYNOMIAL_H
