#include<iostream>
using namespace std;

class emp
{
	int eno;
	string name;
	float basic,da,it,net;
	public:
		void read();
		void calc();
		void disp();
};

void emp::read()
{
	cout<<"\nEnter name,eno and basic: ";
	cin>>name>>eno>>basic;
}
void emp::calc()
{
	da=0.52*basic;
	net=da+basic;
	it=0.30*net;
	net=net-it;
}

void emp::disp()
{
	cout<<"\n"<<name<<"\t"<<eno<<"\t"<<basic<<"\t"<<da<<"\t"<<it<<"\t"<<net;
}

int main()
{
	emp *e;
	int n;
	cout<<"\nEnter no. of employees: ";
	cin>>n;
	e=new emp[n];
	
	cout<<"\nEnter details: ";
	for(int i=0;i<n;i++)
	{
		cout<<"\nEmployee "<<i+1<<" : ";
		e[i].read();
	}
	
	cout<<"\nThe employees: ";
	cout<<"\nNAME\tENO\tBASIC\tDA\tIT\tNET";
	for(int i=0;i<n;i++)
	{
		e[i].calc();
		e[i].disp();
	}
}
