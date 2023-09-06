//Program Name:Create the class name as convertto upper class with

#include<iostream>
#include<string.h>
using namespace std;
class converttoupper{
	char ch[20];
	public:
	void setdata(char c[20])
	{
		strcpy(ch,c);
	}
	void getdata()
	{
		cout<<"The sting is in upper case:"<<ch;
	}
	
};
int main()     //main function
{
	char ch[20];
	converttoupper c;
	cout<<"Enter the string that :";
	cin>>ch;
	c.setdata(ch);
	for(int i=0;ch[i]='\0';i++)
	c.getdata();
	return 0;
}

