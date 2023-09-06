#include<iostream>
using namespace std;
class checkpalin
{
	public:
	palin(int n)
	{
		int rem,rev;
		int temp=n;
		 while(n!=0)
		 {
		 	rem=n%10;
			rev=rev*10+rem;
			n=n/10;	
		 }
		 //cout<<rev;
		 if(rev==temp)
			cout<<temp<<" number is palindrome";
		else
			cout<<temp<<" number is not palindrome";
	}	
};

int main()
{
	checkpalin p;
	int num;
	cout<<"Enter the number :";
	cin>>num;
	return p.palin(num);
}
