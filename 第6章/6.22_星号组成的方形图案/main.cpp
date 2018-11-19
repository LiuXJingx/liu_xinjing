#include <iostream>

using namespace std;

void star(int a)
{
    int b,c;
    for(b=1;b<=a;b++)
    {
        for(c=1;c<=a;c++)
        {
            cout<<"*";
        }

            cout<<endl;
    }

}
int main()
{
    int a,b,c;
    cout << "Enter a side: ";
    cin>>a;
    star(a);
    return 0;
}
