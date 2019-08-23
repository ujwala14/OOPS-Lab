/*Write and execute a C++ program to perform 
operations on list using STL to
i. Insert an Element at the Front&at the End
ii. Delete the Element at the Front&at the End
iii. Size of the List
iv. Remove Elements with Specific Values& duplicate values
v. Reverse the order of elements
vi. Merge& display Sorted Lists*/

#include<iostream>
#include<list>
#include<algorithm>
using namespace std;

void disp(list<int> li)
{
	list<int>::iterator i;
	//cout<<"\nThe list: \n";
	for(i=li.begin();i!=li.end();i++)
		cout<<*i<<"\t";
}
int main()
{
	list<int> l;
	list<int> l2;
	int ch,x;
	for(;;)
	{
		cout<<"\n\n1:Insert at Front\n2:Insert at End\n3:Delete at Front";
		cout<<"\n4:Delete at End\n5:Size\n6:Remove specific value";
		cout<<"\n7:Remove duplicates\n8:Reverse\n9:Merge & display Sorted Lists";
		cout<<"\n10:Exit\nEnter choice: ";
		cin>>ch;
		switch(ch)
		{
			case 1:
				cout<<"\nEnter element to insert: "; cin>>x;
				l.push_front(x); 
				break;
			case 2:
				cout<<"\nEnter element to insert: "; cin>>x;
				l.push_back(x); 
				break;
			case 3:
				if(!l.empty())
				{
					cout<<"\nDeleting: "<<l.front();
					l.pop_front();
				}
				else
					cout<<"\nEmpty list";
				break;
			case 4:
				if(!l.empty())
				{
					cout<<"\nDeleting: "<<l.back();
					l.pop_back();
				}
				else
					cout<<"\nEmpty list";
				break;
			case 5:
				cout<<"\nSize: "<<l.size();
				break;
			case 6:
				cout<<"\nEnter element to remove: ";
				cin>>x;
				l.remove(x);
				break;
			case 7:
				cout<<"\nRemoving duplicates...";
				l.sort();
				l.unique();
				break;
			case 8:
				l.reverse();
				break;
			case 9:
				//list<int> l2;
				for(int a=0;a<5;a++)
					l2.push_back(a);
				cout<<"\nThe list 2(self initialied):\n";
				disp(l2);
				l2.sort();
				cout<<"\nThe list before merging:\n";
				disp(l);
				l.sort();
				l.merge(l2);
				break;
			default:
				return 0;		
			
		}
		cout<<"\nThe list after operation: \n";
		disp(l);
	}
	
}

