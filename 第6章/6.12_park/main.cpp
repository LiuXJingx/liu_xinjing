#include <iostream>
#include <iomanip>

using namespace std;

float calculateCharges(float hours)
{
    float charge;
    if(hours<=3)charge=2;
    else if(hours>3&&hours<=16)charge=2+hours*0.5;
    else if(hours>16&&hours<=24)charge=10;
    return charge;
}


int main()
{
    int i=1;
    float calculateCharges(float hours);
    float hours;
    float charge;
    float hours1=0,charge1=0;
    cout<<setiosflags(ios::right)<<"Car"<<setw(12)<<"Hours"<<setw(12)<<"Charge";
    while(i<=3)
    {
        cout<<endl<<setiosflags(ios::right)<<i<<setw(12);
        cin>>hours;cout<<setw(12);
        charge=calculateCharges(hours);
        cout<<setiosflags(ios::right)<<charge<<endl;
        hours1=hours1+hours;
        charge1=charge1+charge;
        i++;
    }
    cout<<"Total"<<setw(12)<<hours1<<setw(12)<<charge1;
    return 0;
}
