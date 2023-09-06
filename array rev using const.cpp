//Program Name:reverse array using constructure:

#include<iostream>
using namespace std;
class arr{
	int /*r[5]*/*r,j=0,size;
	public:
		arr(int *a,int n)
		{
//			for(int i=0;i<5;i++)
//			{
//				r[j]=a[i];
//				j++;
//			}
			r=a;
			size=n;
		}
		void revarr()
		{
			
			int mid=size/2;
			cout<<"\t"<<mid;
			int end=size-1;
			cout<<"\t"<<end;
			for(int i=0;i<mid;i++)
			{
				//cout<<"\nhi";
				int temp=r[i];
				r[i]=r[end];
				r[end]=temp;
				end--;
			}
			cout<<"\nThe array rev with the help of constructure:";
			for(int i=0;i<size;i++)
			{
				cout<<"\t"<<r[i];
			}	
		}
		
};
int main()     //main function
{
	int a[5],i,n;
	cout<<"Enter the size of array:";
	cin>>n;
	cout<<"Enter the element into the array:";
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	
	arr rr(a,n);
	rr.revarr();
//	cout<<"The array rev with the help of constructure:";
//	for(i=0;i<n;i++)
//	{
//		cout<<"\t"<<a[i];
//	}
	return 0;
}

