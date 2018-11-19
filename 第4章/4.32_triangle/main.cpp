#include <iostream>

using namespace std;

int main()
{
    double a,b,c;
    cout<<"Enter 3 length: ";
    cin>>a>>b>>c;
    if((a+b>c)&&(b+c>a)&&(c+a>b))
        cout<<"This 3 length can consist a triangle!";
    else
        cout<<"This 3 length can not consist a triangle!";

    return 0;
}
