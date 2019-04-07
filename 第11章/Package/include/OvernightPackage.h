#ifndef OVERNIGHTPACKAGE_H
#define OVERNIGHTPACKAGE_H
#include <string>
using namespace std;

class OvernightPackage:public Package
{
    public:
        OvernightPackage(double &,double &,double &);
        virtual ~OvernightPackage();

        double calculateCost(double,double);

        void setSenderName( string&);
        string getSenderName()const;

        void setSenderAddress( string&);
        string getSenderAddress()const;

        void setSenderCity( string&);
        string getSenderCity()const;

        void setSenderState( string&);
        string getSenderState()const;

        void setSenderPostalCode( int&);
        string getSenderPostalCode()const;

        void setAddresseeName( string&);
        int getAddresseeName()const;

        void setAddresseeAddress( string&);
        string getAddresseeAddress()const;

        void setAddresseeCity( string&);
        string getAddresseeCity()const;

        void setAddresseeState( string&);
        string getAddresseeState()const;

        void setAddresseePostalCode( int&);
        int getAddresseePostalCode()const;

        void setWeight(double&);
        double getWeight()const;

        void setcostPerOunce (double&);
        double getcostPerOunce()const;

        void setExtraCost (double&);
        double getExtraCost()const;

    protected:
        double extraCost;
};

#endif // OVERNIGHTPACKAGE_H
