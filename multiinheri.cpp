//Program Name:Multiple inheritence;

#include<iostream>
using namespace std;
class Academic{
	protected:
	int *ptr;
	public:
		void setAca(int a[])
		{
			ptr=a;	
		}
};
class Sport{
	protected:
	int marks;
	public:
		void setSport(int m)
		{
			marks=m;
		}
};
class result:public Academic,public Sport{
	protected:
	int aggre,per;
	public:
		int agg()
		{
			aggre=0;
			for(int i=0;i<6;i++)
			{
				aggre=aggre+ptr[i];
			}
			cout<<"The aggregate marks of the student:"<<aggre;
			per=(aggre+marks)/7;
			return per;
		}
};
int main()     //main function
{
	int a[6],smarks,i,res;
	cout<<"Enter the marks of six subject:\n";
	for(i=0;i<6;i++)
	{
		cin>>a[i];
	}
	result r;
	r.setAca(a);
	cout<<"\nEnter the sport marks:";
	cin>>smarks;
	r.setSport(smarks);
	res=r.agg();
	cout<<"\nTHE PERCENTAGE IS :"<<res;
	return 0;
}

