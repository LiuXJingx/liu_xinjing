#include "time.h"
#include<iostream>
using namespace std;

time::time()
{
    //ctor
}
void time::setTime()
{
    cout<<"Enter year,month,day,hour,minute,second in order: "<<endl;
    cin>>y>>m>>d>>h>>m1>>s;
    cout<<"Enter the time you want to add"<<endl;
    cout<<"(year,month,day,hour,minute,second in order): "<<endl;
    cin>>Y>>M>>D>>H>>M1>>S;

    s=s+S;
    if(s>=60)
    {
        s=s-60;
        m1=m1+1;
    }
    m1=m1+M1;
    if(m1>=60)
    {
        m1=m1-60;
        h=h+1;
    }
    h=h+H;
    if(h>=24)
    {
        h=h-24;
        d=d+1;
    }
    d=d+D;

    if(y%4==0)
    {
        if (y%100==0)
        {
            if(y%400==0)
            {
                y0=1;
            }
            else
            {
                y0=0;
            }
        }
        else
        {
            y0=1;
        }
    }
    else
    {
        y0=0;
    }


    if(m==2)
    {
        if(y0==0)
        {
            if(d>28)
            {
                d=d-28;
                m=3;
            }
        }
        else
        {
            if(d>29)
            {
                d=d-29;
                m=3;
            }
        }
    }
    else if(m==1||m==3||m==5||m==7||m==8||m==10||m==12)
    {
        if(d>31)
        {
            d=d-31;
            m=m+1;
        }
    }
    else
    {
        if(d>30)
        {
            d=d-30;
            m=m+1;
        }
    }
    m=m+M;
    if(m>12)
    {
        m=m-12;
        y=y+1;
        y=y+Y;
    }

    cout<<"The time is: "<<y<<"/"<<m<<"/"<<d<<" "<<h<<":"<<m1<<":"<<s<<endl;

}


//2008 1 27 12 56 23
//   0 0  2 11 26 25



