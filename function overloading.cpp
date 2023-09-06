//Program Name:Function overloading in cpp

#include<iostream>
using namespace std;
void show(int);     //declaration of the function
void show(float);
int main()     //main function
{
	float n;
	int a;
	cout<<"Enter the value of n to check the fun overloading:";
	cin>>n;
	show(n);
	show(int(n)); ///calling of the function also type cast it;
	return 0;
}
void show( int x)   //defination of the function;
{
	cout<<"\nThe function with int value "<<x;
}
void show(float y)
{
	cout<<"The function with float value "<<y;
}

