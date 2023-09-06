//Program Name:fibonacci series in cpp

#include<iostream>
using namespace std;
int fibo(int num) //fun declaration with its defination
{
	if(num==0)
		return 0;
	else
		if(num==1)
			return 1;
		else
			return fibo(num-1)+fibo(num-2); //recursive call
}
int main()
{
	int i,n,f;
	cout<<"Enter the number upto you print the fibonacci series:";
	cin>>n;
	for(i=0;i<=n;i++)
	{
		f=fibo(i);
		cout<<"\t"<<f;
	}
}
