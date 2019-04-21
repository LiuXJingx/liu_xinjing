#ifndef PACKAGE_H
#define PACKAGE_H
#include <iostream>
#include <string>
using namespace std;



struct Information
{
    string Name;
    string Address;
    string City;
    string State;
    double postalCode;
};


class Package
{
    public:
        Package(Information &sender,
                Information &receiver,
                double       weight,
                double       costPerOunce);
        virtual ~Package();

        double calculateCost(double weight,double costPerOunce);

        void setSender(Information &sender);
        Information getSender()const;

        void setSender(Information &receiver);
        Information getSender()const;

        void setWeight(double weight);
        double getWeight()const;

        void setcostPerOunce (double costPerOunce);
        double getcostPerOunce()const;

    protected:
        Information Sender;
        Information Receiver;

        double Weight;
        double CostPerOunce;

    private:
};
