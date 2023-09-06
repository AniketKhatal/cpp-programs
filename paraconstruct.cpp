//Program Name:Constructure in cpp;

#include<iostream>
using namespace std;
class power{
	int base,index;
	public:
		power(int base,int index)//constructure declaration;
		{
			this->base=base;
			this->index=index;
		}
		getpower()
		{
			int i,p=1;
			for(i=1;i<=index;i++)
			{
				p=p*base;
			}
			return p;
		}
};
int main()
{
	int base,index,res;
	cout<<"Enter the base and index :";
	cin>>base>>index;
	power p(base,index);
	res=p.getpower();
	cout<<"The power is :"<<res;
	return 0;
}
