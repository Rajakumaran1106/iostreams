#include<iostream>
#include<fstream>
using namespace std;
int count=0;
int main()
{
	char ch[100];
	ifstream infile;
	infile.open("text.txt" );
	if(!infile.is_open())
	{
		cout<<"unamcle to oprn"<<endl;
	}
	else
	{
		count=0;
		while(!infile.eof())
		{
	//		infile.get(ch);
			infile>>ch;
			count++;
//			cout<<ch<<endl;

			if(count==1)
			{
				cout<<"no of test cases are"<<ch<<endl;
			}
			else
			{
				if(count%2==0)
				cout<<"odd count"<<endl;
				else
				cout<<"even count"<<endl;
			}
		}
		cout<<"no of char are"<<count<<endl;
	}

	infile.close();
return 0;
}
