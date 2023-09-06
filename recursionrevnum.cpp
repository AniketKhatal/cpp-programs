//Program Name:reverse the number using recursion;

#include<iostream>
using namespace std;
void reverse(int num,int rev)//fun declar with its defin.
{
	if(num!=0)
	{
		int rem=num%10;
		num=num/10;
		rev=rev*10+rem;
		reverse(num,rev);//recursive call
	}
	else
	{
		cout<<"The reverse number is:"<<rev;
	}
}
int main()
{
	int n;
	cout<<"Enter the number:";
	cin>>n;
	reverse(n,0);
}
