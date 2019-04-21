#ifndef TWODAYPACKAGE_H
#define TWODAYPACKAGE_H
#include <string>
using namespace std;

class TwoDayPackage:public Package
{
public:
    TwoDayPackage(Information &sender,
                  Information &receiver,
                  double      weight,
                  double      costPerOunce,
                  double      pingjiCost);

    double calculateCost(double weight,double costPerOunce,double pingjiCost);

    void setPingjiCost(double pingjiCost);
    double getPingjiCost()const;

protected:
    double PingjiCost;

private:


};

#endif
