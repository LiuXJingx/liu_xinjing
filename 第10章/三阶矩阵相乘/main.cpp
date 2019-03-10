#include <iostream>
#include <string>
#include "Multiple.h"
using namespace std;

int main()
{
    Multiple matrix1;
    Multiple matrix2;
    Multiple matrix4;
    cout<<"Enter a matrix: "<<endl;
    cin>>matrix1;
    cout<<"Enter another matrix: "<<endl;
    cin>>matrix2;
    cout<<"matrix1*matrix2="<<endl;
    matrix4=matrix1*matrix2;
    return 0;
}
