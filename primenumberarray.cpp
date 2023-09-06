
//Program Name:find the prime number bet of the user given array;

#include<iostream>
using namespace std;
int main()     //main function
{
	int a[10],i,j,count;
	cout<<"Enter the element into the array:";
	for(i=0;i<10;i++)
	{
		cin>>a[i];
	}
	cout<<"\nThe element of the array:";
	for(i=0;i<10;i++)
	{
	
		cout<<"\n"<<a[i];
	}
	cout<<"\nThe prime number is:";
	for(i=0;i<10;i++)
	{
		count=0;
		for(j=1;j<=a[i];j++)
		{
			if(a[i]%j==0)
			{
				count++;
			}
		}
		if(count==2)
		{
			cout<<"\n"<<a[i];
		}
	}
	return 0;
}

