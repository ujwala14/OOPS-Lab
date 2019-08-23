#include<iostream>
using namespace std;

class media
{
	string title;
	float price;
	public:
		media(string t,float p): title(t),price(p) 
		{
			cout<<"\nCreating media...";
		}
		void disp()
		{
			cout<<"\nTitle: "<<title;
			cout<<"\nPrice: Rs. "<<price;
		}
};

class book: public media
{
	int no_pages;
	public:
		book(string t,float p,int n): media(t,p),no_pages(n)
		{
			cout<<"\nCreating book...";
		}
		void disp()
		{
			media::disp();
			cout<<"\nNo.of pages: "<<no_pages;
		}
};

class video: public media
{
	int play_time;
	public:
		video(string t,float p,int n): media(t,p),play_time(n)
		{
			cout<<"\nCreating video tape...";
		}
		void disp()
		{
			media::disp();
			cout<<"\nPlay time: "<<play_time<<" mins ";
		}
};

int main()
{
	string t;
	float p;
	int np,pt;
	
	cout<<"\nEnter data for book: ";
	cout<<"\nEnter title, price & no.of pages: \n";
	cin>>t>>p>>np;
	book b(t,p,np);
	
	cout<<"\nEnter data for video tape: ";
	cout<<"\nEnter title, price & playtime: \n";
	cin>>t>>p>>pt;
	video v(t,p,pt);
	
	cout<<"\n------------------------------------\nRESULT:";
	cout<<"\nBOOK: ";
	b.disp();
	cout<<"\nVIDEO TAPE: ";
	v.disp();
}
