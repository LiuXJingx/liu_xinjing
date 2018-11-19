#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    cout << "I have a number between 1 and 1000." << endl
    <<"Can you guess my number?"<<endl
    <<"Please type your first guess."<<endl;
    int i,a;
    i=rand()%1000+1;
    cin>>a;
    while(a!=i)
    {

        if(a>i)cout<<"Too high. Try again."<<endl;
        else cout<<"Too low. Try again."<<endl;
        cin>>a;
    }
    cout<<"Excellent! You guessed the number!";
    return 0;
}
