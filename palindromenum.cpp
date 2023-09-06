//Program Name: to check the number is palindrome or not in cpp

#include<iostream>
using namespace std;
int main()     //main function
{
	int num;
	cout<<"Enter the number :"; //i/p a number
	cin>>num;
	int temp=num;
	int rem,rev;
	while(num>0) //reverse logic
	{
		rem=num%10;
		rev=rev*10+rem;
		num=num/10;
	}
	//cout<<"The reverse number is: "<<rev;
	if(rev==temp) //logic for palindrome
	{
		cout<<"\n"<<temp<<" is a palindrome number";
	}
	else
		cout<<"\n"<<temp<<" is not a palindrome number";
	return 0;
}

