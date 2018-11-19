#include <iostream>
#include <cmath>

using namespace std;

double distance(double x1,double x2,double y1,double y2)
{
    double distance;
    distance=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
    return distance;
}

int main()
{
    double x1,x2,y1,y2;
    cout<<"Enter (x1,y1),(x2,y2): "<<endl;
    cin>>x1>>y1>>x2>>y2;
    cout<<distance(x1,x2,y1,y2);
    return 0;
}
