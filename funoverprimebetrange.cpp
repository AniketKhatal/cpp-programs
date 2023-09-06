//Program Name:fun overloading  pro for prime num bet range;

#include<iostream>
void prime(int, int);
void prime(int[]);
using namespace std;
int main()
{
	int s,e,res;
	cout<<"Enter the starting value :";
	cin>>s;
	cout<<"Enter the ending of value :";
	cin>>e;
	prime(s,e);
	//res=prime(s,e);
	//cout<<res;
	
	int z[10],i;
	cout<<"\nEnter the element into array :";
	for(i=0;i<5;i++)
	{
		cin>>z[i];
	}
	prime(z);
	return 0;
}
void prime(int a,int b)
{
	int i,j,count;
	for(i=a;i<=b;i++)
	{  
		count=0;
		for(j=1;j<=i;j++)
		{
			if(i%j==0)
			{
				count++;
			}
		}
		if(count==2)
		{
			//cout<<"hi";
			cout<<"\n"<<i;
		}
	}
}
void prime(int a[])
{
	int i,j,count;
	for(i=0;i<5;i++)
	{
		count=0;
		for(j=1;j<=a[i];j++)
		{
			if(a[i]%j==0)
			{
				count++;
			}
		}
		if(count==2)
		{
			cout<<"\n"<<a[i];
		}
	}
}
