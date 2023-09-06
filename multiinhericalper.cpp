//Program Name: p

#include<iostream>
using namespace std;
class Per{
	public:
	 float percen;
	Per(int x[],int size)
	{
		int sum=0;
		for(int i=0;i<size;i++)
		{
			sum=sum+x[i];
		}
		cout<<"The total sum is:"<<sum;
		 percen=sum/size;
	}
};
class cse:public Per
{
	public:
	cse(int x[],int size):Per(x,size)
	{
		cout<<"\nThe per of cse:"<<percen;
	}
};
class etc: public Per
{
	public:
		etc(int x1[],int size1):Per(x1,size1)
		{
			cout<<"\nThe per of etc:"<<percen;
		}
};
int main()
{
	int size,x[6];
		cout<<"Enter the no subject:";
		cin>>size;
		cout<<"Enter the subject marks:";
		for(int i=0;i<size;i++)
		{
			cin>>x[i];
		}
		cse c(x,size);
		int size1,x1[6];
		cout<<"\nEnter the no of sub of etc:";
		cin>>size1;
		cout<<"\nEnter the sub marks:";
		for(int i=0;i<size1;i++)
		{
			cin>>x1[i];
		}
		etc(x1,size1);
}

