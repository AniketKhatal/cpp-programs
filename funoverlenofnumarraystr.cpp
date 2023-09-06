//Program Name:Write a fun overloading program for overload the operation fun;

#include<iostream>
int operation(int);
int operation(char[]);
int operation(int[]);
using namespace std;
int main()
{
	int num,res,count;
	cout<<"Enter the number to count its digit:";
	cin>>num;
	res=operation(num);
	cout<<"The total number of digit is :"<<res;
	
	char ch[10];
	cout<<"\nEnter the char :";
	_flushall();
	gets(ch);
	res=operation(ch);
	cout<<"The lenght of the string is: "<<res;
	
	int a[10],i;
	cout<<"\nEnter the element into the array :";
	for(i=0;i<5;i++)
	{
		cin>>a[i];
	}
	cout<<"Display the element :";
	for(i=0;i<5;i++)
	{
		cout<<"\n"<<a[i];
	}
	res=operation(a);
	cout<<"\nThe sum of even number is :"<<res;
	return 0;
}
int operation(int num)
{
	int count;
	while(num!=0)
	{
	//	cout<<"hi";
		num=num/10;
		count++;
	}
	return count;
}
int operation(char ch[])
{
	int count1=0;
	while(ch[count1]!='\0')
	{
		count1++;
	}
	return count1;
}
int sum=0;
int operation(int a[])
{
	int i;
	for(i=0;i<5;i++)
	{
		if(a[i]%2==0)
		{
			sum=sum+a[i];
		}
	}
	return sum;
}

