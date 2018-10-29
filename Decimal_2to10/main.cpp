#include <iostream>

using namespace std;

int main()
{
    int a=0;
    int h=0;
    int m=0;
    int i=1;
    cout<<"Please input a number: ";
    cin>>a;
    while(a!=0)
    {
        m=a%10;
        h=h+m*i;
        a=(a-m)/10;
        i=i*2;
    }
    cout<<"The decimal form is: "<<h<<endl;
    return 0;
}
