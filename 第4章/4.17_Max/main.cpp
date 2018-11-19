#include <iostream>

using namespace std;

int main()
{
    int counter=1;
    float number,largest=0;
    cout<<"Enter 10 numbers: "<<endl;
    while(counter<=10)
    {
        cin>>number;
        if(number>largest)largest=number;
        counter++;
    }
    cout<<"The largest number is: "<<largest;
    return 0;
}
