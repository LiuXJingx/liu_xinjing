#include <iostream>

using namespace std;

bool iseven(int a)
{
    if(a%2==0)return true;
    else return false;
}

int main()
{
    int a;
    while(1)
    {
        cout << "Enter a integer: ";
        cin>>a;
        cout<<iseven(a)<<endl;
    }
    return 0;
}
