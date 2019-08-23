#include<iostream>
using namespace std;

class str
{
	string s;
	public:
		str():s("") 
		{
			cout<<"\nInit with empty string\n";
			disp();
		}
		str(const string t):s(t)
		{
			cout<<"\nInit with string constant\n";
			disp();
		}
		str(str &st1)
		{
			s=st1.s;
			cout<<"\nInit with another object\n";
			disp();
		}
		void disp();
		void my_concat(str &st1);
};

void str::disp()
{
	cout<<"String value: "<<s;
}

void str::my_concat(str &st1)
{
	cout<<"\n\nConcatinating ";disp();
	cout<<" with "; st1.disp();
	s=s+st1.s;
	cout<<"\nConcatinated string - ";disp();
}

int main()
{
	str s1,s2("patrick"),s3("jane"),s4(s2);
	s1.my_concat(s2);
	s3.my_concat(s4);
	s1.my_concat(s3);
}
