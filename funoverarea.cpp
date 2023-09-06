//Program Name: Write a program for fun obverloading .overload the finction area

#include<iostream>
#define pi 3.14
using namespace std;
float area(float); //fun for area of circle
int area(int,int); //fun for area of ract
int area(int); //fun for area of square
int main()
{
	int ch,res,c;
	float rad;
	do
	{
	cout<<"1.Area of cirecle";
	cout<<"\n2.Area of Ractangle";
	cout<<"\n3.Area of Square";
	cout<<"\nEnter the choice :";
	cin>>ch;
	switch(ch)
	{
		float res;
		case 1:
			cout<<"Enter the radius of the circle:";
			cin>>rad;
			res=area(rad);
			cout<<"The Area of the circle is: "<<res;
		break;
		
		case 2:
			int l,b;
			cout<<"Enter the len and breadth of ract ";
			cin>>l>>b;
			res=area(l,b);
			cout<<"The area of the ractangle :"<<res;
		break;
		
		case 3:
			int side;
			cout<<"Enter the side of the square :";
			cin>>side;
			res=area(side);
			cout<<"The area of the square is :" <<res;
		break;
		default:
			cout<<"Invalid Choice";
		}
		cout<<"\n\nDo you want to continue if yes click 1 =";
		cin>>c;
}
	while(c==1);
	return 0;
}

float area(float r)
{
	return pi*r*r;
}
int area(int a,int b)
{
	return a*b;
}
int area(int s)
{
	return s*s;
}
