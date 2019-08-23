#include<iostream>
using namespace std;

class box
{
	float l,b,h,vol;
	static int count;
	public:
		box(float x,float y,float z):
			l(x),b(y),h(z) 
			{
				count++;
			}
		void disp();
		void calc();
		static int getcount();
};

int box::getcount()
{
	return count;
}
void box::calc()
{
	vol=l*b*h;
}
void box::disp()
{
	calc();
	cout<<"\nDimensions: ";
	cout<<l<<" X "<<b<<" X "<<h;
	cout<<"\nVolume: "<<vol;
}

int box::count=0;

int main()
{
	char ch;
	do
	{
		float x,y,z;
		cout<<"\nEnter length,breadth & height of box:\n";
		cin>>x>>y>>z;
		box b(x,y,z);
		b.disp();
		cout<<"\nNo.of boxes created till now: "<<box::getcount();
		cout<<"\nDo you want to more boxes(y/n)? ";
		cin>>ch;
	}while(ch=='y'||ch=='Y');
	
	cout<<"\nTotal boxes created: "<<box::getcount();
}
