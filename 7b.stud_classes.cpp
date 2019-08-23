#include<iostream>
using namespace std;

class student
{
	string name;
	public:
		virtual void process()=0;
		virtual void read()
		{
			cout<<"\nEnter name: ";
			cin>>name;
		}
		virtual void disp()
		{
			cout<<"\n"<<name;
		}
		
};

class engg:public student
{
	string col;int sem;
	public:
		void process()
		{
			cout<<"\nIt's a engg. student";
			read();
		}
		void read()
		{
			student::read();
			cout<<"\nEnter col & sem: ";
			cin>>col>>sem;
		}
		void disp()
		{
			student::disp();
			cout<<"\t"<<col<<"\t"<<sem;
		}
};
class sci:public student
{
	string col;int sem;
	public:
		void process()
		{
			cout<<"\nIt's a sci. student";
			read();
		}
		void read()
		{
			student::read();
			cout<<"\nEnter col & sem: ";
			cin>>col>>sem;
		}
		void disp()
		{
			student::disp();
			cout<<"\t"<<col<<"\t"<<sem;
		}
};
class med:public student
{
	string col;int year;
	public:
		void process()
		{
			cout<<"\nIt's a med. student";
			read();
		}
		void read()
		{
			student::read();
			cout<<"\nEnter col & year: ";
			cin>>col>>year;
		}
		void disp()
		{
			student::disp();
			cout<<"\t"<<col<<"\t"<<year;
		}
};

int main()
{
	engg e;
	med m;
	sci s;
	
	student *stud[]={&e,&s,&m};
	for(int i=0;i<3;i++)
		stud[i]->process();
		
	cout<<"\nThe details: ";
	cout<<"\nName\tCol\tSem/year";
	for(int i=0;i<3;i++)
		stud[i]->disp();
}
