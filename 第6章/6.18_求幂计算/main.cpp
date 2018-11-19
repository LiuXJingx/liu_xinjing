#include <iostream>

using namespace std;

int integerPower(int base,int exponent)
{
    int x=1;
    while(exponent>0)
    {
        x=x*base;
        exponent--;
    }
    return x;
}

int main()
{
    int base, exponent;
    cout<<"Enter base,exponent: ";
    cin>>base>>exponent;
    cout <<"integerPower("<<base<<","<<exponent<<")="<< integerPower(base,exponent) << endl;
    return 0;
}
