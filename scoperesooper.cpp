//Program Name:Scope Resolution operator:

#include<iostream>
using namespace std;
int a=100;
int main()     //main function
{
	int a=200;
	cout<<"\nThe local variable is :"<<a;
	//cout<<"\nThe global variable is:"<<a;//op is same for both
	cout<<"\nthe gobal variable is :"<<::a;
	return 0;
}

