#include "TwoDayPackage.h"
using namespace std;

TwoDayPackage::TwoDayPackage(Information &sender,
                             Information &receiver,
                             double      weight,
                             double      costPerOunce,
                             double      pingjiCost)
{
    Sender=sender;
    Receiver=receiver;
    setWeight(weight);
    setcostPerOunce(costPerOunce);
    setPingJiCost(pingJiCost);
}


TwoDayPackage::~TwoDayPackage()
{
    //dtor
}



void TwoDayPackage::setPingJiCost (double pingJiCost)
{
    PingjiCost=pingJiCost;
}
double TwoDayPackage::getPingJiCost()const
{
    return PingjiCost;
}

double TwoDayPackage::pingJiCost(double weight,double costPerOunce,double pingjiCost)
{
    pingjiCost=weight*costPerOunce;
    return pingjiCost;
}

double TwoDayPackage::calculateCost(double weight,double costPerOunce,double pingjiCost)
{
    return weight*costPerOunce+pingjiCost;
}
