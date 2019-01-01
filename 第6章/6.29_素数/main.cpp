#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int number(int a)
{
    double s;
    int n=1;
    int i=0;
    while(n<=sqrt(a))
    {
        if(n<=sqrt(a))
        {
            s=a%n;
            if(s==0)
            {
                i++;
            }
        }
    }
    return i;
}

int main()
{
    int i;
    int a;
    cout<<"Enter a number: "<<endl;
    cin>>a;
    i=number(a);
    if(i>1)cout<<a<<"is not a ËØÊý!";
    else cout<<a<<"is a ËØÊý!";
    return 0;
}
