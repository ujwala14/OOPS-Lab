#include<iostream>
#include<fstream>
using namespace std;

class student
{
	string name;
	int rno;
	float total;
	char grade;
	public:
		void read();
		void disp();
		void calc();
};

void student::read()
{
	cout<<"\nEnter name and rno: ";
	cin>>name>>rno;
	cout<<"\nEnter total marks(/300): ";
	cin>>total;
}

void student::disp()
{
	cout<<"\n"<<name<<"\t"<<rno<<"\t"<<total<<"\t"<<grade;
}

void student::calc()
{
	float perc=total/3;
	int p=perc/10;
	switch(p)
	{
		case 10:
		case 9:		grade='S'; break;
		case 8:		grade='A'; break;
		case 7:		grade='B'; break;
		case 6:		grade='C'; break;
		case 5:		grade='D'; break;
		default:	grade='F'; break;
	}
}

int main()
{
	int n;
	student s[10],d;
	
	fstream fout("stud_rec.txt",ios::out|ios::binary);
	cout<<"\nEnter no. of students: ";
	cin>>n;
	cout<<"\nEnter details: ";
	for(int i=0;i<n;i++)
	{
		cout<<"\nStudent "<<i+1<<" : ";
		s[i].read();
		s[i].calc();
		fout.write((char*)&s[i],sizeof(student));
	}
	fout.close();
	
	cout<<"\nStudent details from file: ";
	fstream fin("stud_rec.txt",ios::in|ios::binary);
	cout<<"\nNAME\tRNO\tTOTAL\tGRADE";
	while(fin.read((char*)&d,sizeof(student)))
		d.disp();
	fin.close();
	
	return 0;
}
