//Program Name:wap to print the fabonacci series between range in cpp;
//strong number
#include<iostream>
using namespace std;
int main()     //main function
{
	int e,a=0,b=1,c,i;
	cout<<"Enter the end of the fabonaaci series :";
	cin>>e;
	for(i=1;i<=e;i++)
	{
		cout<<" "<<c;
		c=a+b;
		
		a=b;
		b=c;
	}
	return 0;
}

