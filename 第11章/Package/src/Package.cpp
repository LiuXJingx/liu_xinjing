#include "Package.h"
#include <iostream>
#include <string>
using namespace std;

Package::Package(const double &w,const double &cpo,string &sn,string &sa,string &sc,string &ss,double &spc,
     string &an,string &aa,string &ac,string &as,double &apc)
    :weight(w),costPerOunce(cpo),
     senderName(sn),senderAddress(sa),senderCity(sc),senderState(ss),senderPostalCode(spc),
     addresseeName(an),addresseeAddress(aa),addresseeCity(ac),addresseeState(as),addresseePostalCode(apc)
{
    calculateCost(w,cpo);
}

Package::~Package()
{
    //dtor
}


double Package::calculateCost(double &w,double &cpo)
{
    cout<<"Enter the weight of your package: "<<endl;
    cin>>w;
    if(w<0||w=0)throw invalid_argument("Weight must be positive!")
    cout<<"Enter the cost per ounce: "<<endl;
    cin>>cpo;
    if(cpo<0||cpo=0)throw invalid_argument("Cost per ounce must be positive!")
    double C=w*cpo;
    return C;
}


        void Package::setSenderName( string &sn)
        {
             senderName=sn;
        }
        string Package::getSenderName()const
        {
            return senderName;
        }
        void Package::setSenderAddress( string &sa)
        {
            senderAddress=sa;
        }
        string Package::getSenderAddress()const;
        {
            return senderAddress;
        }
        void Package::setSenderCity( string  &sc)
        {
            senderCity=sc;
        }
        string Package::getSenderCity()const;
        {
            return senderCity;
        }
        void Package::setSenderState( string &ss)
        {
            senderState=ss;
        }
        string Package::getSenderState()const
        {
            return senderState;
        }

        void Package::setSenderPostalCode( int &spc)
        {
            senderPostalCode=spc;
        }
        string Package::getSenderPostalCode()const
        {
           return senderPostalCode;
        }

        void Package::setAddresseeName( string &an)
        {
            addresseeName=an;
        }
        int Package::getAddresseeName()const
        {
            return addresseeName;
        }

        void Package::setAddresseeAddress( string &aa)
        {
            addresseeAddress=aa;
        }
        string Package::getAddresseeAddress()const
        {
            return addresseeAddress;
        }

        void Package::setAddresseeCity( string &ac)
        {
            addresseeCity=ac;
        }
        string Package::getAddresseeCity()const
        {
            return addresseeCity;
        }

        void Package::setAddresseeState(string &as)
        {
            addresseeState=as;
        }
        string Package::getAddresseeState()const
        {
            return addresseeState;
        }

        void Package::setAddresseePostalCode( int &apc)
        {
            addresseePostalCode=apc;
        }
        int Package::getAddresseePostalCode()const
        {
            return addresseePostalCode;
        }

        void Package::setWeight(double&w)
        {
            weight=w;
        }
        double Package::getWeight()const
        {
            return weight;
        }

        void Package::setcostPerOunce(double &cpo)
        {
            costPerOunce=cpo;
        }
        double Package::getcostPerOunce()const
        {
            return costPerOunce;
        }



