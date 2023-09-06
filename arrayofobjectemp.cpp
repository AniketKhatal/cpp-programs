//Program Name:

#include<iostream>
#include<stdlib.h>
#include<string.h>
using namespace std;
class emp{
	private:
		int id;
		char name[20];
	public:
		void setdata(char n[],int i){
			strcpy(name,n);
			id=i;
		}
		void show()
		{
			cout<<name<<"\t"<<id<<"\n";
		}
};
int main()     //main function
{
	emp *em;//array of object
	int size,id,i;
	char name[20];
	cout<<"\nHow much employee data u required\n";
	cin>>size;
	em=(emp*)malloc(sizeof(emp)*size);
	for(i=0;i<size;i++)
	{
		cout<<"\nEnter the name and id of the employee\n";
		cin>>name>>id;
		em[i].setdata(name,id);
	}
	cout<<"\nDisplay all emp details\n";
	for(i=0;i<size;i++)
	{
		em[i].show();
	}
	return 0;
}

