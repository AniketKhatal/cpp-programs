//Program Name:Roman string to integer;

#include<iostream>
using namespace std;
int val(char roman)
{
	switch(roman)
	{
		case 'I':
		return 1;
		
		case 'V':
		return 5;
		
		case 'X':
		return 10;
		
		case 'L':
		return 50;
		
		case 'C':
		return 100;
		
		case 'D':
		return 500;
		
		case 'M':
		return 1000;	
	}	
}
int romantoint(string A)
{
	int i,n,ans=0,p=0;
	n=A.length()-1;
	for(i=n;i>=0;i--)
	{
		if(val(A[i])>=p)
			ans=ans+val(A[i]);
		else
			ans=ans-val(A[i]);
		p=val(A[i]);
	}
	return ans;
}
int main()     //main function
{
	string s;
	int num;
	cout<<"Enter the Roman String in Upper case:";
	cin>>s;
	num=romantoint(s);
	cout<<"The Integer number is:"<<num<<"\n";
	return 0;
}

