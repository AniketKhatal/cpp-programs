//Program Name:. WA Program to create class name as product with field id,name and price and
// create array of object using malloc function with the help of pointer and \
//arrange all products in descending order by its price.

#include<iostream>
#include<stdlib.h>
#include<string.h>
using namespace std;
class product{
	public:
	int id;
	char name[20];
	int price;
	public:
		void setdata(int i,char n[],int pri)
		{
			id=i;
			strcpy(name,n);
			price=pri;
		}
		void show()
		{
			cout<<"\n"<<id<<"\t"<<name<<"\t"<<price<<"\n";	
		}
		
};
int main()     //main function
{
	product *p;
	int idd,pr,size;
	char nm[20];
	cout<<"Enter the size :";
	cin>>size;
	p=(product*)malloc(sizeof(product)*size);
	for(int i=0;i<size;i++)
	{
		cout<<"Enter the data:";
		cin>>idd>>nm>>pr;
		p[i].setdata(idd,nm,pr);
	}
	for(int i=0;i<size;i++)
	{
		for(int j=i+1;j<size;j++)
		{
			if(p[i].price>p[j].price)
			{
				product temp=p[i];
				p[i]=p[j];
				p[j]=temp;
			}
		}
	}
	for(int i=0;i<size;i++)
	{
		p[i].show();
	}
	return 0;
}

