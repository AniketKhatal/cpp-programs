//Program Name:Pass array as argument:
//sum of array element number;
#include<iostream>
using namespace std;
class sum{
	int *ptr;
	public:
		sum(int a[])
		{
			ptr=a;
		}
	
		getsum()
		{
			int s=0;
			for(int i=0;i<5;i++)
			{
				s=s+ptr[i];
			}
			return s;
		}
};

int main()     //main function
{
	int a[5],i;
	cout<<"Enter the element of the array:";
	for(i=0;i<5;i++)
	{
		cin>>a[i];
	}
	 
	sum x(a);
	int res=x.getsum();
	cout<<"The sum of the element of the array:"<<res;
	return 0;
}

