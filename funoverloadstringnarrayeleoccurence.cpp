//Program Name: wap to do function overloading to check the occurene of ele in arrayand in string;

#include<iostream>
using namespace std;
void check(int[]);
void check(char[]);
int size;
int main()
{
	int ch;
	cout<<"1.Check the freuency of ele of Array";
	cout<<"2.Check the frequency of char of string";
	cout<<"Enter your choice:";
	cin>>ch;
	switch(ch)
	{
		int i,size,a[10];
		case 1:
			cout<<"Enter the size of array:";
			cin>>size;
			cout<<"Enter the element into the array:";
			for(i=0;i<size;i++)
			{
				cin>>a[i];
			}
			check(a);
		break;
		case 2:
			char ch[20];
			//int i;
			cout<<"Enter the string: ";
			gets(ch);
			//check(ch);
		break;
		default:
			cout<<"Invalid choice "	;		
	}
	return 0;
}
void check(int a[])
{
	int temp,i,j,count=0;
	for(i=0;i<size;i++)
	{
		for(j=i+1;j<size;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;	
			}
		}
	}
	cout<<"\nElemet  occurence";
	for(i=0;i<size;i++)
	{
		if(a[i]==a[i+1])
		{
			count++;
		}
		else
		{
			cout<<"\n"<<a[i]<<"\t"<<count;
			count=1;
		}
	}
}
