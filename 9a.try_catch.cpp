#include<iostream>
using namespace std;

int main()
{
	try
	{
		cout<<"\nOuter try block";
		
		try
		{
			cout<<"\nInner try block 1";
			throw 10;
		}
		catch(char e)
		{
			cout<<"\nInner catch block 1.1: "<<e;
		}
		catch(...)
		{
			cout<<"\nInner catch block 1.2: unknown";
		}
		
		try
		{
			cout<<"\nInner try block 2";
			throw "Some exception";
		}
		catch(const char *e)
		{
			cout<<"\nInner catch block 2: "<<e;
			cout<<"\nRethrowing exception";
			throw;
		}
		
	}
	catch(int e)
	{
		cout<<"\nOuter catch block 1: "<<e;
	}
	catch(const char *e)
	{
		cout<<"\nOuter catch block 2: "<<e;
	}
	
}
