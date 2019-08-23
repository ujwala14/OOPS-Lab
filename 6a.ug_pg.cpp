#include<iostream>
using namespace std;

class student
{
	protected:
		string usn,name;
		int age;
	public:
		void read()
		{
			cout<<"\nEnter name,usn and age: ";
			cin>>name>>usn>>age;
		}
		void disp()
		{
			cout<<"\n"<<name<<"\t"<<usn<<"\t"<<age;
		}
};

class ug:public student
{
	protected:
		int sem;
		float fees,stipend;
	public:
		void read()
		{
			student::read();
			cout<<"\nEnter sem,fees & stipend: ";
			cin>>sem>>fees>>stipend;
		}
		void disp()
		{
			student::disp();
			cout<<"\t"<<sem<<"\t"<<fees<<"\t"<<stipend;
		}
		template<class t>
		friend void calc(t u[],int nu);
};

class pg:public student
{
	protected:
		int sem;
		float fees,stipend;
	public:
		void read()
		{
			student::read();
			cout<<"\nEnter sem,fees & stipend: ";
			cin>>sem>>fees>>stipend;
		}
		void disp()
		{
			student::disp();
			cout<<"\t"<<sem<<"\t"<<fees<<"\t"<<stipend;
		}
		template<class t>
		friend void calc(t p[],int np);
};

template<class t>
void calc(t u[],int nu)
{
	int age_sum[11]={0,0,0,0,0,0,0,0,0,0,0};
	int count[11]={0,0,0,0,0,0,0,0,0,0,0};
	for(int i=0;i<nu;i++)
	{
		age_sum[u[i].sem]+=u[i].age;
		count[u[i].sem]++;
	}
	
	cout<<"\nSEM\tAVERAGE AGE";
	for(int i=1;i<=10;i++)
	{
		if(count[i])
			cout<<"\n"<<i<<"\t"<<(float)age_sum[i]/count[i]<<" years";	
	}
}
int main()
{
	int nu,np;
	do
	{
		cout<<"\nEnter details of atleast 3 students..";
		cout<<"\nEnter no. of ug students: ";
		cin>>nu;
		cout<<"\nEnter no. of pg students: ";
		cin>>np;
	}while((np+nu)<3);
	
	ug *u=new ug[nu];
	pg *p=new pg[np];
	
	cout<<"\nEnter details of students:";
	for(int i=0;i<nu;i++)
	{
		cout<<"\nUG student "<<i+1<<" : ";
		u[i].read();
	}
	
	for(int i=0;i<np;i++)
	{
		cout<<"\nPG student "<<i+1<<" : ";
		p[i].read();
	}
	if(nu)
	{
		cout<<"\nUG students: ";
		cout<<"\nNAME\tUSN\tAGE\tSEM\tFEES\tSTIPEND";
		for(int i=0;i<nu;i++)
			u[i].disp();
		calc(u,nu);
	}
	if(np)
	{
		cout<<"\nPG students: ";
		cout<<"\nNAME\tUSN\tAGE\tSEM\tFEES\tSTIPEND";
		for(int i=0;i<np;i++)
			p[i].disp();
		calc(p,np);
	}
}
