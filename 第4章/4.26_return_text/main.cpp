#include <iostream>

using namespace std;

int main()
{
    int a,a1,a2,a3,a4,a5;
    cout << "Enter a 5-digit number: " << endl;
    cin>>a;
    a5=int(a/10000);
    a4=int(a/1000)-a5*10;
    a3=int(a/100)-a5*100-a4*10;
    a2=int(a/10)-a5*1000-a4*100-a3*10;
    a1=a-a5*10000-a4*1000-a3*100-a2*10;
    if(a5==a1&&a4==a2)
    {
        cout<<"The number is a return-text number!";
    }
    else
    {
        cout<<"The number is not a return-text number!";
    }
    return 0;
}
