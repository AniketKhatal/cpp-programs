//Program Name:

#include<iostream>
using namespace std;
struct emp{
	int fieldid,sal;
	char name[50];
}e[3];
int main()     //main function
{
	int i;
	cout<<"Enter the data of the employee:";
	for(i=0;i<3;i++)
	{
		cout<<"\nEnter the field id : "<<endl;
		cin>>e[i].fieldid;
		_flushall();
		cout<<"Enter the name :"<<endl;
		gets(e[i].name);
		cout<<"Enter the salary:"<<endl;
		cin>>e[i].sal;
	}
	cout<<"\n The overall data of the employee:";
	cout<<"\n"<<"Field id"<<"\t"<<"Name"<<"\t"<<"salary";
	for(i=0;i<3;i++)
	{
		cout<<"\n"<<e[i].fieldid<<"\t"<<e[i].name<<"\t"<<e[i].sal<<endl;
	}
	cout<<"\nData of emp arrange in desc order wrt salary";
	for(i=0;i<3;i++)
	{
		for(int j=i+1;j<3;j++)
		{
			if(e[i].sal<e[j].sal)
			{
				emp temp=e[i];
				e[i]=e[j];
				e[j]=temp;
			}
		}
	}
	for(i=0;i<3;i++)
	{
		cout<<"\n"<<e[i].fieldid<<"\t"<<e[i].name<<"\t"<<e[i].sal<<endl;
	}
	return 0;
}

