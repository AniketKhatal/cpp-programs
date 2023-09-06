//Program Name:
//S.I. = (P × R × T)/100, where P = Principal,
// R = Rate of Interest in % per annum, and T = Time, .
#include<iostream>
using namespace std;
class interest{
	protected:
	int pamt,irate,dur;
	public:
		void setPRD(int pamt,int irate,int dur)
		{
			this->pamt=pamt;
			this->irate=irate;
			this->dur=dur;
		}
};
class calinterest:public interest{
	public:
		void show()
		{
			cout<<"\nThe pri amt is :"<<pamt;
			cout<<"\nThe rate of interset is:"<<irate;
			cout<<"\nThe duration is the :"<<dur;
		}
		int cal()
		{
				float si;
				si=(pamt*irate*dur)/100;
				return si;	
		}
};
int main()     //main function
{
	int amt,rate,dura;
	cout<<"Enter the pri amount,rate of interest ,duration:";
	cin>>amt>>rate>>dura;
	calinterest c;
	c.setPRD(amt,rate,dura);
	c.show();
	float res=c.cal();
	cout<<"\n The simple interest is:"<<res;
	return 0;
}

