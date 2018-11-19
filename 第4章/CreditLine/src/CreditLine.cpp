#include "CreditLine.h"
#include <iostream>

using namespace std;

CreditLine::CreditLine(double amount)
    :endbalance(amount)
{
    //ctor
}

void CreditLine::userInformation()
{
    while(accountNumber!=-1)
    {
        cout<<"Enter account number(or -1 to quit): "<<endl;
        cin>>accountNumber;
        cout<<"Enter beginning balance: "<<endl;
        cin>>initialBalance;
        cout<<"Enter total charges: "<<endl;
        cin>>outAmount;
        cout<<"Enter total credits: "<<endl;
        cin>>inAmount;
        endbalance=-initialBalance-outAmount+inAmount;
        endbalance=-endbalance;
        cout<<"Enter credit limits: "<<endl;
        cin>>allowedAmount;


        cout<<"Account:      "<<accountNumber<<endl;
        cout<<"Credit limit: "<<allowedAmount<<endl;
        cout<<"Balance:      "<<endbalance<<endl;
        if(allowedAmount>endbalance)
        {
            cout<<"Credit Limit Exceeded."<<endl;
        }
        else
        {
            cout<<"New balance is: "<<endbalance<<"!"<<endl<<endl;
        }
    }
}






















