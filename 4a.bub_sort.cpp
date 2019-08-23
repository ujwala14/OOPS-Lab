#include<iostream>
using namespace std;

template<class t>
class sort
{
	t a[10];
	int n;
	public:
		void read()
		{
			cout<<"\nEnter no. of elements: ";
			cin>>n;
			cout<<"\nEnter "<<n<<" elements:\n";
			for(int i=0;i<n;i++)
				cin>>a[i];
		}
		void disp()
		{
			cout<<"\nThe sorted elements: \n";
			for(int i=0;i<n;i++)
				cout<<a[i]<<"\t";
		}
		void bub()
		{
			for(int i=0;i<n-1;i++)
				for(int j=0;j<n-1-i;j++)
					if(a[j]>a[j+1])
					{
						t temp=a[j];
						a[j]=a[j+1];
						a[j+1]=temp;
					}
		}
};

int main()
{
	int ch,n;
	cout<<"\nDatatype menu:\n1:int\n2:float\n3:char\nEnter choice:";
	cin>>ch;
	
	switch(ch)
	{
		case 1:
			sort<int> i;
			i.read();
			i.bub();
			i.disp();
			break;
		case 2:
			sort<float> f;
			f.read();
			f.bub();
			f.disp();
			break;
		case 3:
			sort<char> c;
			c.read();
			c.bub();
			c.disp();
			break;
		default:
			cout<<"\nInvalid datatype!";
	}
}

