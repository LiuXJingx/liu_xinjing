#include <iostream>

using namespace std;

double tripleByValue(double count)
{
    double count3;
    count3=count*3;
    return count3;
}

double tripleByReference(double count)
{
    double &b=count;
    b=b*3;
    return count;
}

int main()
{
    double a;
    cout<<"Enter a number: ";
    cin>>a;
    cout << "tripleByValue_count="<<tripleByValue(a) << endl;
    cout << "tripleByReference_count="<<tripleByReference(a) << endl;
    return 0;
}
