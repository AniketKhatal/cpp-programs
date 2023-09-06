//Program Name: virtual function,method overriding,late binding;

#include<iostream>
using namespace std;
class a{
	public:
		//void show()//before virtual key word;
		virtual void show()
		{
			cout<<"hey chuts!Im from base class";
		}
};
class b:public a{
	public:
		void show()
		{
			cout<<"Hey chuts !Im from derived class";
		}
};
int main()     //main function
{
	a *ptr;   //base class ref variable
	//a aa;    //base class object
	b aa;      //derived class object
	ptr=& aa;
	//ptr->show();
	
	ptr->show();// also base class method call insteasd o child class in that case we use virtual class function keyeord
	return 0;
}

