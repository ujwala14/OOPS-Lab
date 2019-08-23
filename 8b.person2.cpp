#include<iostream>
using namespace std;

class person
{
	string name;
	public:
		void read()
		{
			cout<<"\nEnter name: ";
			cin>>name;
		}
		void disp()
		{
			cout<<"\nName: "<<name;
		}
};

class teacher:public person
{
	string sub;
	int no_publ;
	public:
		void read()
		{
			person::read();
			cout<<"\nEnter subject & no.of publications: ";
			cin>>sub>>no_publ;
		}
		void disp()
		{
			person::disp();
			cout<<"\nNo. of Publications in "<<sub<<" : "<<no_publ;
		}
};

class student: public person
{
	protected:
		float m1,m2,m3;
	public:
		void read()
		{
			person::read();
			cout<<"\nEnter marks in 3 subjects(/100): ";
			cin>>m1>>m2>>m3;
		}
};

class marks: public student
{
	float perc;
	public:
		void calc()
		{
			float sum=m1+m2+m3;
			perc=sum/3;
		}
		void disp()
		{
			calc();
			person::disp();
			cout<<"\nPercentage: "<<perc<<" % ";
		}
};

int main()
{
	int n1,n2;
	
	cout<<"\nEnter no. of teachers: "; cin>>n1;
	cout<<"\nEnter no. of students: "; cin>>n2;
	
	teacher *t=new teacher[n1];
	marks *m=new marks[n2];
	
	cout<<"\nEnter data: ";
	for(int i=0;i<n1;i++)
	{
		cout<<"\nTeacher "<<i+1<<" : ";
		t[i].read();
	}
	for(int i=0;i<n2;i++)
	{
		cout<<"\nStudent "<<i+1<<" : ";
		m[i].read();
	}
	
	cout<<"\nRESULTS:\nTeacher deatils: ";
	for(int i=0;i<n1;i++)
		t[i].disp();
	cout<<"\nStudent details: ";
	for(int i=0;i<n2;i++)
		m[i].disp();
}
