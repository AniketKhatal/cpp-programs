//Program Name:Array of pointer;

#include<iostream>
using namespace std;
class shop{
	int id;
	float price;
	public:
		void setdata(int a,float b)
		{
			id=a;
			price=b;
		}
		
		void getdata(void){
			cout<<"\nCode of these item is:"<<id<<"\n Price of the item is:"<<price;
		}
};
int main()     //main function
{
	int p,i,size;
	float q;
	cout<<"Enter the size :";
	cin>>size;
	
	shop *ptr=new shop[size];
	for(i=0;i<size;i++)
	{
		cout<<"\nEnter the id and the price of the items:";
		cin>>p>>q;
		(*ptr).setdata(p,q);
		ptr++;
	}
	ptr=ptr-size;
	for(i=0;i<size;i++)
	{
		//cout<<"\nThe item id and price is:";
		ptr->getdata();
		ptr++;
	}
	return 0;
}

