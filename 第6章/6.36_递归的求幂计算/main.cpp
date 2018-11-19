#include <iostream>

using namespace std;

int power(int base,int exponent)
{
    if(exponent>1)
    return base*power(base,exponent-1);
}

int main()
{
    cout<<"Enter base and exponent: ";
    int base,exponent;
    cin>>base>>exponent;
    cout << power(base,exponent) << endl;
    return 0;
}
