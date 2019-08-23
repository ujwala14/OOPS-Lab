#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	string line;
	fstream fin("file11.txt",ios::in);
	fstream fout("file22.txt",ios::app);
	
	if(!fin.is_open())
	{
		cout<<"\nError in opening file 1";
		return 0;
	}
	
	cout<<"\nFile 1:\n";
	while(getline(fin,line))
	{
		cout<<line<<endl;
		fout<<"\n"<<line;
	}
	
	fin.close();
	fout.close();
	
	cout<<"\nFile 2(after appending):\n";
	fstream file("file22.txt",ios::in);
	while(getline(file,line))
	{
		cout<<line<<"\n";
	}
	file.close();
}
