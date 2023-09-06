//Program Name:wap to print the area of react bby creating a class name as area
//with the help of scope resolution operator;

#include<iostream>
using namespace std;
class area{
	public:
		int len,bre;
		void setdata();
		void getdata();
};
void area::setdata()
{
	cout<<"Enter the lenght of ractangle:";
	cin>>len;
	cout<<"Enter the breadth of ractangle:";
	cin>>bre;
}
void area::getdata()
{
	cout<<"The area of the ractangle:"<<len*bre;
}
int main()     //main function
{
	area a;
	a.setdata();
	a.getdata();
	return 0;
}

