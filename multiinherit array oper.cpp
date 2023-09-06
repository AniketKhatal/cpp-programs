//Program Name:Array Operation using multiple inheritance;
//soring,insertion,deletion,reverse;
#include<iostream>
using namespace std;
class array{
	protected:
	int *ptr;
	public:
	void setarr(int a[])
	{
		ptr=a;
	}
};
class sort:public array{
	public:
		void sort1()
		{
			//cout<<"hi";
		int temp=0;
		for(int i=0;i<5;i++)
		{
			for(int j=i+1;j<5;j++)
			{
				if(ptr[i]>ptr[j])
				{//cout<<"hii";
				temp=ptr[i];
				ptr[i]=ptr[j];
				ptr[j]=temp;
				}
			}
		}
		cout<<"\nThe array after sorting:";
		for(int i=0;i<5;i++)
		{
			cout<<ptr[i]<<"\n";
		}
		}
};
class rev:public array{
	public:
		void reverse()
		{
	
		int len,temp,end,mid,i;
		len=sizeof(ptr)/sizeof(ptr[i]);
		cout<<"\n Len of array:"<<len;
		mid=len/2;
		end=len-1;
		for(int i=0;i<mid;i++)
		{
			temp=ptr[i];
			ptr[i]=ptr[end];
			ptr[end]=temp;
			end--;
		}
		cout<<"\nThe array after the reverse operation:";
		for(int i=0;i<len;i++)
		{
			cout<<ptr[i];
		}
		}
};
int main()     //main function
{

	int a[5];
	cout<<"Enter the elemnt into the array:";
	for(int i=0;i<5;i++)
	{
		cin>>a[i];
	}
	sort s;
	s.setarr(a);
	s.sort1();
	rev r;
	r.setarr(a);
	r.reverse();
	
	return 0;
}

