#include <iostream>

using namespace std;

int main()
{
    int c=0;
    if((c=cin.get())!=EOF())//error: 'EOF' was not declared in this scope_����:��EOF�����������Χ������
    {
        main();
        cout<<c;
    }
}
