//Program Name:Constructure in inheritence;
//Default inhritence;
/*
#include<iostream>
using namespace std;
class a{
	public:
		a()
		{
			cout<<"\nA class parent class constructure";
		}
};
class b:public a{
	public:
		b()
		{
			cout<<"\nB class child class constructure";
		}
};
int main()     //main function
{
	b b1;
}
*/
//base class constructor;

#include<iostream>
using namespace std;
class a{
	public:
	a(int x)//parameterised base class constructor;
	{
		cout<<"\n base class constructor:"<<x;
	}
};
class b:public a{
	public:
		b(int y):a(y)
		{
			cout<<"\n child class constuctor";
		}
};
int main()
{
	int z;
	cout<<"Enter the a class parameter:";
	cin>>z;
	b b1(z);
	return 0;
}























