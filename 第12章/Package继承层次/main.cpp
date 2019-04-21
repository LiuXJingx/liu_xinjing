#include <iomanip>
#include "Package.h"
#include "TwoDayPackage.h"
#include "OvernightPackage.h"


using namespace std;

int main()
{
    cout<<fixed()<<setprecision(5);

    Package.getPingJiCost(2,5,9);
    Package.getExtraCost(3,5,8);


    Information sender={"lxj","HD","QD","SD",123};
    Information receiver={"LXJ","HD","QD","SD",456};
    Package  p(sender,receiver,10,23);
    cout<<"weight:"<<p.Weight()<<endl;
    cout<<"costPerOunce:"<<p.CostPerOunce<<endl;
    cout<<"Cost:"<<p.calculateCost()<<endl;



    TwoDayPackage t(sender, receiver,98,10,23);
    cout<<"weight:"<<t.Weight()<<endl;
    cout<<"costPerOunce:"<<t.CostPerOunce<<endl;
    cout<<"Cost:"<<t.calculateCost()<<endl;

    OvernightPackage o(sender,receiver,19,98,23);
    cout<<"weight:"<<o.Weight()<<endl;
    cout<<"costPerOunce:"<<o.CostPerOunce<<endl;
    cout<<"Cost:"<<o.calculateCost()<<endl;
    return 0;

}
