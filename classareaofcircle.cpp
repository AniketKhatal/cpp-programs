//Program Name:Class concept in cpp
//wap to calculate the area of circle using class concept;

#include<iostream>
using namespace std;
class circle
{
	int a,b,res;
	float pi=3.14,r;
	public:
		void area(float)
		{
			cout<<"Enter the radius:";
			cin>>r;
			a=pi*r*r;
			cout<<"The area of the circle is :"<<a;
		}
	    void area(int a,int b)
	    {
	    	cout<<"Enter the lenght of the ract";
	    	cin>>a;
	    	cout<<"Enter the breadth of the ract:";
	    	cin>>b;
	    	res=a*b;
	    	cout<<"The area of the ractangle:"<<res;
		}
	
		
};
int main()
{
	float a1;
	int x,y;
	circle c;
	c.area(a1);
	c.area(x,y);
}


