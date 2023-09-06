//Program Name:palindrome number in cpp;

#include<iostream>
using namespace std;
int main()     //main function
{
	int num,rem,rev;
	cout<<"Enter the number: ";
	cin>>num;
	while(num>0)
	{
		rem=num%10; //rem=12%10=2
		rev=rev*10+rem;
		num=num/10;
	}
	cout<<"The Number is :"<<rev;
	return 0;
}

