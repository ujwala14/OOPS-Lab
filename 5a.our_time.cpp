#include<iostream>
#include<iomanip>
using namespace std;

class TIME
{
	int hr,min,sec;
	public:
		TIME():hr(0),min(0),sec(0) {}
		TIME(int h,int m,int s):
			hr(h),min(m),sec(s) {}
		void add(TIME t1,TIME t2);
		void disp();
};

void TIME::add(TIME t1,TIME t2)
{
	hr = t1.hr + t2.hr;
	min= t1.min + t2.min;
	sec= t1.sec + t2.sec;
	if(sec>=60)
	{
		sec-=60;
		min++;
	}
	if(min>=60)
	{
		min-=60;
		hr++;
	}
}

void TIME::disp()
{
	cout<<"\t"<<setw(2)<<setfill('0')<<hr<<" : "<<setw(2)<<setfill('0')<<min<<" : ";
	cout<<setw(2)<<setfill('0')<<sec;
}

int main()
{
	int h,m,s;
	
	cout<<"\nEnter hr,min & sec:\nTime 1: ";
	cin>>h>>m>>s;
	TIME a(h,m,s);
	
	cout<<"\nTime 2: ";
	cin>>h>>m>>s;
	TIME b(h,m,s);
	
	TIME c;
	c.add(a,b);
	
	cout<<"\nTime 1 : ";
	a.disp();
	cout<<"\nTime 2 : ";
	b.disp();
	cout<<"\nAddition: ";
	c.disp();
}
