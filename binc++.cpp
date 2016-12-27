#include<iostream>
#include<fstream>
#include<cstring>

using namespace std;

class Person
{
	char name[50];
	int age;



public:
	Person()
	{
		strcpy(name,"noname");
		age=0;
	}
	Person(char *name,int age)
	{
		strcpy(this->name,name);
		this->age=age;
	}
	
	void whoareyou()
	{
		cout<<"I am"<<name<<"and"<<age<<"years old"<<endl;
	}

};
int main()
{
	Person Raj("Rajkumar",23);
	
	fstream infile("ex.bin",ios::binary| ios::in | ios::out | ios::app);
	if(!infile.is_open())
	{
		cout<<"Error in opening"<<endl;
	}
	else
	{
		infile.write((char *)&Raj,sizeof(Person));
		int c=infile.tellg();
		cout<<c<<endl;
		infile.seekg(0);
		Person Ram;
		infile.read((char *)&Ram,sizeof(Person));
		Ram.whoareyou();
	}

	infile.close();
return 0;
}

