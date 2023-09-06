//Program Name:Hybrid inheritence;
//we use virtual class to over come the ambiguity error
#include<iostream>
using namespace std;
class a{
	public:
		void show()
		{
			cout<<"A class method";
		}
};
class b:virtual public a{
	public:
		void disp()
		{
			cout<<"\nB class method";
		}
};
class c:virtual public a{
	public:
		void disp1()
		{
			cout<<"\nC class method";
		}
};
class d:public b,public c{
	public:
		void show1()
		{
			cout<<"\nD class method";
		}
};
int main()     //main function
{
	d d1;
	d1.show();
	d1.disp();
	d1.disp1();
	d1.show1();
	return 0;
}

