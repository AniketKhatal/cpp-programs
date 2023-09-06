//Program Name:WAP to overload function area() for ractangle and circle;

#include<iostream>
#define pi 3.14
using namespace std;
//void area(int ,int); //fun for the area of the ract;
//void area(int); // fun for area of the circle
void area(int a,int b)//defination of fun for ract
{
	cout<<"\nThe area of the ractangle is: "<<a*b;
}
void area(int a) // defination of fun for circle
{
	cout<<"\nThe area of the circle is: "<<pi*a*a;
}
int main()     //main function
{
	int r,a,b;
	cout<<"Enter a radius";
	cin>>r;
	area(r);//calling the fun of area of the circle;
	cout<<"\nEnter length and breadth";
	cin>>a>>b;
	area(a,b);// calling the function of the ractangle;
	return 0;
}


