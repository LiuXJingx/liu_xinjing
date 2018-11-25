#include <iostream>

using namespace std;

int main()
{
    int h,s1,s2;
    for(int hypotenuse=1;hypotenuse<=500;hypotenuse++)
    {
          for(int side1=1;side1<=hypotenuse;side1++)
        {
            for(int side2=1;side2<=side1;side2++)
            {
                h=hypotenuse*hypotenuse;
                s1=side1*side1;
                s2=side2*side2;
                if(h==s1+s2)
                {
                    cout<<"("<<hypotenuse<<","<<side1<<","<<side2<<")"<<endl;
                }
            }
        }
    }
     return 0;
}
