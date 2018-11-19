#include <iostream>
#include <string>

using namespace std;

void star(int a,string m)
{
    int b,c;
    for(b=1;b<=a;b++)
    {
        for(c=1;c<=a;c++)
        {
            cout<<m;
        }

            cout<<endl;
    }

}
int main()
{
    int a,b,c;
    string m;
    cout << "Enter side and fillCharacter: ";
    cin>>a>>m;
    star(a,m);
    return 0;
}
