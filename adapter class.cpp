//Program Name:adapter class;

#include<iostream>
using namespace std;
class vehicle{
	public:
		virtual void enginecap()=0;
		virtual void color()=0;
};
class adapter:public vehicle{
	public:
	void enginecap()
	{
	}
	void color()
	{
	}
};
class bike:public adapter{
	public:
		void enginecap()
		{
			cout<<"Royal Enfiled 350 stealth black=350cc";
		}
};
class car:public adapter{
	public:
		void color()
		{
			cout<<"\nMercedes G-Wagan in black color";
		}
};
int main()     //main function
{
	vehicle *v;
	v=new bike();
	v->enginecap();
	v= new car();
	v->color();
	return 0;
}

