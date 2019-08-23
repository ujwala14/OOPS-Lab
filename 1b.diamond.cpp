#include<iostream>
using namespace std;

class A
{
	public:
		int i;
		A()
		{
			cout<<"\nA(): base";
			i=1;
			disp();
		}
		void disp()
		{
			cout<<"\nValue in A: "<<i;
		}
};

class B: virtual public A
{
	public:
		B()
		{
			cout<<"\nB(): virtually inheriting from A";
			i=2;
			disp();
		}
		void disp()
		{
			cout<<"\nValue in B: "<<i;
		}
};

class C: virtual public A
{
	public:
		C()
		{
			cout<<"\nC(): virtually inheriting from A";
			i=3;
			disp();
		}
		void disp()
		{
			cout<<"\nValue in C: "<<i;
		}
};

class D: public B,public C
{
	public:
		D()
		{
			cout<<"\nD(): derived";
			i=4;
		}
		void disp()
		{
			cout<<"\nValue in D: "<<i;
		}
};

int main()
{
	D d;
	d.A::disp();
	d.B::disp();
	d.C::disp();
	d.disp();
}
