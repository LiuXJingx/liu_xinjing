#include <iostream>
#include <iomanip>
#include <array>

using namespace std;

int main()
{
    //a
    array<array<int,3>,2>t;
    //b,c,d:t有2行3列6个元素；
    //e:第一行：t[0][0];t[0][1];t[0][2];
    //f:第二列：t[0][1];t[1][1];

    //g
    t[0][1]=0;

    //h
    t[0][0]=0;t[0][1]=0;t[0][2]=0;t[1][0]=0;t[1][1]=0;t[1][2]=0;

    //i
    for(size_t row=0;row<t.size();++row)
    {
        for(size_t column=0;column<t[row].size();++column)
            t[row][column]=0;
    }

    //j
    for(int i=0;i<=2;++i)
    {
        for(int j=0;j<=3;++j)
        {
            t[i][j]=0;
        }
    }

    //k
    for(int i=0;i<=2;++i)
    {
        for(int j=0;j<=3;++j)
        {
            cout<<"Enter your number: ";
            cin>>t[i][j];
        }
    }

    //l
    int largest=0;
    for(int i=0;i<=2;++i)
    {
        for(int j=0;j<=3;++j)
        {
            t[i][j]>largest?t[i][j]:largest;
        }
    }

    //m
    for(size_t i=0;i<t[i].size();i++)
        cout<<t[0][i]<<endl;

    //n
    int sum=0;
    for(size_t i=0;i<t[i].size();i++)
        sum=sum+t[i][1];


    //o
    for(int i=0;i<=3;i++)
    cout<<setw(6)<<i<<setw(6);
    for(int i=0;i<=2;++i)
    {
        for(int j=0;j<=3;++j)
        {
            cout<<i<<setw(6)<<t[i][j]<<endl;
        }
    }



    return 0;
}
