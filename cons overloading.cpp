//Program Name:constructure overloading;

#include<iostream>
using namespace std;
class square{
	public:
		square(int x)
		{
			cout<<"\nThe square of the integer value:"<<x*x;
		}
		square(float y)
		{
			cout<<"The square of the float value:"<<y*y;
		}
};
int main()     //main function
{
	square s1(1.2F);
	square s2(12);
	return 0;
}

