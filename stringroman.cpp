//Program Name:Wap to create class name as "Roman" and givr  two function name as 
//1.acceptstring(char x[]);
//convertno();
//eg.ix o/p = 9;

#include<iostream>
#include<string.h>
using namespace std;
class roman{
	char x[10];
	public: 
	void acceptstr(char x[])
	{
		strcpy(this->x,x);
		//this->x=x;
	}
	void convertno()
	{
		cout<<"The converted string is:"<<x;
	}
};
int main()     //main function
{
	roman r;
	char ch[10];
	cout<<"Enter the string:";
	gets(ch);
	r.acceptstr(ch);
	r.convertno();
	return 0;
}

