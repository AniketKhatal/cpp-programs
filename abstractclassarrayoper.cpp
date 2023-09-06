//Program Name:

#include<iostream>
using namespace std;
class array{
	public:
		virtual void arrayoperation(int a[],int len)=0;
};
class arrrev:public array{
	public:
		void arrayoperation(int a[],int len)
		{
			
			int mid=len/2;
			int end=len-1;
			
			for(int i=0;i<mid;i++)
			{
				int temp=a[i];
				a[i]=a[end];
				a[end]=temp;
				end--;
			}
			for(int i=0;i<len;i++)
			{
				cout<<a[i];
			}
		}
};
class maxi:public array{
	public:
		void arrayoperation(int a[],int len)
		{
			int max=a[0];
			for(int i=0;i<len;i++)
			{
				if(a[i]>max)
				{
					max=a[i];
				}
			}
			cout<<"\nThe max element is:"<<max;
		}
};
class sort:public array{
	public:
		void arrayoperation(int a[],int len)
		{
			for(int i=0;i<len;i++)
			{
				for(int j=i+1;j<len;j++)
				{
					if(a[i]>a[j])
					{
						int temp=a[i];
						a[i]=a[j];
						a[j]=temp;
					}
				}
			}
			cout<<"\nThe sorted array in ascending:";
			for(int i=0;i<len;i++)
			{
				cout<<a[i];
			}
		}
};
class sortdec:public array{
	public:
		void arrayoperation(int a[],int len)
		{
			for(int i=0;i<len;i++)
			{
				for(int j=i+1;j<len;j++)
				{
					if(a[i]<a[j])
					{
						int temp=a[i];
						a[i]=a[j];
						a[j]=temp;
					}
				}
			}
			cout<<"\nThe sorted array in decending:";
			for(int i=0;i<len;i++)
			{
				cout<<"\n"<<"aniket shet zala na copy array :"a[i];
			}
		}
};
class copy1:public array{
	public:
		void arrayoperation(int a[],int len)
		{
			int b[len];
			for(int i=0;i<len;i++)
			{
				b[i]=a[i];
			}
			for(int i=0;i<len;i++)
			{
				cout<<"\t"<<b[i];
			}
		}
};
int main()     //main function
{
	int a[5],i;
	cout<<"Enter the array element:";
	for(i=0;i<5;i++)
	{
		cin>>a[i];
	}
	int len=sizeof(a)/sizeof(a[0]);
	cout<<"lenghtn of the array is:"<<len<<endl;
	array *y=new arrrev();
	y->arrayoperation(a,len);
	y=new maxi();
	y->arrayoperation(a,len);
	y=new sort;
	y->arrayoperation(a,len);
	y=new sortdec;
	y->arrayoperation(a,len);
	y=new copy1();
	y->arrayoperation(a,len);
	return 0;
}

