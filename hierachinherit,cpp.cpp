//Program Name:Hierarchical inhertance;
//calulate the circum and tha area of the circle

#include<iostream>
using namespace std;
class circle{
	protected:
	float rad;
	public:
		void setrad(float rad)
		{
			this->rad=rad;
		}
	
};
class area: public circle
{
	public:
	float getarea()
	{
		return 3.14*rad*rad;
	}
};
class circum:public circle
{
	public:
	float getcircum()
	{
		return 2*3.14*rad;
	}	
};
int main()     //main function
{
	float rad,rad1;
//	cout<<"Enter the radius og the circle:";
//	cin>> rad;
	//circle c;
	//c.setrad(rad);
	area a;
	cout<<"Enter the radius of the circle:";
	cin>> rad;
	a.setrad(rad);
	float res1=a.getarea();
	cout<<"The area of the circle:"<<res1;
	circum m;
	cout<<"\nEnter the radius of the circle:";
	cin>> rad1;
	m.setrad(rad1);
	float res2=m.getcircum();
	cout<<"\nThe circumference of the circle:"<<res2;
	return 0;
}

