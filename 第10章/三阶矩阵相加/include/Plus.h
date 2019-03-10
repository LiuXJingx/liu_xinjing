#ifndef PLUS_H
#define PLUS_H
#include <iostream>

class Plus
{
    public:
        friend std::ostream &operator<<(std::ostream &,Plus &);
        friend std::istream &operator>>(std::istream &,Plus &);
        friend Plus &operator+(Plus &,Plus &);
    private:
        int M00,M01,M02,M10,M11,M12,M20,M21,M22;
};

#endif  // PLUS_H
