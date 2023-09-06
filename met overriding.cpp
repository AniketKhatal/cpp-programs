//Program Name:Method overriding;

#include<iostream>
using namespace std;
class developer{
	public:
		void show()
		{
		cout<<"good in logic";
		cout<<"\n pasout from the 2023 ";
		cout<<"\nBackground only from the cse and it";
	}
};
class mnc:public developer{
	public:
		void show(){
		cout<<"\ngood in logic";
		cout<<"\npassout only from the 2023";
		
	}
};
class midscale:public developer{
	public:
		void show(){
		cout<<"No creiteria";
		cout<<"\nGood in logic";
	}
};
int main()     //main function
{
	midscale m;
	m.show();
	mnc c;
	c.show();
	return 0;
}

