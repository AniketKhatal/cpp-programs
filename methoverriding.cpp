//Program Name:arstact class vehile car bike method overriding

#include<iostream>
using namespace std;
class vehicle{                               //abstarct class
	public:
		virtual void enginecap()=0;          //abstatct function
};
class car:public vehicle{
	public:
		void enginecap()                    //override the logic for class car
		{
			cout<<"The engine cap is 1000cc";
		}
}; 
class bike:public vehicle{
	public:
		void enginecap()                    //override the logic for class bike
		{
			cout<<"\nThe engin cap is 125cc";
		}
};
int main()     //main function 
{
	/*car c;
	c.enginecap();
	bike b;
	b.enginecap(); 
	return 0;*/
	 	
	vehicle *v=new car();              //creating the object for runtime polymorphism for car
	v->enginecap();
	v=new bike;                         //for class bike
	v->enginecap();
	
}

