//Program Name:multiple inheritence
//to calculate the percentage :two class 1st=academic
//2nd:sport ,3rd :result
#include<iostream>
using namespace std;
class academic{
	protected:
		int *arr;
		public:
			void setmarks(int marks[])
			{
				arr=marks;
			}
};
class sport{
	protected:
		int per;
		public:
			void getper(int per)
			{
				this->per=per;
			}
};
class result:public academic,public sport{
	public:
		void getres()
		{
		
	int agg=0;
	for(int i=0;i<6;i++)
	{
		agg=agg+*arr;
	}
	cout<<agg;
	int percen=agg/6;
	cout<<percen;
	cout<<"The final percentage is that:"<<percen+per;
}
};
int main()
{
	result r;
	int subarr[6];
	cout<<"Enter the subject marks:";
	for(int i=0;i<6;i++)
	{
		cin>>subarr[i];
	}
	r.setmarks(subarr);
	r.getper(5);
	r.getres();
	return 0;
}

