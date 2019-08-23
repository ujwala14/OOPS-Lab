#include<iostream>
#include<vector>
using namespace std;

int main()
{
	vector<int> v;
	vector<int>::iterator i;
	int ch,x;
	for(;;)
	{
		cout<<"\n1:Insert\n2:Delete last\n3:Size\n4:Display\n5:clear";
		cout<<"\n6:exit\nEnter choice: ";
		cin>>ch;
		
		switch(ch)
		{
			case 1:
				cout<<"\nEnter element to insert: ";
				cin>>x;
				v.push_back(x);
				break;
			case 2:
				if(!v.empty())
				{
					cout<<"\nDeleting last element: "<<v.back();
					v.pop_back();
				}
				else
					cout<<"\nNo element to delete";
				break;
			case 3:
				cout<<"\nSize: "<<v.size();
				break;
			case 4:
				cout<<"\nThe vector: \n";
				for(i=v.begin(); i!=v.end(); i++)
					cout<<*i<<"\t";
				break;
			case 5:
				cout<<"\nClearing the vector...";
				v.clear();
				break;
			default:
				return 0;
		}
	}
}
