//Program Name:

#include<iostream>
using namespace std;
char *removechar(char msg[])
{
	//char ch[50];
	int count=0;
	while(msg[count]!=0)
	{
		count++;
	}
	cout<<"The lenght of str is:"<<count;
	char * str1=new char[count+1]; //delacre one new array to add only char from input string
	int j=0;
	for(int i=0;i<count;i++)
	{
		if(msg[i]==' ')
		{
			msg[i+1];
		}
		if(msg[i]>=97 && msg[i]<=122)
		{
			str1[j]=msg[i];
			j++;
		}
	}
	return str1;//return that array
}
int main()     //main function
{
	char str[50],*msg;
	cout<<"Enter the string:";
	gets(str);
//	msg=removechar(str);//pass the str into function
//	cout<<"The string only with char:"<<msg;//print the string with only char
	cout<<"The string only with char:"<<removechar(str);
	
	return 0;
}

