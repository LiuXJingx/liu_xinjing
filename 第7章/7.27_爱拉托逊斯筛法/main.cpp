#include <iostream>
#include <iomanip>
#include <array>

using namespace std;
int main()
{
    array<int,1000>Eratosthenes;
    for(size_t i=1;i<Eratosthenes.size();i++)
    {
        Eratosthenes[i]=1;
    }
    for(int t=1;t<=1000;t++)
    {

    for(size_t i=2;i<Eratosthenes.size();i++)
    {
        if(t%i==0)
        {
            Eratosthenes[i]=0;
            while(t=i)break;
        }
    }

    }

    for(size_t i=1;i<Eratosthenes.size();i++)
    {
        if(Eratosthenes[i]!=0)
            cout<<i<<'\t';
    }
    return 0;
}


