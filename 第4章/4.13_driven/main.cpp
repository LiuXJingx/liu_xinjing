#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    float miles1=0,gallons1=0,miles,gallons;
    float MPG1,MPG2;
    cout << "Enter miles driven(or -1 to quit): ";
    cin >> miles;
    while(miles!=-1)
    {
        cout << "Enter gallons used: ";
        cin >> gallons;
        miles1=miles1+miles;
        gallons1=gallons1+gallons;
        MPG1=miles/gallons;
        MPG2=miles1/gallons1;
        cout << "MPG this trip: "<<setprecision(8)<<MPG1<<endl;
        cout << "Total MPG: "<<setprecision(8)<<MPG2<<endl;
        cout << "Enter miles driven(or -1 to quit): ";
        cin >> miles;
    }

    return 0;
}
