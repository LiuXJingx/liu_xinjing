#include <iostream>

using namespace std;

int main()
{
    int N=1;
    int n;
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
                n--;
            }
        }
           cout<<"n!="<<N;
    }
    return 0;
}
