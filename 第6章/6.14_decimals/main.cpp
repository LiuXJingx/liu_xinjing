#include <iostream>
#include <cmath>

using namespace std;

int roundToInteger(float x)
{
    int y;
    y=floor(x+0.5);
    return y;
}

float roundToTenths(float x)
{
    float y;
    y=floor(x*10+0.5)/10;
    return y;
}

float roundToHundredths(float x)
{
    float y;
    y=floor(x*100+0.5)/100;
    return y;
}

float roundToThousandths(float x)
{
    float y;
    y=floor(x*1000+0.5)/1000;
    return y;
}

int main()
{
    float x;
    cout << "Enter a number: " << endl;
    cin>>x;
    cout<<endl;
    cout<<roundToInteger(x)<<"\n"
    <<roundToTenths(x)<<"\n"
    <<roundToHundredths(x)<<"\n"
    <<roundToThousandths(x)<<endl;
    return 0;
}
