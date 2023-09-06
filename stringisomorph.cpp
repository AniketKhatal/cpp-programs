//Program Name: Wap to check the string is isomorphic or not
//class isomorph
//acceptstr(char []x,char[]y);
//checkstr();
#include<iostream>
#include<string.h>
using namespace std;
class strrev{
	 char x[20],temp[20];
	public:
		void acceptstr();
		void checkstr();
};
void strrev::acceptstr()
{
	cout<<"Enter the string 1 :";
	gets(x);
	strcpy(temp,x);
}
void strrev::checkstr()
{
	int count=0,len;
	while(x[count]!='\0')
	{
		count++;
	}
	len=count;
	int mid,end,start;
	cout<<"The string reverse is  :"<<x;

}
int main()     //main function
{
	isomorph i;
	i.acceptstr();
	i.checkstr();
	return 0;
}

