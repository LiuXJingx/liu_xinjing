#ifndef MATRIX_H
#define MATRIX_H
#include <iostream>

class Matrix
{
    public:
        friend std::ostream &operator<<(std::ostream &,Matrix &);
        friend std::istream &operator>>(std::istream &,Matrix &);

    private:
        int M00,M01,M02,M10,M11,M12,M20,M21,M22;
};

#endif // MATRIX_H
