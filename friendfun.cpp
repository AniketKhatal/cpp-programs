//Program Name:Friend function:
//It can access the member of class 
#include<iostream>
using namespace std;
class a{
	int x,y;
	public:
		void input()
		{
			cout<<"Enter the number:";
			cin>>x>>y;
		}
		friend void add(a aa);
};
void add(a aa)
{
	int z;
	z=aa.x+aa.y;
	cout<<"The addition of two numbe is:"<<z;
}
int main()     //main function
{
	a bb;
	bb.input();
	add(bb);
	
	return 0;
}

