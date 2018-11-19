#include <iostream>

using namespace std;

inline double circleArea(const double R)
{
    return 3.1415926*R*R;
}

int main()
{
    double R;
    cout << "Enter the radius: " ;
    cin>>R;
    cout<<"The Area of circle is: "<<circleArea(R);
    return 0;
}
