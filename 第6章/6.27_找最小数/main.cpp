#include <iostream>

using namespace std;

double smallest(double a,double b,double c)
{
    a=a<b?a:b;
    c=a<c?a:c;
    return c;
}

int main()
{
    double a,b,c;
    cout << "Enter 3 numbers: " << endl;
    cin>>a>>b>>c;
    cout<<smallest(a,b,c)<<endl;
    return 0;
}
