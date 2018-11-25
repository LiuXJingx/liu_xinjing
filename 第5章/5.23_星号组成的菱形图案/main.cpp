#include <iostream>
using namespace std;

int main()
{
    for(int i=1;i<=11;i++)
    {
        if(i<=6)
        {
            for(int j=1;j<=6-i;j++)
                cout<<" ";
            for(int k=1;k<=2*i-1;k++)
                cout<<"*";
            cout<<endl;
        }

        else
        {
            for(int j=1;j<=i-6;j++)
                cout<<" ";
            for(int k=1;k<=23-2*i;k++)
                cout<<"*";
            cout<<endl;
        }
    }
}
