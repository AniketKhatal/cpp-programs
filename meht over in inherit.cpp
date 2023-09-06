//Program Name:method overriding in heritenece;
//in it , directly chile class method executed not the parent class 
#include<iostream>
using namespace std;
class a{
	public:
		void show()
		{
			cout<<"\n base class method";	
		}
};
class b:public a{
	public:
		void show()
		{
			cout<<"\nChild class method";
		}
};
int main()     //main function
{
	a a1;
	a1.show();
	return 0;
}

