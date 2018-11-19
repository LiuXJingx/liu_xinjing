#include <iostream>
#include <cmath>
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
        {return a;}
    else if(a==0||b==0)
        {return 0;}
    else if((a<0&&b>0)||(a>0&&b<0))
    {
        a=fabs(a);b=fabs(b);
        return -(a+mystery(a,b-1));
    }

    else if((a>0&&b>0)||(a<0&&b<0))
    {
        a=fabs(a);b=fabs(b);
        return a+mystery(a,b-1);
    }
}
