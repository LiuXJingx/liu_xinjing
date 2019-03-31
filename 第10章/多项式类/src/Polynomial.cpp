#include "Polynomial.h"
#include <iomanip>
#include<iostream>
using namespace std;

//置零
Polynomial::Polynomial()
{
	for(int i=0;i<10;i++)
	{
		coefficients[i]=0;
		exponents[i]=0;
	}
}

//输出函数
void Polynomial::OutPolynomial()
{
	int start;//输出累加系数
	bool zero=false;
	if(coefficients[0])//常数存在
	{
		cout<<coefficients[0];
		start=1;
		zero=true;
	}
	else
	{
		if(coefficients[1])
		{
			cout<<coefficients[1]<<'x';	//常量上存在，输出指数为1的项
			if((exponents[1]!=0)&&(exponents[1]!=1))
				cout<<'^'<<exponents[1];
			zero=true;
		}
		start=2;
	}
	for(int x=start;x<10;x++)		//输出其他各项
		if(coefficients[x]!=0)
		{
			cout<<setiosflags(ios::showpos)<<coefficients[x]
				<<resetiosflags(ios::showpos)<<'x';
			if((exponents[x]!=0)&&(exponents[x]!=1))
				cout<<'^'<<exponents[x];
			zero=true;
		}
	if(!zero)				//多项式为空
		cout<<'0';
	cout<<endl;
}

Polynomial Polynomial::operator+(const Polynomial& r) const
{
	Polynomial temp;
	bool judge;
	temp.coefficients[0]=coefficients[0]+r.coefficients[0];		//计算常量之和
	for(int s=1;(s<10)&&(r.exponents[s]!=0);s++)
	{
		temp.coefficients[s]=r.coefficients[s];
		temp.exponents[s]=r.exponents[s];
	}
	for(int x=1;x<10;x++)						//计算其他各项之和
	{
		judge=false;
		for(int t=1;(t<10)&&(!judge);t++)
			if(exponents[x]==temp.exponents[t])
			{
				temp.coefficients[t]+=coefficients[x];
				judge=true;
			}
			if(!judge)
			{
			    int s;
				temp.exponents[s]=exponents[x];
				temp.coefficients[s]+=coefficients[x];
				s++;
			}
	}
	return temp;
}

Polynomial &Polynomial::operator+=(const Polynomial &r)
{
	*this=*this+r;
	return *this;
}

Polynomial Polynomial::operator-(const Polynomial &r)const
{
	Polynomial temp;
	bool exponentExists;
	temp.coefficients[0]=coefficients[0]-r.coefficients[0];
	for(int s=1;(s<10)&&(exponents[s]!=0);s++)
	{
		temp.coefficients[s]=coefficients[s];
		temp.exponents[s]=exponents[s];
	}
	for(int x=1;x<10;x++)
	{
		exponentExists=false;
		for(int t=1;(t<10)&&(!exponentExists);t++)
			if(r.exponents[x]==temp.exponents[t])
			{
				temp.coefficients[t]-=r.coefficients[x];
				exponentExists=true;
			}
		if(!exponentExists)
		{
		    int s;
			temp.exponents[s]=r.exponents[x];
			temp.coefficients[s]-=r.coefficients[x];
			s++;
		}
	}
	return temp;
}

Polynomial &Polynomial::operator-=(const Polynomial& r)
{
	*this=*this-r;
	return *this;
}

Polynomial Polynomial::operator*(const Polynomial& r)
{
	Polynomial temp;
	int s=1;
	for(int x=0;(x<10)&&(x==0||coefficients[x]!=0);x++)
		for(int y=0;(y<10)&&(y==0||r.coefficients[y]!=0);y++)
			if(coefficients[x]*r.coefficients[y])
				if((exponents[x]==0)&&(r.exponents[y]==0))
					temp.coefficients[0]+=coefficients[x]*r.coefficients[y];
				else
				{
					temp.coefficients[s]= coefficients[x]*r.coefficients[y];
					temp.exponents[s]=exponents[x]+r.exponents[y];
					s++;
				}
	polynomial(temp);			//合并同类项
	return temp;
}
void Polynomial::polynomial(Polynomial& w)
{
	Polynomial temp=w;
	int exp;
	for(int x=0;x<10;x++)
	{
		w.coefficients[x]=0;
		w.exponents[x]=0;
	}
	for(int x=1;x<10;x++)
	{
		exp=temp.exponents[x];
		for(int y=x+1;y<10;y++)
			if(exp==temp.exponents[y])
			{
				temp.coefficients[x]+=temp.coefficients[y];
				temp.exponents[y]=0;
				temp.coefficients[y]=0;
			}
	}
	w=temp;
}
Polynomial &Polynomial::operator*=(const Polynomial& r)
{
	*this=*this*r;
	return *this;
}
void Polynomial::InPolynomial()//初始函数
{
	bool found=false;
	int number,c,e;
	cout<<"Enter number of polynomial terms:";
	cin>>number;
	for(int n=1;n<=number;n++)
	{
		cout<<"Enter coefficient:";//系数
		cin>>c;
		cout<<"Enter exponent:";//阶数
		cin>>e;
		if(c!=0)
		{
			if(e==0)//初始置零
			{
				coefficients[0]+=c;//常数
				continue;
			}
			for(int a=1;(a<10)&&(coefficients[a]!=0);a++)//找是否阶数相同
				if(e==exponents[a])
				{
					coefficients[a]+=c;
					exponents[a]=e;
					found=true;
				}
			if(!found)//阶数上同 另外储存
			{
			    int a;

0				coefficients[a]+=c;
				exponents[a]=e;
			}
		}
	}
}
