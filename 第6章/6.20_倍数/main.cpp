#include <iostream>

using namespace std;

bool multiple(int a,int b)
{
    if(a%b==0)return true;
    else return false;
}

int main()
{
    int a,b;
    while(1)
    {
        cout << "Enter 2 integers: ";
        cin>>a>>b;
        cout<<multiple(a,b)<<endl;
    }
    return 0;
}
