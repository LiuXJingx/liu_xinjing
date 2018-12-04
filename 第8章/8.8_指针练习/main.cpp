#include <iostream>
#include <array>

using namespace std;

int main()
{
    //a
    array<unsigned int,5>values={2,4,6,8,10};
    const int SIZE=5;
    //b
    unsigned int b;
    unsigned int *vPtr=&b;
    //c
    for(size_t i=0;i<values.size();++i)
    {
        cout<<values[i]<<endl;
    }
    //d
    int *vPtr=&values;
    int *vPtr=1002500;
    //e
    for(size_t i=0;i<values.size();++i)
    {
        cout<<*(vPtr+2)<<'\t';
    }

    //f

    for(size_t i=0;i<values.size();++i)
    {
        cout<<*(values+i*1)<<'\t';
    }

    //g
    for(size_t i=0;i<values.size();++i)
    {
        cout<<*(values+1)<<'\n';
    }
    //h
    cout<<*(values+5)<<endl;
    cout<<*(values[4])<<endl;
    //i
    //第三个元素的初始地址，6
    //j values[2],6


}

