//Program Name:Abstarct class ,method overring ,runtime polymorphism;s

#include<iostream>
using namespace std;
class bank{
	protected:
		int amt,year;
	public:
	 virtual void fd(int amt,int year)=0;
	
};
class sbi:public bank{
	
	public:
		
		void fd(int amt,int year){
			
			float ma=amt*(1+5/100*year)*100;
			float res=ma;
			cout<<"Result:\t"<<res;
		}
};
class canara:public bank{
	public:
		public:
		
		void fd(int amt,int year){
			
			float ma=amt*(1+7/100*year)*100 ;
			float res=ma;
			cout<<"\nResult:\t"<<res;
		}
		
};
int main()     //main function
{
	/*
	sbi s1;                                     
	s1.fd(1200,5);
	canara c1;
	c1.fd(8000,1);*/
	bank *b=new sbi();
	b->fd(1200,5);
	b=new canara();
	b->fd(8000,1);
 
}
 
