//Program Name:single level Inheritance;

#include<iostream>
using namespace std;
class auther{
	protected:
	char name[30];
	char address[30];
	int age;
	public:
		void setautherdata()
		{
			cout<<"Enter the data name,address,age :";
			cin>>name>>address>>age;
		}
};
class book:public auther
{
	char name1[30];
	int id;
	int price;
	char pub[90];
	public:
		void setbookdata()
		{
			cout<<"Enter the book details name,price,pub,id :\n";
			cin>>name1>>price>>pub>>id;
		}
		void show()
		{
			cout<<"Auther details:\n";
			cout<<name<<"\t"<<age<<"\t"<<address<<"\n";
			cout<<"Book details:\n";
			cout<<id<<"\t"<<name<<"\t"<<pub<<"\t"<<price<<"\n";
		}
};
int main()     //main function
{
	book b;
	b.setautherdata();
	b.setbookdata();
	b.show();
	return 0;
}



























