//Program Name:Create class with function table and find out the table of enter number;

#include<iostream>
using namespace std;
class table
{
	public:
		findtable(int n)
		{
			int i;
			for(i=1;i<=10;i++)
			{
				cout<<"\n"<<n*i;
			}
		}
};
int main()
{
	int num;
	cout<<"Enter the number :";
	cin>>num;
	cout<<"The table of "<<num;
	table t;
	return t.findtable(num);
}
