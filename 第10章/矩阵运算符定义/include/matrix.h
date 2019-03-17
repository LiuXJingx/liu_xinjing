#ifndef MATRIX_H
#define MATRIX_H
#include <iostream>
using namespace std;


class matrix
{
    public:
        friend ostream &operator<<(ostream &,const matrix &);
        matrix();
        virtual ~matrix();

        matrix &operator[](int);
        int Row();
        int Col();

    private:
        int row;
        int col;
        double *mat;

};

#endif // MATRIX_H
