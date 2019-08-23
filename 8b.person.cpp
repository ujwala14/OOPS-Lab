#include<iostream>
using namespace std;

class person
{
	string name;
	public:
		person(string n): name(n)
		{}
		void disp();
};
void person::disp()
{
	cout<<"\nName: "<<name;
}

class teacher:public person
{
	string sub;
	int no_publ;
	public:
		teacher(string n,string s,int p):
			person(n),sub(s),no_publ(p) {}
		void disp();
};
void teacher::disp()
{
	person::disp();
	cout<<"\nNo.of publicatons in "<<sub<<" : "<<no_publ;
}

class student:public person
{
	protected:
		float m[3];
	public:
		student(string n): person(n) {}
		void read();
};
void student::read()
{
	cout<<"\nEnter marks for subjects: ";
	for(int i=0;i<3;i++)
		cin>>m[i];
}

class marks:public student
{
	float perc;
	public:
		marks(string n): student(n) {}
		void calc_disp();
};
void marks::calc_disp()
{
	float sum=0;
	for(int i=0;i<3;i++)
		sum+=m[i];
	perc=sum/3;
	person::disp();
	cout<<"\nPercentage: "<<perc<<" % ";
}

int main()
{
	int np;
	string nm,sb;
//	int n;	
//	cout<<"\nEnter no. of teachers: ";
//	cin>>n;
	
	cout<<"\nEnter name of teacher: ";
	cin>>nm;
	cout<<"\nEnter subject & no.of publications: ";
	cin>>sb>>np;
	teacher t(nm,sb,np);
	
	cout<<"\nEnter name of student: ";
	cin>>nm;
	marks m(nm);
	m.read();
	
	cout<<"\nRESULT:";
	t.disp();
	m.calc_disp();
}
