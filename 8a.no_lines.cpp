#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	string line;
	int count=0;
	
	fstream file("file11.txt",ios::in);
	if(!file.is_open())
	{
		cout<<"\nError in opening file";
		return 0;
	}
	
	cout<<"\nContent of the file:\n";
	while(getline(file,line))
	{
		cout<<line<<endl;
		count++;
	}
	file.close();
	
	cout<<"\nNo. of lines: "<<count;
}
