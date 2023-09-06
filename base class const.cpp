//Program Name:base class constructure;
//pass the value to bae class consturcture from the child class constructure;

#include<iostream>
using namespace std;
class goraksha{
	//char *arr;
	public:
	goraksha(char ch[])
	{
		//arr=ch;
		cout<<"Name of the son is :"<<ch;
	}
};
class son:public goraksha{
	public:
		son(char anik[]):goraksha(anik)
		{
			cout<<"\n"<<anik<<" is the son of the goraksha khatal-patil";
		}
};
int main()     //main function
{
	char ch[50];
	cout<<"Enter the name of the son:";
	gets(ch);
	son s(ch);
	return 0;
}

