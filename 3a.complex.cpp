#include<iostream>
using namespace std;

class complex
{
	float real,img;
	public:
		complex(float r=0.0,float i=0.0)
		{
			real=r;
			img=i;
		}
		void disp();
		friend complex add(complex a,complex b);
		friend complex multi(complex a,complex b);
};

void complex::disp()
{
	cout<<real<<" + "<<img<<" i ";
}

complex add(complex a,complex b)
{
	complex c;
	c.real=a.real+b.real;
	c.img=a.img+b.img;
	return c;
}

complex multi(complex a,complex b)
{
	complex c;
	c.real= (a.real*b.real) - (a.img*b.img);
	c.img= (a.real*b.img) + (a.img*b.real);
	return c;
}

int main()
{
	int r,i;
	cout<<"\nEnter real and img. parts of\nComplex no.1: ";
	cin>>r>>i;
	complex c1(r,i);
	
	cout<<"\nComplex no.2: ";
	cin>>r>>i;
	complex c2(r,i);
	
	complex sum=add(c1,c2);
	complex prod=multi(c1,c2);
	
	cout<<"\nComplex no.1: "; c1.disp();
	cout<<"\nComplex no.2: "; c2.disp();
	cout<<"\nSum: "; sum.disp();
	cout<<"\nProduct: "; prod.disp();
}
