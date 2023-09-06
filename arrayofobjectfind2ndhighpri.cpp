//Program Name:WA Program to create class name as product 
//with field id,name and price and create array of object 
//using malloc function with the help of pointer 
//and find product 3rd highest price product details

#include<iostream>
#include<stdlib.h>
#include<string.h>
using namespace std;
class product{
	public:
		int id,price;
		char name[20];
	public:
		void setdata(int i,char n[],int p)
		{
			id=i;
			strcpy(name,n);
			price=p;
		}
		void getdata()
		{
			cout<<"\n"<<id<<"\t"<<name<<"\t"<<price<<"\n";
		}
};
int main()     //main function
{
	product *p;
	int ii,pp,size;
	char nn[20];
	cout<<"Enter the size:";
	cin>>size;
	p=(product*)malloc(sizeof(product)*size);
	for(int i=0;i<size;i++)
	{
		cout<<"\nEnter the data:";
		cin>>ii>>nn>>pp;
		p[i].setdata(ii,nn,pp);
	}
	//sort the array
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
		p[i].getdata();
	}
	int kth,x;
	cout<<"Enter the kth highest element:";
	cin>>kth;
	for(int i=0;i<size;i++)
	{
		if((i+1)==kth)
		{
			x=i;
			p[x].getdata();
		}
	}
	//we want to dispaly the kth element when there at kth ele product price is same;

	return 0;
}

