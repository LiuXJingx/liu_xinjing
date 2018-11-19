#include <iostream>

using namespace std;

int main()
{
    int N(int n);
    double E(int n);
    int n;
    cout<<"Enter n: ";
    cin>>n;
    cout<<"n!="<<N(n);
    cout<<"e="<<E(n);
    return 0;
}
int N(int n)
{
    int N;

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
        return N;
}

double E(int n)
{
    double a,e;
    int N(int n);
    while(n>=1)
    {
        a=1/N(n);
        e=e+a;
        n--;
        return e;
    }
}
