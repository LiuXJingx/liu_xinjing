#include <iostream>

using namespace std;

int main()
{
    unsigned int count;
    for(count=1;count<=10;++count)
    {
        cout<<count<<" ";
        if(count==4)count=count+6;
    }
    cout<<"\nBroke out of loop at count="<<count-6<<endl;
}
