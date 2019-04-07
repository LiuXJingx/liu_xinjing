#include <iostream>
#include<iomanip>

using namespace std;

int main()
{
    Package("l","x_j","QD","SD",2,"LXJ","TA","TA","SD","213");
    cout<<fixed()<<setprecision(5);

    cout<<"senderName:"<<Package.getSenderName()<<endl;
    cout<<"senderAddress:"<<Package.getSenderAddress()<<endl;
    cout<<"senderCity:"<<Package.getSenderCity()<<endl;
    cout<<"senderState:"<<Package.getSenderState()<<endl;
    cout<<"senderPostalCode:"<<Package.getSenderPostalCode()<<endl;
    cout<<"addresseeName:"<<Package.addresseeName<<endl;
    cout<<"addresseeAddress:"<<Package.addresseeAddress<<endl;
    cout<<"addresseeCity"<<Package.addresseeCity<<endl;
    cout<<"addresseeState:"<<Package.addresseeState<<endl;
    cout<<"addresseePostalCode:"<<Package.addresseePostalCode<<endl;

    Package.getPingJiCost(2,5,9);
    Package.getExtraCost(3,5,8);
}
