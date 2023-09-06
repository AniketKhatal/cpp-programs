//Program Name:using function recursion print the table;

#include<iostream>
using namespace std;
int count=0;
int table(int num)
{
	if(count==10)
	{
		cout<<"End";
	}
	else
	{
		count++;
		cout<<num*count<<"\n";
		return table(num);	
	}
}
int main()     //main function
{
	int n;
	cout<<"Enter the number:";
	cin>>n;
	table(n);
	return 0;
}

