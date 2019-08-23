#include<iostream>
using namespace std;

class A
{
	public:
		A()
		{
			cout<<"\nconstructor A()";
		}
		~A()
		{
			cout<<"\ndestructor ~A()";
		}
};

class B: public A
{
	public:
		B()
		{
			cout<<"\nconstructor B()";
		}
		~B()
		{
			cout<<"\ndestructor ~B()";
		}
};
class C:public B
{
	public:
		C()
		{
			cout<<"\nconstructor C()";
		}
		~C()
		{
			cout<<"\ndestructor ~C()";
		}
};
class A1
{
	public:
		A1()
		{
			cout<<"\nconstructor A1()";
		}
		~A1()
		{
			cout<<"\ndestructor ~A1()";
		}
};
class A2: public A,public A1
{
	public:
		A2()
		{
			cout<<"\nconstructor A2()";
		}
		~A2()
		{
			cout<<"\ndestructor ~A2()";
		}
};
class A3: public A1,public A
{
	public:
		A3()
		{
			cout<<"\nconstructor A3()";
		}
		~A3()
		{
			cout<<"\ndestructor ~A3()";
		}
};

int main()
{
	cout<<"\nMultilevel inheritance: ";
	{	C c;	}
	cout<<"\nMultiple inheritance 1: ";
	{	A2 a2;	}
	cout<<"\nMultiple inheritance 2: ";
	{	A3 a3;	}
}
