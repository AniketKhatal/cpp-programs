//Program Name:find the minimun element from the given array;

#include<iostream>
using namespace std;
int main()
{
	int n,a[12],i,min;
	cout<<"Enter the size of the array: ";
	cin>>n;
	cout<<"Enter the element into the array :";
	for(i=0;i<n;i++)\
	{
		cin>>a[i];
	}
	cout<<"The element of the array :";
	for(i=0;i<n;i++)
	{
		cout<<"\n"<<a[i];
	}
	min=a[0];
	for(i=0;i<n;i++)
	{
		if(a[i]<min)
		min=a[i];
	}
	cout<<"The minimum element of the array : "<<min;
	return 0;
}
