#include <iostream>
#include <iomanip>
#include <cstdlib>

using namespace std;

int main()
{
    unsigned int Head=0;
    unsigned int Tail=0;
    for(unsigned int roll=1;roll<=100;++roll)
    {
        unsigned int face =1+rand()%2;
        switch(face)
        {
            case 1:
                ++Head;
                break;
            case 2:
                ++Tail;
                break;
        default:
            cout<<"Program should never get here!";
        }
    }
    cout<<"Face"<<setw(12)<<"Frequency"<<endl;
    cout<<setw(3)<<"Head"<<setw(12)<<Head<<endl
        <<setw(3)<<"Tail"<<setw(12)<<Tail<<endl;
    return 0;
}
