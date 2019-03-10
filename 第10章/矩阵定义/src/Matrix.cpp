#include "Matrix.h"
#include <iomanip>
#include <string>
using namespace std;

ostream &operator<<(ostream &output,Matrix &matrix)
{
    output<<setw(3)<<matrix.M00<<setw(3)<<matrix.M01<<setw(3)<<matrix.M02<<'\n'
        <<setw(3)<<matrix.M10<<setw(3)<<matrix.M11<<setw(3)<<matrix.M12<<'\n'
        <<setw(3)<<matrix.M20<<setw(3)<<matrix.M21<<setw(3)<<matrix.M22<<'\n'<<endl;
        return output;
}

istream &operator>>(istream &input,Matrix &matrix)
{
    input>>setw(2)>>matrix.M00;
    input>>setw(2)>>matrix.M01;
    input>>setw(2)>>matrix.M02;
    input>>setw(2)>>matrix.M10;
    input>>setw(2)>>matrix.M11;
    input>>setw(2)>>matrix.M12;
    input>>setw(2)>>matrix.M20;
    input>>setw(2)>>matrix.M21;
    input>>setw(2)>>matrix.M22;
    return input;//dtor
}
