//Program Name:wap to create the class name as circle with givev methods;

#include<iostream>
#define pi 3.14;
using namespace std;
class circle{
	float radius,r;
	public:
		void setRadius(float radius)// accept the radius
		{
			r=radius;
		}
		float showArea()
		{
			return pi*r*r;
		}
		
};
int main()     //main function
{
	float rad;
	cout<<"Enter the radius of the circle :";
	cin>>rad
	circle c;
	c.setRadius(rad);
	c.showArea();
	return 0;
}

