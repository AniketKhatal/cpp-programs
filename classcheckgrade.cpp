//Program Name:wap to create the class name as student with given methods;

#include<iostream>
using namespace std;
class stud{
	
		int *marks,sum=0,per,i;
		public:
		void setsubmarks(int marks1[])
		{
			marks=marks1;
		}
		
		void calper()
		{
			for(i=0;i<6;i++)
			{
				sum=sum+marks[i];
			}
			per=sum/6;
		}
		
		void checkgrade()
		{
			if(per>75 && per<=100)
				cout<<"voo! passed with distiction\t"<<per;
			else if(per>60 && per<=75)
				cout<<"okk! passed with first class\t"<<per;
			else if(per>50 && per<=60)
				cout<<"Not bad! passed with Second class\t"<<per;
			else if(per>40 && per<=50)
				cout<<"shit :( passed with Third class\t"<<per;
			else
				cout<<"Bro U R fail :(\t"<<per;
		}
};
int main()     //main function
{
	int mark[6],i;
	cout<<"Enter the six subject marks:";
	for(i=0;i<6;i++)
	{
		cin>>mark[i];
	}
	stud s;
	s.setsubmarks(mark);
	s.calper();
	s.checkgrade();
	return 0;
}

