#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int hours;
    float rate,Salary;
    cout << "Enter hours worked (or -1 to quit): " ;
    cin >> hours;
    while(hours!=-1)
    {
        cout << "Enter hourly rate of the employee($00.00): ";
        cin >> rate;
        if(hours<=40)Salary=hours*rate;
        else {Salary=400+(hours-40)*rate*1.5;}
        cout << "Salary is $"<<setprecision(4)<<Salary<<endl;
        cout << "Enter hours worked (or -1 to quit): " ;
        cin >> hours;
    }
    return 0;
}
