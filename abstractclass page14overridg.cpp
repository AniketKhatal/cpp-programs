//Program Name:Using function overrinding with help of dynamic polymorphism;

#include<iostream>
using namespace std;
class value{
	protected:
		int x,y;
		public:
			setvalue(int a,int b)
			{
				x=a;
				y=b;
			}
			virtual int getresult()=0;//Abstract funtion or pure virtual
};
class add:public value{
	public:
		int getresult()
		{
			return x+y;
		}
};
class mul:public value{
	public:
		int getresult()
		{
			return x*y;
		}
};
class calculator{
	public:
		void operation(value *v)
		{
			int r=v->getresult();
			cout<<"Result is :"<<r;
		}
};

int main()     //main function
{
	calculator c;
	value *v;
	int ch,a,b;
	cout<<"1.Addition"<<"\n"<<"2.Multiplication";
	cout<<"\nEnter Your Choice:";
	cin>>ch;
	cout<<"\nEnter the value of a and b";
	cin>>a>>b;
	switch(ch)
	{
		case 1:
			v=new add();
			v->setvalue(a,b);
			c.operation(v);
		break;
		
		case 2:
			v=new mul();
			v->setvalue(a,b);
			c.operation(v);
		break;
		default:
			cout<<"Out of bound";
	}
	return 0;
}

