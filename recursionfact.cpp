//Program Name:

#include<iostream>
using namespace std;
int fact(int num)
{
	if(num==1 || num==0)
	{
		return 1;
	}
	else
	{
		return num*fact(num-1);
	}
}
int main()     //main function
{
	int n,z;
	cout<<"Enter the number:";
	cin>>n;
	z=fact(n);
	cout<<"The fact of the number using recursion:"<<z;
	return 0;
}

