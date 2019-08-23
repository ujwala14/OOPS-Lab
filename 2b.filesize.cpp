#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	
/*	fstream fout;
	fout.open("file11.txt",ios::out);
	fout<<"Hello!\nHow are you?\nI am fine thank you\nBye!!";
	fout.close();
*/
	
	fstream file;
	streampos start,end;
	file.open("file11.txt",ios::in|ios::binary);
	if(!file.is_open())
	{
		cout<<"\nError in opening file";
		return 0;
	}
	file.seekg(0l,ios::beg);
	start=file.tellg();
	file.seekg(0l,ios::end);
	end=file.tellg();
	file.close();

	cout<<"\nThe size of the file : "<<end-start<<" bytes";
	return 0;
}

