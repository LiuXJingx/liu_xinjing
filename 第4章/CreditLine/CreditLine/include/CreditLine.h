#ifndef CREDITLINE_H
#define CREDITLINE_H


class CreditLine
{
    public:
        CreditLine(double);
        void userInformation();

    private:
        int accountNumber;
        double initialBalance;
        double outAmount;
        double inAmount;
        double endbalance;
        double allowedAmount;
};

#endif // CREDITLINE_H
