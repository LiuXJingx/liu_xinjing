#include <iostream>
#include "Polynomial.h"
using namespace std;

int  main()
{
	Polynomial a,b,c,t,d;
	a.InPolynomial();
	b.InPolynomial();
	cout<<"Enter a polynomial: "<<endl;
	a.OutPolynomial();
	cout<<"Enter another polynomial is:"<<endl;
	b.OutPolynomial();
	cout<<"a+b="<<endl;
	c=a+b;
	c.OutPolynomial();
	cout<<"a-b="<<endl;
	a=t;
	c=a-b;
	c.OutPolynomial();
	cout<<"a*b="<<endl;
	a=t;
	c=a*b;
	c.OutPolynomial();
	cout<<"a+=b:"<<endl;
	t=a;
	a+=b;
	a.OutPolynomial();
	cout<<"a-=b:"<<endl;
	a-=b;
	a.OutPolynomial();
	cout<<"a*=b:"<<endl;
	a*=b;
	a.OutPolynomial();
}
