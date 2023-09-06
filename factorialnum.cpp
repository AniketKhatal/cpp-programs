//Program Name:find the factorial of number

#include<iostream>
using namespace std;
int main()     //main function
{
	int num,fact=1,i;
	cout<<"Enter the number: ";
	cin>>num;
	for(i=num;i>1;i--)
	{
		fact=fact*i;
	}
	cout<<"The factorial of the "<<num<<" is "<<fact;
	return 0;
}

