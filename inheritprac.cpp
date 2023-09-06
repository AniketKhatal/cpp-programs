//Program Name:
/*
#include<iostream>
using namespace std;
class percen
{
	public:	
		float per;
	percen(int x[],int size)
	{
		int sum=0;
		for(int i=0;i<size;i++)
		{
			sum=sum+x[i];
		}
		cout<<"Enter the total sum is:"<<sum;
		per=sum/size;
	}
};
class cse:public percen
{
	public:
	cse(int x[],int size):percen(x,size)//constructure
	{
		cout<<"\nThe percntage of the class cse is:"<<per;
	}
};
class etc:public percen
{
	public:
	etc(int x1[],int size1):percen(x1,size1)
	{
		cout<<"\nThe petcentage of the class etc is:"<<per;
	}
};
int main()     //main function
{
	int size,x[10],size1,x1[10];
	cout<<"\nEnter the no of subjet of cse class:";
	cin>>size;
	cout<<"\nEnter the subject marks of the cse :";
	for(int i=0;i<size;i++)
	{
		cin>>x[i];
	}
	cse c(x,size);
	cout<<"\nEnter the no of the subject:";
	cin>>size1;
	cout<<"\nEnter the marks of the subject:";
	for(int i=0;i<size1;i++)
	{
		cin>>x1[i];
	}
	etc e(x1,size1);
	return 0;
}
*/
#include<iostream>
using namespace std;
class academic{
	protected:
		int *arr;
		public:
			void setmarks(int marks[])
			{
				arr=marks;
			}
};
class sport{
	protected:
		int per;
		public:
			void getper(int per)
			{
				this->per=per;
			}
};
class result:public academic,public sport{
	public:
		void getres()
		{
		
	int agg=0;
	for(int i=0;i<6;i++)
	{
		agg=agg+*arr;
	}
	cout<<agg;
	int percen=agg/6;
	cout<<"\n"<<percen;
	cout<<"The final percentage is that:"<<percen+per;
}
};
int main()
{
	result r;
	int subarr[6];
	cout<<"Enter the subject marks:";
	for(int i=0;i<6;i++)
	{
		cin>>subarr[i];
	}
	r.setmarks(subarr);
	r.getper(5);
	r.getres();
	return 0;
}
