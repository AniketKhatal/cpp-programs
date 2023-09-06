//Program Name:

#include<iostream>
using namespace std;
class operation{
	public:
		virtual void mergearray(int a[],int b[])=0;
		virtual void rotatearray(int a[],int z)=0;
};
class adapter:public operation{
	public:
		void mergearray(int a[],int b[])
		{
		}
	    void rotatearray(int a[],int z)
	    {
		}
};
class merge1:public adapter{
	public:
		void mergearray(int a[],int b[])
		{
			int x[10];
			for(int i=0;i<5;i++)
			{
				x[i]=a[i];
			}
			int k=5;
			for(int i=5;i<10;i++)
			{
				x[k]=b[i];
				k++;
			}
			cout<<"\nThe merge array is:";
			for(int i=0;i<10;i++)
			{
				cout<<"\t"<<x[i];
			}
		}
};
int main()     //main function
{
	int a[5],b[5];
	cout<<"Enter the array into 1st array:";
	for(int i=0;i<5;i++)
	{
		cin>>a[i];
	}
	cout<<"\nEnter the array into 2st array:";
	for(int i=0;i<5;i++)
	{
		cin>>b[i];
	}
	operation *o=new merge1();
	o->mergearray(a,b);
	return 0;
}

