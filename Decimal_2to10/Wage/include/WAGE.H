#ifndef WAGE_H
#define WAGE_H
#include <iostream>

using namespace std;

class Wage
{
    public:
        Wage(double);
        void information();
    private:
        double basicWage;
        double salesResult;
        double income;
};

#endif // WAGE_H


