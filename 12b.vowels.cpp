#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	int c[10]={0,0,0,0,0,0,0,0,0,0};
	int pos[10][10];
	char ch;
	//streampos cpos;
	int i;
	int cpos=0;
	
	fstream fin("file11.txt",ios::in|ios::binary);
	if(!fin.is_open())
	{
		cout<<"\nError in opening file";
		return 0;
	}
	fin.get(ch);
	while(!fin.eof())
	{
		//cpos=fin.tellg();
		cpos++;
		switch(ch)
		{
			case 'a': i=0; break;
			case 'e': i=1; break;
			case 'i': i=2; break;
			case 'o': i=3; break;
			case 'u': i=4; break;
			case 'A': i=5; break;
			case 'E': i=6; break;
			case 'I': i=7; break;
			case 'O': i=8; break;
			case 'U': i=9; break;
			case '\n': i=-1; cpos--; break;
			default: i=-1;
		}
		if(i!=-1)
			pos[i][c[i]++]=cpos;
		fin.get(ch);
	}
	fin.close();
	
	char vow[]="aeiouAEIOU";
	fstream fout("vcount.txt",ios::out);
	for(int j=0;j<10;j++)
	{
		fout<<"\n"<<vow[j]<<" : "<<c[j];
		fout<<"\nPositions:  ";
		for(int k=0;k<c[j];k++)
			fout<<pos[j][k]<<"  ";
	}
	cout<<"\nVowel count written to file";
	fout.close();
}
