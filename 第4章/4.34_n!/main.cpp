#include <iostream>

using namespace std;


int N(int n)
{
   int n,N=1;
    cout<<"Enter a nonnegative integer: ";
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
    return N;
}

double e()
{
    int N();
    int e;
    e=
}
































int main()
{

}
