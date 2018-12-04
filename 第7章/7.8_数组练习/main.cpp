#include <iostream>
#include <iomanip>
#include <array>

using namespace std;

int main()
{
    //(a)
    array <int,7>alphabet;
    for(size_t i=0;i<alphabet.size();++i)
        alphabet[i]=0;
        cout<<alphabet[6]<<endl<<endl;


    //(b)
    array <float,5>grades;
    for(size_t i=0;i<grades.size();++i)
        grades[i]=0;
    cout<<"Enter a number to grades 4: ";
    cin>>grades[4];
    cout<<grades[4]<<endl<<endl;

    //(c)

    array <int,5>values;
    for(size_t i=0;i<values.size();++i)
        values[i]=8;
    for(size_t i=0;i<values.size();++i)
        cout<<values[i]<<endl;
        cout<<endl<<endl;

    //(d)

    array <float,100>temperatures;
    for(size_t i=0;i<temperatures.size();++i)
        temperatures[i]=10;
    float T=0;
    for(size_t i=0;i<temperatures.size();++i)
        T=T+temperatures[i];
    cout<<T<<endl<<endl;

    array <double,11>a;
        for(size_t i=0;i<a.size();++i)
            a[i]=6;
    array <double,34>b;
        for(size_t i=0;i<b.size();++i)
            b[i]=7;

    for(size_t i=0;i<a.size();++i)
        b[i]=a[i];
    for(size_t i=0;i<b.size();++i)
    cout<<b[i];

    //(f)
    array <float,99>w;
    float largest=0;
    float smallest=100;
    for(size_t i=0;i<w.size;++i)
        largest=w[i]>largest?w[i]:largest;
    for(size_t i=0;i<w.size;++i)
        smallest=w[i]<smallest?w[i]:smallest;
    cout<<"The largest number is: "<<largest<<endl;
    cout<<"The smallest number is: "<<smallest<<endl;


    return 0;
}
