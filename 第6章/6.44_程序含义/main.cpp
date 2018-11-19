#include <iostream>

using namespace std;

int mystery(int,int);

int main()
{
    int x=0;
    int y=0;

    cout << "Enter two integers: " << endl;
    cin>>x>>y;
    cout<<"The result is "<<mystery(x,y)<<endl;
}

int mystery(int a,int b)
{
    if(1==b)
        return a;
    else
        return a+mystery(a,b-1);
}
//函数用递归法计算两数之积！
