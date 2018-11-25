#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double pi=1,m=-1;
    for(int i=1;i<=1000;i++)
    {
        for (int j=1;j<=i;j++)
            {
                pi=pi+m*(1/(2*j-1));
                m=-m;
            }
        cout<<4*pi<<endl;
    }
    return 0;
}
