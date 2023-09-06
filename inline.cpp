//Program Name:Inline function.
/*
#include<iostream>
using namespace std;
inline int cube(int x)
{
	return x*x*x;
}
int main()
{
	int num,res;
	cout<<"Enter the number :";
	cin>>num;
	res=cube(num);
	cout<<"The cube of number is :"<<res;
}*/

#include<iostream>
using namespace std;
inline int getsquare(int x)
{
	return x*x;
}
int main()
{
	int num;
	cout<<"Enter the number:";
	cin>>num;
	int res= getsquare(num);
	cout<<"The square of the "<<num <<" is "<<res;
}
