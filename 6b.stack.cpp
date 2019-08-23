#include<iostream>
using namespace std;

class stack
{
	int a[20],size,top;
	public:
		stack(int n):size(n),top(-1) {}
		void push(int x)
		{
			if(top==size-1)
				throw "Stack full";
			a[++top]=x;
		}
		int pop()
		{
			if(top==-1)
				throw "Stack empty";
			return a[top--];
		}
		void disp()
		{
			cout<<"\nThe stack:\n";
			for(int i=top;i>=0;i--)
				cout<<a[i]<<"\n";
		}
};

int main()
{
	int n;
	cout<<"\nEnter size of stack: ";
	cin>>n;
	stack s(n);
	int ch,x;
	for(;;)
	{
		try
		{
			cout<<"\n1:Push\n2:Pop\n3:Display\n4:Exit";
			cout<<"\nEnter choice: ";
			cin>>ch;
			switch(ch)
			{
				case 1:
					cout<<"\nEnter element: ";
					cin>>x;
					s.push(x);
					break;
				case 2:
					x=s.pop();
					cout<<"\nPopped element: "<<x;
					break;
				case 3:
					s.disp();
					break;
				default:
					return 0;
			}
		}
		catch(const char* e)
		{
			cout<<"\nStack error: "<<e;
		}
	}
}
