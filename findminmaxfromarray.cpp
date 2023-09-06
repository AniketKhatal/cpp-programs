//Program Name:find the min and max from given array;

#include<iostream>
using namespace std;
int main()
{
	int n, a[20],i,max,min;
	cout<<"Enter the size of the array: ";
	cin>>n;
	cout<<"Enter the element into the array :";
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<"The element of the array is:";
	for(i=0;i<n;i++)
	{
		cout<<"\n"<<a[i];
	}
	max=a[0];
	for(i=0;i<n;i++)
	{
		
		if(a[i]>max)
		{
			//cout<<"hi";
			max=a[i];
		}
		//cout<<"hi";
	}
	cout<<"\nThe max element from the array :"<<max;
	return 0;
}
