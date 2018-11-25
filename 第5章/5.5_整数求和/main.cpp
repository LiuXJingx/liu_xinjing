#include <iostream>

using namespace std;

int main()
{
    int n;
    int m=0,m0;
    cout <<"How many numbers do you want to enter ? "<<endl;
    cin >>n;
    cout << "Enter your numbers: " << endl;
    int i;
    for(i=1;i<=n;i++)
    {
        cin >>m0;
        m=m+m0;
    }
    cout<<"The sum is: "<<m;
    return 0;
}
