#include "Package.h"
#include <iostream>
#include <string>
using namespace std;

Package(Information &sender,
        Information &receiver,
        double       weight,
        double       costPerOunce);
{
    Sender          =sender;
    Receiver        =receiver;
    setWeight(weight);
    setcostPerOunce(costPerOunce);
}
Package::~Package()
{
    //dtor
}


double Package::calculateCost(double weight,double costPerOunce)
{
    if(Weight<0||Weight=0)throw invalid_argument("Weight must be positive!")
    if(CostPerOunce<0||CostPerOunce=0)throw invalid_argument("Cost per ounce must be positive!")
    return Weight*CostPerOunce;
}


void Package::setSender(Information &sender)
{
    Sender=sender;
}

Information Package::getSender()
{
    return Sender;
}


void Package::setWeight(double weight)
{
    Weight=weight;
}
double Package::getWeight()const
{
    return Weight;
}

void Package::setcostPerOunce(double costPerOunce)
{
    CostPerOunce=costPerOunce;
}
double Package::getcostPerOunce()const
{
    return CostPerOunce;
}
