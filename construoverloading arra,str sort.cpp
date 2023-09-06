//Program Name:
//WAP to perform constructor overloading create class name as ArrayOperation with two constructor 
//ArrayOperation(int a[]) : this constructor accept integer array as parameter
//ArrayOperation(char[]) : this constructor accept float array as parameter
//void performIntegerArraySorting(): perform sorting on integer array
//void performCharArraySorting(): perform sorting on character array.


#include<iostream>
#include<string.h>
#include<stdio.h>
using namespace std;
class arrayoperation{
	int *ptr;
	char s[20];
	public:
		arrayoperation(int a[])
		{
			ptr=a;
		}
		arrayoperation(char s[])
		{
			strcpy(this->s,s);
			
			
		}
		void performIntegerArraySorting()
		{
			int i,j,temp=0;
			for(i=0;i<5;i++)
			{
				for(j=i+1;j<5;j++)
				{
					if(ptr[i]>ptr[j])
					{
						temp=ptr[i];
						ptr[i]=ptr[j];
						ptr[j]=temp;
					}
				}
			}
			cout<<"The sorted array is:\n";
			for(i=0;i<5;i++)
			{
				cout<<"\t"<<ptr[i];
			}
		}
		void performCharArraySorting()
		{
			int i,j;
			//int count=0;
		
		
			for(i=0;s[i]!='\0';i++)
			{
				for(j=i+1;s[j]!='\0';j++)
				{
				
					if(s[i]>s[j])
					{
						
					char temp=s[i];
						s[i]=s[j];
						s[j]=temp;
					}
				}
				
					
			}
				//cout<<count;
		puts(s);
		}
};
int main()     //main function
{
	int a[5],i;
	char s[20];
	cout<<"\nEnter the string:";
	gets(s);
	arrayoperation x1(s);
	x1.performCharArraySorting();
	cout<<"Enter the element into the array:";
	for(i=0;i<5;i++)
	{
		cin>>a[i];	
	}	
	arrayoperation x(a);
	x.performIntegerArraySorting();
//	cout<<"\nEnter the string:";
//	gets(s);
//	arrayoperation x1(s);
//	x1.performCharArraySorting();
	
//	cout<<"\nThe sorted string is :\n";
	
	return 0;
}

