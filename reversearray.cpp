//Program Name:reverse the array in cpp

#include<iostream>
using namespace std;
int main()     //main function
{
	int a[10],i,end,temp,mid;
	cout<<"Enter the ele";
	for(i=0;i<10;i++)
	{
		cin>>a[i];
		
	}
	cout<<"the ele is ";
	for(i=0;i<10;i++)
	{
		cout<<"\n"<<a[i];
		
	}
	int len=sizeof(a)/sizeof(a[i]);
	cout<<len;
	end=len-1;
	mid=len/2;
	for(i=0;i<mid;i++)
	{
		temp=a[i];
		a[i]=a[end];
		a[end]=temp;
		end--;
	}
	cout<<"the ele is ";
	for(i=0;i<10;i++)
	{
		cout<<"\n"<<a[i];
		
	}
	
	
	return 0;
}

