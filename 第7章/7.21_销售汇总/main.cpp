#include <iostream>
#include <iomanip>
#include <array>

using namespace std;

int main()
{
    array<array<int,7>,5>sales;
    for(size_t i=0;i<sales.size();++i)
    {
        cout<<"Enter the information: "<<endl;
        int m;
        for(size_t j=0;j<sales[i].size()-1;++j)
        {
            cin>>sales[i][j];
            m=j;
        }
        sales[i][6]=0;
        for(size_t i=1;i<sales.size()-1;++i)
        {
            for(size_t j=0;j<sales[i].size()-1;++j)
            {
                sales[i][6]=sales[i][j]+sales[i][6];
            }
        }
    }

    for(size_t i=0;i<sales.size();++i)
    {
        for(size_t j=0;j<sales[i].size();++j)
        {
            cout<<sales[i][j];
        }
    }
    return 0;
}





















