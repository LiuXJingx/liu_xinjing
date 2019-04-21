#include "OvernightPackage.h"
#include <string>
using namespace std;

OvernightPackage::OvernightPackage( Information &sender,
                                    Information &receiver,
                                    double      weight,
                                    double      costPerOunce,
                                    double      extraCost)
{
    Sender=sender;
    Receiver=receiver;
    setWeight(weight);
    setcostPerOunce(costPerOunce);
    setExtraCost(extraCost)
}

OvernightPackage::~OvernightPackage()
{
    //dtor
}

void OvernightPackage::setcostPerOunce(double costPerOunce)
{
     CostPerOunce=costPerOunce;
}
double OvernightPackage::getcostPerOunce()const
{
     return CostPerOunce;
}

void OvernightPackage::setExtraCost (double extraCost)
{
     ExtraCost=extraCost;
}
double OvernightPackage::getExtraCost()const
{
     return ExtraCost;
}

double OvernightPackage::extraCost(double weight,double costPerOunce,double extraCost)
{
    extraCost=weight*costPerOunce;
    return extraCost;
}

double OvernightPackage::calculateCost(double weight,double costPerOunce,double extraCost)
{
    return weight*costPerOunce+extraCost;
}



