#ifndef PACKAGE_H
#define PACKAGE_H
#include <iostream>
#include <string>
using namespace std;

class Package
{
    public:
        Package(double& ,double &);
        virtual ~Package();

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

        void setcostPerOunce (double&);
        double getcostPerOunce()const;
    protected:

        string senderName;
        string senderAddress;
        string senderCity;
        string senderState;
        int senderPostalC ode;
        string addresseeName;
        string addresseeAddress;
        string addresseeCity;
        string addresseeState;
        int addresseePostalCode;

        double weight;
        double costPerOunce;

    private:
};

#endif // PACKAGE_H
