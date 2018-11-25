#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    cout<<"(a)"<<endl;
    for (int i=1;i<=10;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }

    cout<<endl<<endl;


    cout<<"(b)"<<endl;
    for(int k=1;k<=10;k++)
    {
        for(int l=0;l<=10-k;l++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    cout<<endl<<endl;


    cout<<"(c)"<<endl;
    for(int k=1;k<=10;k++)
    {
        for(int l=10;l>10-k;l--)
            cout<<" ";
        for(int m=10;m>=k;m--)
            cout<<"*";
        cout<<endl;
    }
    cout<<endl<<endl;

    cout<<"(d)"<<endl;
    for (int i=1;i<=11;i++)
    {
        for(int j=1;j<=11-i;j++)
            cout<<" ";
        for(int k=1;k<i;k++)
            cout<<"*";
        cout<<endl;
    }

    cout<<endl<<endl;



}
