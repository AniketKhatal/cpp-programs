//Program Name:wap to create the class name as circle with givev methods;

#include<iostream>
#define pi 3.14f
using namespace std;
class circle{
	float radius,r,res;
	public:
		void setRadius(float radius)// accept the radius
		{
			r=radius;
		}
		float showArea()
		{
			//res=pi*r*r;
			return pi*r*r;
		}
		
};
int main()     //main function
{
	float rad,res1;
	cout<<"Enter the radius of the circle :";
	cin>>rad;
	circle c;
	c.setRadius(rad);
   	res1=c.showArea();
   	cout<<"The area of the circle is :"<<res1;
	return 0;
}

