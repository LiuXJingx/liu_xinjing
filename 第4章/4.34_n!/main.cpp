#include <iostream>

using namespace std;


int N(int n)
{
   int N=1;
    if(n<0)
        cout<<"Error!";
    else
    {
        if(n<=1)    N=1;
        else
        {
            while(n>0)
            {
                N=n*N;
                n--;
            }
        }
           cout<<"n!="<<N;
    }
    return N;
}

double e(int n)
{
    int N(int n);
    int e=1,e0;
    int a=2;
    cout<<"Enter your wanted setw: ";
    cin>>a;
    while(a>1)
    {
        e0=1/N(a);
        e=e+e0;
        a--;
    }
    return e;
}


int main()
{
    int N(int n);
    double e(int n);
    int n=2;
    cout<<"Enter a nonnegative integer: ";
    cin>>n;
    cout<<e(n)<<e;
}






























