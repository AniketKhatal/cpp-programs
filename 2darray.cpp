//Program Name:wap to create the class name as printmatrix with two methods void
//accepttwodarray(int a[][] and show matrix()

#include<iostream>
using namespace std;
class  printmetrix{
	public:
		int a[3][3],i,j;
	public:
		void accept2darray(int x[3][3])
		{
			for(i=0;i<3;i++)
			{
				for(j=0;j<3;j++)
				{
					a[i][j]=x[i][j];
				}
			}
		}
		void showmatrix()
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
	int i,j,z[3][3];
	printmetrix p;
	cout<<"Enter the data into array:"
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			cin>>z[i][j];
		}
	}
	p.accept2darray(z);
	p.showmatrix();
	return 0;
}

