#include <iostream>

using namespace std;

int reverseNumber(int a)
{
    int a1,a2,a3,a4,b;
    a4=int(a/1000);
    a3=int(a/100)-a4*10;
    a2=int(a/10)-a4*100-a3*10;
    a1=int(a/1)-a4*1000-a3*100-a2*10;
    b=a4+a3*10+a2*100+a1*1000;
    return b;
}

int main()
{
    int a;
    cout << "Enter a 4-digit number: " << endl;
    cin>>a;
    cout<<reverseNumber(a)<<endl;
    return 0;
}
