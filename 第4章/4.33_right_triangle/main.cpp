#include <iostream>

using namespace std;

int main()
{
    double a,b,c;
    cout<<"Enter 3 length: ";
    cin>>a>>b>>c;
    if((a*a+b*b==c*c)||(b*b+c*c==a*a)||(c*c+a*a==b*b))
        cout<<"This 3 length can consist a right triangle!";
    else
        cout<<"This 3 length can not consist a right triangle!";

    return 0;
}
