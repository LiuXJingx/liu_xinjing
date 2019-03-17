#include "matrix.h"
#include <iostream>
#include <iomanip>
using namespace std;

ostream &operator<<(ostream &,const matrix &Mat)
{
    matrix::operator[]();
    for(int i=0;i<matrix::row;i+=i*matrix::col)
        output<<Mat.mat;
}

matrix::Row()
{
    return row;
}

matrix::Col()
{
    return col;
}

double matrix::operator[]()
{
    cout<<"How many rows does the matrix have?"<<endl;
    cin>>row;
    cout<<"How many cols does the matrix have?"<<endl;
    cin>>col;
    cout<<"Enter your number of a matrix: "<<endl;
    matrix &Mat;
    for(int i=0;i<matrix::row;i+=i*col)
        cin>>Mat.mat;
    return Mat.mat;
}
