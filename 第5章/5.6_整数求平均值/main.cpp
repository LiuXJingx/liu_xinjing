#include <iostream>

using namespace std;

int main()
{
    int m0=0,m;
    cout << "Enter your numbers: " << endl;
    int i=0;
    for(;m!=9999;)
    {
        cin >>m;
        m0=m0+m;
        i++;
    }
    cout<<"The average is: "<<(m0-9999)/i;
    return 0;
}
