//Program Name:wap to create class with void checkmax(int,int) to find largest among two number;

#include<iostream>
using namespace std;
class findmax
{
	public:
	checkmax(int x,int y)
	{
		cout<<"Enter the 1st number:";
		cin>>x;
		cout<<"Enter the 2nd number:";
		cin>>y;
		if(x>y)
			cout<<x<<" is greater";
		else
			cout<<y<<" is greater";
	}
};
int main()
{
	int a,b;
	findmax f;
	return f.checkmax(a,b);
}
