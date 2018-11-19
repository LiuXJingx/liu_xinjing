#include <iostream>
#include <iomanip>
using namespace std;

int fahrenheit(int c)
{
    int f;
    f=c*9/5+32;
    return f;
}
int celsius(int f1)
{
    int c1;
    c1=(f1-32)*5/9;
    return c1;
}


int main()
{
    cout << "Celsius to Fahrenheit: " << endl;
    int c=0;
    int f1=32;

    while(c<=100)
    {
        cout<<setw(10)<<c<<setw(10)<<fahrenheit(c);
        c++;
    }
    cout <<endl<<endl<< "Fahrenheit to Celsius: " << endl;
    while(f1<=212)
    {
        cout<<setw(10)<<f1<<setw(10)<<celsius(f1);
        f1++;
    }
    return 0;
}
