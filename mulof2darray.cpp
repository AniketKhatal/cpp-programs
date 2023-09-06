//Program Name:2d array multiplication;

#include<iostream>
using namespace std;
class printmatrix{
	int a[3][3],i,j;
	public:
		void setdata(int x[3][3])
		{
			for(i=0;i<3;i++)
			{
				for(j=0;j<3;j++)
				{
					a[i][j]=x[i][j];
				}
			}
		}
		void getdata()
		{
			for(i=0;i<3;i++)
			{
				for(j=0;j<3;j++)
				{
					cout<<a[i][j]<<"\t";
				}
				cout<<"\n";
			}
		}
};
int main()     //main function
{
	printmatrix p;
	int z[3][3],y[3][3],w[3][3];
	cout<<"Enter the data of 1st array:";
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			cin>>z[i][j];	
		}
	}
	cout<<"\nEnter the data into 2nd array:";
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			cin>>y[i][j];
		}
	}
	cout<<"\nLets multiplication of array:\n";
	int i,j,k;
	for(int i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			w[i][j]=0;
			for(int k=0;k<3;k++)
			{
			w[i][j]=w[i][j]+z[i][j]*y[i][j];	
			}	
		}
	}
	p.setdata(w);
	p.getdata();
	return 0;
}

