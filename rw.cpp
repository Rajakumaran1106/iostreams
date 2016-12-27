#include<iostream>
#include<fstream>
using namespace std;

struct Person
{
	char name[20];
	int age;
	double salary;
};

int main()
{

	ofstream outfile;
	outfile.open("out.txt",ios::out);
	Person p1,p2;
//person1

	cout<<"enter the name"<<endl;
	cin.get(p1.name,50);

	cout<<"enter age"<<endl;
	cin>>p1.age;

	cout<<"enter the salary"<<endl;
	cin>>p1.salary;

//person2
	cout<<"enter the name"<<endl;
        cin.get(p2.name,50);

        cout<<"enter age"<<endl;
        cin>>p2.age;

        cout<<"enter the salary"<<endl;
        cin>>p2.salary;

	outfile<<p1.name<<endl<<p1.age<<endl<<p1.salary<<endl;
	
	outfile<<p2.name<<endl<<p2.age<<endl<<p2.salary<<endl;
	
	outfile.close();

	ifstream infile;
	infile.open("out.txt",ios::in);
	string line;
	if(infile.is_open())
	{
		while(!infile.eof())
		{
			getline(infile,line);
			cout<<line<<endl;;
		}
	}

	infile.close();
	return 0;
}
