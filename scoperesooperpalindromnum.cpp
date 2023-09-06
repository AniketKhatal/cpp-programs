//Program Name:To check the nnumber is palindrome ;

#include<iostream>
using namespace std;
class palin{
	public:
		int num;
		void setdata();
		void getdata();
};
void palin::setdata()
{
	cout<<"Enter the number";
	cin>>num;

}
void palin::getdata()
{
	int rem,rev=0;
	int temp=num;
	while(num>0)
	{
		//cout<<"hi";
		rem=num%10;
		num=num/10;
		rev=rev*10+rem;
	}
	//cout<<rev;
	if(rev==temp)
	{
		cout<<temp<<" is a palindrome number";
	}
	else
	{
		cout<<temp<<" is not a palindrome number";
	}
}
int main()     //main function
{
	palin p;
	p.setdata();
	p.getdata();
	return 0;
}

