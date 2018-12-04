#include <iostream>
#include <array>
#include <iomanip>

using namespace std;

int main()
{
    array<int,10>count={0,0,0,0,0,0,0,0,0,0};
    array<int,15>bonus={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    for(size_t i=0;i<bonus.size();++i)
        bonus[i]=bonus[i]+1;

    array<double,12>monthlyTemperatures;
    for(size_t i=0;i<monthlyTemperatures.size();++i)
    {
        cin>>monthlyTemperatures[i];
    }

    array<int,5>bestScores;
    for(size_t i=0;i<bestScores.size();++i)
        cout<<bestScores[i];

    return 0;
}
