#include<iostream>
#include<map>
using namespace std;

int main()
{
	map<char,int> m;
	map<char,int>::iterator i;
	int ch,v;
	char k;
	
	for(;;)
	{
		cout<<"\n\n1:Insert\n2:Delete\n3:Find an element";
		cout<<"\n4:Display value for a specific value\n5:Size";
		cout<<"\n6:Display all\nEnter choice: ";
		cin>>ch;
		switch(ch)
		{
			case 1:
				cout<<"\nEnter element to be inserted: ";
				cout<<"\nEnter char key and int value: ";
				cin>>k>>v;
				m.insert(pair<char,int>(k,v));
				break;
			case 2:
				cout<<"\nEnter key to delete: ";
				cin>>k;
				if(m.find(k)!=m.end())
				{
					cout<<"\nDeleting ("<<k<<","<<m[k]<<")";
					m.erase(k);
				}
				else
					cout<<"\nNot Found!";
				break;
			case 3:
				cout<<"\nEnter key to find: ";
				cin>>k;
				i=m.find(k);
				if(i==m.end())
					cout<<"\nNot Found!!";
				else
					cout<<"\nFound-> "<<i->first<<" : "<<i->second;
				break;
			case 4:
				cout<<"\nEnter key to display: ";
				cin>>k;
				if(m.find(k)==m.end())
					cout<<"\nNot found";
				else
					cout<<"\nThe value: "<<m[k];
				break;
			case 5:
				cout<<"\nSize: "<<m.size();
				break;
			case 6:
				cout<<"\nThe map elements:\nKEY\tVALUE";
				for(i=m.begin(); i!=m.end(); i++)
					cout<<"\n"<<i->first<<"\t"<<i->second;
				break;
			default:
				return 0;
		}
	}
}
