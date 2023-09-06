//Program Name:WAP to calulate current ,Resistance and voltage;

#include<iostream>
using namespace std;
class calculate{
	float i,v,r;
	public:
		float calcurretent(float v,float r)
		{
			float i=v/r;
			//cout<<"The curretnt is :"<<i;
			return i;
		}
		float calvolte(float c,float r)
		{
			float v=i*r;
			//cout<<"The Volte is:"<<v;
			return v;
		}
		float calresis(float c,float v)
		{
			float r=c*v;
			//cout<<"The resistance:"<<r;
			return r;
		}
};

int main()     //main function
{
	int ch,num;
	calculate x;
	do
	{
	cout<<"1.Calulate the current:"<<"\n"<<"2.Calculate the voltage:"<<"\n"<<"3.calulate the Resistance:";
	cout<<"\nEnter Your choice:";
	cin>>ch;
	
	
		switch(ch)
		{
			case 1:
				{
				float v,r;
				cout<<"\nEnter the value of voltage and resiatnce: ";
				cin>>v>>r;
				//x.calcurretent(v,r);
			//	float res1=x.calcurretent(v,r);
				cout<<"The curretnt is :"<<x.calcurretent(v,r);
			break;
		}
			case 2:
				{
			
				float c1,v1;
				cout<<"\nEnter the value of voltage and resiatnce: ";
				cin>>c1>>v1;
				//x.calresis(c1,v1);
				//float res=x.calresis(c1,v1);
				cout<<"The Volte is:"<<x.calresis(c1,v1);
			break;
		}
			case 3:
				{
		
				float c2,v2;
				cout<<"\nEnter the value of voltage and resiatnce: ";
				cin>>c2>>v2;
				//x.calcurretent(c2,v2);
				//float res3=x.calcurretent(c2,v2);
				cout<<"The resistance:"<<x.calcurretent(c2,v2);
			break;
		}
			default:
				cout<<"\nInvalid choice";
		}
		cout<<"\nDo you want to continue:";
		cin>>num;	
	}
	while(num==1);
	return 0;
}

