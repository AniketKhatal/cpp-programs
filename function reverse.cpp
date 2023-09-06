//Program Name:WAP to create function name as int reverse(int) this function

#include<iostream>
using namespace std;
int reverse(int num)
{
	int rem,rev;
	while(num>0)
	{
		rem=num%10;
		rev=rev*10+rem;
		num=num/10;
		
	}
	cout<<"The reverse number is:"<<rev;
}
int main()     //main function
{
	int num;
	cout<<"Enter the number that you want to reverse:";
	cin>>num;
	reverse(num);
	
	return 0;
}

