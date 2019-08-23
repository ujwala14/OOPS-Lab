#include<iostream>
using namespace std;

class student
{
	string name;
	int rno;
	float marks[3];
	char grade;
	public:
		void read();
		void disp();
		void calc();
};

void student::read()
{
	cout<<"\nEnter name & rno: ";
	cin>>name>>rno;
	cout<<"\nEnter marks of 3 subjects(/100): ";
	for(int t=0;t<3;t++)
		cin>>marks[t];	
}
void student::calc()
{
	float total=0;
	for(int i=0;i<3;i++)
		total+=marks[i];
	float perc=total/3;
	int p=perc/10;
	switch(p)
	{
		case 10:
		case 9:		grade='S';break;
		case 8:		grade='A';break;
		case 7:		grade='B';break;
		case 6:		grade='C';break;
		case 5:		grade='D';break;
		default:	grade='F';
	}
}

void student::disp()
{
	cout<<"\n"<<name<<"\t"<<rno<<"\t"<<grade;
}
int main()
{
	student s[3],*p;
	p=s;
	cout<<"\nEnter details: ";
	for(int i=0;i<3;i++)
	{
		cout<<"\nStudent "<<i+1<<" : ";
		(p+i)->read();
		(p+i)->calc();
	}
	
	cout<<"\nThe students:\nName\tRNo\tGrade";
	for(int i=0;i<3;i++)
		(p+i)->disp();
}

