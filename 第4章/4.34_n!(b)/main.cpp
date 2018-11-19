#include <iostream>

using namespace std;

int main()
{

    int N=1;
    int n;
    double a,e=1;
    cout<<"Enter n: ";
    cin>>n;
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
                a=1/N;
                e=e+a;
                n--;
            }
        }
    }

    cout<<"n!="<<N<<endl;
    cout<<"e="<<e;
    return 0;
}
