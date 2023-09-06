//Program Name:

#include<iostream>
using namespace std;
struct stud
{
	int id;
	char nm[20];
	float per;
};//s[5];
int main()
{
	struct stud s[5];
	int i;
	cout<<"Enter the data into the structure :";
	for(i=0;i<3;i++)
	{
		cin>>s[i].id >>s[i].nm >>s[i].per;
	}
	cout<<"The data of the structure of the student :";
	for(i=0;i<3;i++)
	{
		cout<<"\n"<<s[i].id <<s[i].nm <<s[i].per;
	}
	return 0;
}
