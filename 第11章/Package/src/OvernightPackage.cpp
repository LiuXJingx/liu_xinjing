#include "OvernightPackage.h"
#include <string>
using namespace std;

OvernightPackage::OvernightPackage(const double &w,const double &cpo,string &sn,string &sa,string &sc,string &ss,double &spc,
     string &an,string &aa,string &ac,string &as,double &apc)
    :weight(w),costPerOunce(cpo),
     senderName(sn),senderAddress(sa),senderCity(sc),senderState(ss),senderPostalCode(spc),
     addresseeName(an),addresseeAddress(aa),addresseeCity(ac),addresseeState(as),addresseePostalCode(apc),
     extraCost(double &w,double &cpo,double &e);
{
    //ctor
}

OvernightPackage::~OvernightPackage()
{
    //dtor
}


        void OvernightPackage::setSenderName( string &sn)
        {
             senderName=sn;
        }
        string OvernightPackage::getSenderName()const
        {
            return senderName;
        }
        void OvernightPackage::setSenderAddress( string &sa)
        {
            senderAddress=sa;
        }
        string OvernightPackage::getSenderAddress()const;
        {
            return senderAddress;
        }
        void OvernightPackage::setSenderCity( string  &sc)
        {
            senderCity=sc;
        }
        string OvernightPackage::getSenderCity()const;
        {
            return senderCity;
        }
        void OvernightPackage::setSenderState( string &ss)
        {
            senderState=ss;
        }
        string OvernightPackage::getSenderState()const
        {
            return senderState;
        }

        void OvernightPackage::setSenderPostalCode( int &spc)
        {
            senderPostalCode=spc;
        }
        string OvernightPackage::getSenderPostalCode()const
        {
           return senderPostalCode;
        }

        void OvernightPackage::setAddresseeName( string &an)
        {
            addresseeName=an;
        }
        int OvernightPackage::getAddresseeName()const
        {
            return addresseeName;
        }

        void OvernightPackage::setAddresseeAddress( string &aa)
        {
            addresseeAddress=aa;
        }
        string OvernightPackage::getAddresseeAddress()const
        {
            return addresseeAddress;
        }

        void OvernightPackage::setAddresseeCity( string &ac)
        {
            addresseeCity=ac;
        }
        string OvernightPackage::getAddresseeCity()const
        {
            return addresseeCity;
        }

        void OvernightPackage::setAddresseeState(string &as)
        {
            addresseeState=as;
        }
        string OvernightPackage::getAddresseeState()const
        {
            return addresseeState;
        }

        void OvernightPackage::setAddresseePostalCode( int &apc)
        {
            addresseePostalCode=apc;
        }
        int OvernightPackage::getAddresseePostalCode()const
        {
            return addresseePostalCode;
        }

        void OvernightPackage::setWeight(double&w)
        {
            weight=w;
        }
        double OvernightPackage::getWeight()const
        {
            return weight;
        }

        void OvernightPackage::setcostPerOunce(double &cpo)
        {
            costPerOunce=cpo;
        }
        double OvernightPackage::getcostPerOunce()const
        {
            return costPerOunce;
        }

        void OvernightPackage::setExtraCost (double &ec)
        {
            extraCost=ec;
        }
        double OvernightPackage::getExtraCost()const
        {
            return extraCost;
        }

double OvernightPackage::extraCost(double &w,double &cpo,double &e)
{
    e=w*cpo;
    return e;
}
