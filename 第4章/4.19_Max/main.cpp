#include <iostream>
using namespace std;

int main()
{
    int a=0,number[10],largest=0,largest1=0;

    while(a<=9)
    {
        cin>>number[a];
        if(number[a]>largest)
            largest=number[a];
            a++;
        }
    a=0;

    while(a<=9)
    {
        if(number[a]!=largest)
        {
            if(number[a]>largest1)
            largest1=number[a];
        }
        a++;
    }
    cout<<largest<<"   "<<largest1<<endl;

    return 0;
}
