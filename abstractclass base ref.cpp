//Program Name:Abstract class  code

#include<iostream>
using namespace std;
class vehicle{
	public:
	virtual void speed()=0;
};
class bike:public vehicle{
	public:
		void speed()
		{
			cout<<"\nThe speed of the Royal Enfield is upto 150 kmph";
		}
		void mileage()
		{
			cout<<"\nMilage of the bike is upto 30km/ltr";
		}
};
class truck:public vehicle{
	public:
		void speed()
		{
			cout<<"\nThe speed of the truck is 80kmph";
		}
};
int main()     //main function
{
	vehicle *v;
	bike * b =new bike();
	
	b->speed();
	b->mileage();
	v=new truck();
	v->speed();
	return 0;
}

