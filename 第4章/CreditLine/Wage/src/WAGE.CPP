#include "Wage.h"
#include<iostream>
using namespace std;

Wage::Wage(double wage)
    :basicWage(wage)
{
    //ctor
}

void Wage::information()
{
    while(basicWage!=-1)
    {
        cout<<"Please input your BasicWage(or enter -1 to quit): "<<endl;
        cin>>basicWage;
        cout<<"Please input your salesResult: "<<endl;
        cin>>salesResult;
        income=basicWage+salesResult*0.09;
        cout<<"Your income is: "<<income<<endl;
    }
}
