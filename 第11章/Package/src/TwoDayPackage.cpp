#include "TwoDayPackage.h"
using namespace std;

TwoDayPackage::TwoDayPackage(const double &w,const double &cpo,string &sn,string &sa,string &sc,string &ss,double &spc,
     string &an,string &aa,string &ac,string &as,double &apc)
    :weight(w),costPerOunce(cpo),
     senderName(sn),senderAddress(sa),senderCity(sc),senderState(ss),senderPostalCode(spc),
     addresseeName(an),addresseeAddress(aa),addresseeCity(ac),addresseeState(aws),addresseePostalCode(apc),
     pingJiCost(double &w,double &cpo,double &p);
{
    //ctor
}

TwoDayPackage::~TwoDayPackage()
{
    //dtor
}


        void TwoDayPackage::setSenderName( string &sn)
        {
             senderName=sn;
        }
        string TwoDayPackage::getSenderName()const
        {
            return senderName;
        }
        void TwoDayPackage::setSenderAddress( string &sa)
        {
            senderAddress=sa;
        }
        string TwoDayPackage::getSenderAddress()const;
        {
            return senderAddress;
        }
        void TwoDayPackage::setSenderCity( string  &sc)
        {
            senderCity=sc;
        }
        string TwoDayPackage::getSenderCity()const;
        {
            return senderCity;
        }
        void TwoDayPackage::setSenderState( string &ss)
        {
            senderState=ss;
        }
        string TwoDayPackage::getSenderState()const
        {
            return senderState;
        }

        void TwoDayPackage::setSenderPostalCode( int &spc)
        {
            senderPostalCode=spc;
        }
        string TwoDayPackage::getSenderPostalCode()const
        {
           return senderPostalCode;
        }

        void TwoDayPackage::setAddresseeName( string &an)
        {
            addresseeName=an;
        }
        int TwoDayPackage::getAddresseeName()const
        {
            return addresseeName;
        }

        void TwoDayPackage::setAddresseeAddress( string &aa)
        {
            addresseeAddress=aa;
        }
        string TwoDayPackage::getAddresseeAddress()const
        {
            return addresseeAddress;
        }

        void TwoDayPackage::setAddresseeCity( string &ac)
        {
            addresseeCity=ac;
        }
        string TwoDayPackage::getAddresseeCity()const
        {
            return addresseeCity;
        }

        void TwoDayPackage::setAddresseeState(string &as)
        {
            addresseeState=as;
        }
        string TwoDayPackage::getAddresseeState()const
        {
            return addresseeState;
        }

        void TwoDayPackage::setAddresseePostalCode( int &apc)
        {
            addresseePostalCode=apc;
        }
        int TwoDayPackage::getAddresseePostalCode()const
        {
            return addresseePostalCode;
        }

        void TwoDayPackage::setWeight(double&w)
        {
            weight=w;
        }
        double TwoDayPackage::getWeight()const
        {
            return weight;
        }

        void TwoDayPackage::setcostPerOunce(double &cpo)
        {
            costPerOunce=cpo;
        }
        double TwoDayPackage::getcostPerOunce()const
        {
            return costPerOunce;
        }


        void TwoDayPackage::setPingJiCost (double &pjc)
        {
            pingJiCost=pjc;
        }
        double TwoDayPackage::getPingJiCost()const
        {
            return pingJiCost;
        }

double TwoDayPackage::pingJiCost(double &w,double &cpo,double &p)
{
    p=w*cpo;
    return p;
}


