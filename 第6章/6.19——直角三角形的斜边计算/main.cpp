#include <iostream>
#include <cmath>

using namespace std;

double triangle(double a,double b)
{
    double c;
    c=sqrt(a*a+b*b);
    return c;
}

int main()
{
    double x;double y;
    cout << "Enter 2 lengths: " << endl;
    while(1)
    {
        cin>>x>>y;
        cout<<triangle(x,y)<<endl;
    }
    return 0;
}
