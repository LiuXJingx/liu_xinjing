#ifndef OVERNIGHTPACKAGE_H
#define OVERNIGHTPACKAGE_H
#include <string>
using namespace std;

class OvernightPackage:public Package
{
    public:
        OvernightPackage(Information &sender,
                         Information &receiver,
                         double      weight,
                         double      costPerOunce);
        virtual ~OvernightPackage();

        double calculateCost(double weight,double costPerOunce,double extraCost);


        void setExtraCost (double &extraCost);
        double getExtraCost()const;

    protected:
        double ExtraCost;
};

#endif // OVERNIGHTPACKAGE_H
