#ifndef MULTIPLE_H
#define MULTIPLE_H
#include <iostream>
using namespace std;
class Multiple
{
    public:
        friend std::ostream &operator<<(std::ostream &,Multiple &);
        friend std::istream &operator>>(std::istream &,Multiple &);
        friend Multiple &operator*(Multiple &,Multiple &);
    private:
        int M00,M01,M02,M10,M11,M12,M20,M21,M22;
};


#endif // MULTIPLE_H
