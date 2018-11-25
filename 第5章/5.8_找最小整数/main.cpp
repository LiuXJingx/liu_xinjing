#include <iostream>

using namespace std;

int main()
{
    int n;
    int m;
    cout <<"How many numbers do you want to enter ? "<<endl;
    cin >>n;
    cout << "Enter your numbers: " << endl;
    int i,c;
    cin>>m;
    for(i=1;i<n;i++)
    {
        c=m<c?m:c;
        cin >>m;
    }
    cout<<"The min is: "<<c;
    return 0;
}
