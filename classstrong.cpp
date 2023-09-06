//Program Name:class with function checkstrong(int) and check the nnumber is strong or not;

#include<iostream>
using namespace std;
class strong{
	public:
		void checkstrong(int num)
		{
			int i,sum=0;
			int temp=num;
			while(num!=0)
			{
				int rem=0,fact=1;
				rem=num%10;
				
				for(i=1;i<=rem;i++)
				{
					fact=fact*i;
				}
				sum=sum+fact;
				num=num/10;
			}
			if(sum==temp)
			{
				cout<<temp<<" is strong number";
			}	
			else
			{
				cout<<temp<<" not strong number";
			}
		}
};
int main()
{
	strong s;
	int n;
	cout<<"Enter the number :";
	cin>>n;
	s.checkstrong(n);	
}

