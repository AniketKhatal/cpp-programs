//Program Name:string palindrime ;

#include<iostream>
using namespace std;
int main()     //main function
{
	char str[10];
	int i,count,flag;
	cout<<"Enter the string:\n";
	cin>>str;
	
	while(str[count]!='\0')
	{
		count++;
	}
	cout<<"The length of the string is:"<<count;
	
	for(i=0;i<count;i++)
	{
		if(str[i]!=str[count-i-1])
		{
			flag=1;
			break;
		}
	}
	if(flag)
	{
		cout<<"\n"<<str<<" is not palindrome";
	}
	else
	{
		cout<<"\n"<<str<<" is palindrome";
	}
	return 0;
}

