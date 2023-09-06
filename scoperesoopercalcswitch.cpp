//Program Name:

#include<iostream>
using namespace std;
class calc{
	public:
		int n1,n2;
		void getdata();
		void setdata();
};
void calc::setdata()
{
	cout<<"Enter the number 1:";
	cin>>n1;
	cout<<"Enter the number 2:";
	cin>>n2;
}
void calc::getdata()
{
	int ch,num,p=1,i;
	cout<<"1.Add"<<"\n"<<"2.Sub"<<"\n"<<"3.Mul"<<"\n"<<"4.Div"<<"\n"<<"5.Power"<<"\n"<<"6.square"<<"\n";
	cout<<"Enter the choice:";
	cin>>ch;
	do{
	
	switch(ch)
	{
		case 1:
			cout<<"The Addition is :"<<n1+n2;
		break;
		
		case 2:
			cout<<"The Substraction is:"<<n1-n2;
		break;
		
		case 3:
			cout<<"The Multiplication is :"<<n1*n2;
		break;
		
		case 4:
			cout<<"The Division is:"<<n1/n2;
		break;
		
		case 5:
			for(i=1;i<=n2;i++)
			{
				p=p*n1;
			}
			cout<<"The power is:"<<p;
		break;
		
		case 6:
			int choice;
			cout<<"Do you want to find the square of n1(1) or n2(2): ";
			cin>>choice;
			switch(choice){
				case 1:
					cout<<"The square of n1:"<<n1*n1;
				break;
				case 2:
					cout<<"The square of n2:"<<n2*n2;
				break;
				default:
					cout<<"C:(";
				}
		break;
		default:
			cout<<"Invalid case:(";
	}
	cout<<"\nDo u want to continue:";
	cin>>num;
}
while(num==1);
}
int main()     //main function
{
	calc c;
	c.setdata();
	c.getdata();
	return 0;
}

