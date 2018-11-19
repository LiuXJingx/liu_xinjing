#include <iostream>

using namespace std;

int main()
{
    int i,a=1;
    cout <<"Enter the number you wanted: ";
    cin>>i;
    int F=0,F1=1;
    while(a<=i)
    {
        F=F+F1;
        a++;
        if(a<i-1)
        {F1=F1+F;}
        a++;
    }
    cout <<"fibonacci("<<i<<")"<<"="<<F;
    return 0;
}
