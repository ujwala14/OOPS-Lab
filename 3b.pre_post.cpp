#include<iostream>
using namespace std;

class abc
{
	int num;
	public:
		abc(int n=0): num(n) {}
		abc operator++();		//pre
		abc operator++(int x); 	//post
		void disp();
};

void abc::disp()
{
	cout<<"\tValue: "<<num;
}

abc abc::operator++()
{
	cout<<"\nPre incrementing!!";
	num++;
	return *this;
}

abc abc::operator++(int x)
{
	cout<<"\nPost incrementing!!";
	abc t=*this;
	this->num++;
	return t;
}

int main()
{
	int n;
	cout<<"\nEnter number: ";
	cin>>n;
	abc a1(n);
	
	cout<<"\nPre increment: ";
	cout<<"\nBefore - ";	a1.disp();
	abc a2=++a1;
	cout<<"\nDuring - ";	a2.disp();
	cout<<"\nAfter - ";		a1.disp();
	
	cout<<"\nPost increment: ";
	cout<<"\nBefore - ";	a1.disp();
	abc a3=a1++;
	cout<<"\nDuring - ";	a3.disp();
	cout<<"\nAfter - ";		a1.disp();
}

