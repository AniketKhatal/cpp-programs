//Program Name:copy constructure
//object clonning;

#include<iostream>
using namespace std;
class abc{
	int no;
	public:
		abc(int x)
		{
			no=x;
		}
		abc(abc &a) //why we take &a;
		{
			this->no=a.no;
		}
		void show()
		{
			cout<<no<<"\n";
		}
};
int main()     //main function
{
	abc a2(100);
	abc a1(a2);
	cout<<"with first a2 object"<<"\n";
	a2.show();
	cout<<"After opy in a1 object"<<"\n";
	a1.show();
	return 0;
}

