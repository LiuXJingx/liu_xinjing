#include <iostream>

using namespace std;

int main()
{
    long value1,value2;
    long *longPtr;
    *longPtr=value1;
    cout<<*longPtr;
    value2=*longPtr;
    cout<<value2;
    cout<<&value1;
    cout<<longPtr;
}
