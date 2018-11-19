#include <iostream>

using namespace std;

int main()
{
    int c=0;
    if((c=cin.get())!=EOF())//error: 'EOF' was not declared in this scope_错误:“EOF”不是这个范围中声明
    {
        main();
        cout<<c;
    }
}
