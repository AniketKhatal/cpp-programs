//Program Name:wap to create the class employee with a given method;

#include<iostream>
#include<string.h>
using namespace std;
class employee{
	public:
	char name[20];
	int id,bas_sal,incsal;
	
		void setperinfo(int i,char nm[],int basicsal)
		{
			id=i;
			strcpy(name,nm);
			bas_sal=basicsal;
		}
		void setprogess(int prog)
		{
			if(prog>=60)
			{
				incsal=bas_sal*30/100;
			}
			else
			{
				incsal=0;
			}
		}
		void show()
		{
			cout<<"\nID="<<id<<"\nName="<<name<<"\nBasic sal="<<bas_sal
			    <<"\nIncreased Sal="<<incsal
				<<"\nTotal Sal="<<incsal+bas_sal;	
		}
		
};
int main()     //main function
{
	employee e;
	int id,sal,progress;
	char name[20];
	cout<<"Enter the id ,name,sal and progress:";
	cin>>id>>name>>sal>>progress;
	e.setperinfo(id,name,sal);
	e.setprogess(progress);
	e.show();
	return 0;
}

