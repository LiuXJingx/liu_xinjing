#include <iostream>

using namespace std;

int main()
{
    for(int i=1;i<=5;i++)
    {
        int m=1;
        for(int j=1;j<=i;j++)
        {
            m=m*j;
        }
        cout<<i<<"!="<<m<<endl;
    }
    return 0;
}
