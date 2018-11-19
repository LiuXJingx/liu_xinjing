#include <iostream>
#include <cstdlib>

using namespace std;

float cube(float);
float cube(float number)
{
    return number*number*number;
}
float y=123.45678;
float x;

x=y;
cout<<static_cast<float>(x)<<endl;
double square(double number)
{
    number=0;
    return number*number;
}
int sum(int n)
{
    if(0==n)
        return 0;
    else
        return n+sum(n);
}







