//Program Name:sort the array and string;

#include<iostream>
#include<string.h>
void sort(int[]);
void sort(char[]);
using namespace std;
int main()
{
	int a[10],i;
	cout<<"Enter the element into the array:";
	for(i=0;i<5;i++)
	{
		cin>>a[i];
	}
	sort(a);
	
	char ch1[10];
	cout<<"Enter the string :";
	_flushall();
	gets(ch1);
	sort(ch1);
	return 0;
}
void sort(int a[])
{
	int i,j,temp;
	for(i=0;i<5;i++)
	{
		for(j=i+1;j<5;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	for(i=0;i<5;i++)
	{
		cout<<a[i];
	}
}
void sort(char ch1[])
{
	int l,i,j;
	char temp;
	l=strlen(ch1);
	for(i=0;i<l;i++)
	{
		for(j=i+1;j<l;j++)
		{
			if(ch1[i]>ch1[j])
			{
				temp=ch1[i];
				ch1[i]=ch1[j];
				ch1[j]=temp;
			}
		}
	}
	cout<<ch1;
}


