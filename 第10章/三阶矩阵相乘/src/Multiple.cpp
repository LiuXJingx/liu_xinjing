#include "Multiple.h"
#include <iomanip>
#include <string>
using namespace std;

ostream &operator<<(ostream &output,Multiple &matrix)
{
    output<<setw(3)<<matrix.M00<<setw(3)<<matrix.M01<<setw(3)<<matrix.M02<<'\n'
        <<setw(3)<<matrix.M10<<setw(3)<<matrix.M11<<setw(3)<<matrix.M12<<'\n'
        <<setw(3)<<matrix.M20<<setw(3)<<matrix.M21<<setw(3)<<matrix.M22<<'\n'<<endl;
        return output;
}

istream &operator>>(istream &input,Multiple &matrix)
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

Multiple &operator*(Multiple &matrix1,Multiple &matrix2)
{
    Multiple matrix3;
    matrix3.M00=matrix1.M00*matrix2.M00+matrix1.M01*matrix1.M10+matrix1.M02*matrix2.M20;
    matrix3.M01=matrix1.M00*matrix2.M01+matrix1.M01*matrix1.M11+matrix1.M02*matrix2.M21;
    matrix3.M02=matrix1.M00*matrix2.M02+matrix1.M01*matrix1.M12+matrix1.M02*matrix2.M22;
    matrix3.M10=matrix1.M10*matrix2.M00+matrix1.M11*matrix1.M10+matrix1.M12*matrix2.M20;
    matrix3.M10=matrix1.M10*matrix2.M01+matrix1.M11*matrix1.M11+matrix1.M12*matrix2.M21;
    matrix3.M10=matrix1.M10*matrix2.M02+matrix1.M11*matrix1.M12+matrix1.M12*matrix2.M22;
    matrix3.M10=matrix1.M20*matrix2.M00+matrix1.M21*matrix1.M10+matrix1.M22*matrix2.M20;
    matrix3.M10=matrix1.M20*matrix2.M01+matrix1.M21*matrix1.M11+matrix1.M22*matrix2.M21;
    matrix3.M10=matrix1.M20*matrix2.M02+matrix1.M21*matrix1.M12+matrix1.M22*matrix2.M22;
    return matrix3;
}
