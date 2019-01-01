#include <iostream>
#include <cmath>
#include <iomanip>
#include <array>

using namespace std;

void number(int a)
{
    double s;
    int n=1;
    int m[320];
    int i=0;
    while(n<=sqrt(a))
    {
        if(n<=sqrt(a))
        {
            s=a%n;
            if(s==0)
            {
                m[i]=n;
                i++;
            }
        }
    }

    int sum=0;
    while(i>0)
    {
        sum=sum+m[i];
        if(sum==a)cout<<setw(10)<<a;
        i--;
    }
}

int main()
{
    int a;
    while(a<=1000)
    {
        number(a);
        a--;
    }
    return 0;
}
