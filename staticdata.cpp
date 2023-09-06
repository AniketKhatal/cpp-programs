//Program Name:static data members in cpp

#include<iostream>
using namespace std;
class emp{
	int id;
	static int count;
	public:
		void setdata()
		{
			cout<<"Enter the id"<<"\n";
			cin>>id;
			count++;
		}
		void getdata()
		{
			cout<<"The id of the employee is " <<id<<"and this is emp number "<<count<<"\n";
		}
		static void getcount()
		{
			cout<<"The value of count is "<<count<<"\n";
		}
};
int emp::count=100;
int main()     //main function
{
	emp ani,rambhau,dagdushet;
	ani.setdata();
	ani.getdata();
	emp::getcount();
	
	rambhau.setdata();
	rambhau.getdata();
	emp::getcount();
	
	dagdushet.setdata();
	dagdushet.getdata();
	emp::getcount();
	return 0;
}

