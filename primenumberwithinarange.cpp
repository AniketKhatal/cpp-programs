//Program Name:calulate the the prime number within a range in cpp;

#include<iostream>
using namespace std;
int main()     //main function
{
	int s,e,i,j,count;
	cout<<"Enter the start of the range: "; //i/p start
	cin>>s;
	cout<<"Enter the end of the range: ";//i/p end
	cin>>e;
	for(i=s;i<=e;i++) //s=2 2<=10
	{
		count=0;
		for(j=1;j<=i;j++)// j=1 j<=2   j 1,2,3<=3;
		{
			if(i%j==0)
			{
				count++;
			}
		}
		if(count==2)
		{
			cout<<"\n"<<i;  //printing the prime number;
		}
	}
	return 0;
}

