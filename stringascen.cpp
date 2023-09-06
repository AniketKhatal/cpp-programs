//Program Name:arrange sting in ascending oreder;

#include<iostream>
#include<string.h>
using namespace std;
class ascen{
	 char x[20],temp[20];
	public:
		void acceptstr();
		void checkstr();
};
void ascen::acceptstr()
{
	cout<<"Enter the string 1 :";
	gets(x);
	strcpy(temp,x);
}
void ascen::checkstr()
{
	char temp1;
	for(int i=0;x[i]!='\0';i++)
	{
		for(int j=i+1;x[j]!='\0';j++)
		{
			if(x[i]>x[j])
			{
				temp1=x[i];
				x[i]=x[j];
				x[j]=temp1;
			}
		}
	}
	cout<<"The string is in ascending order :"<<x;

}
int main()     //main function
{
	ascen i;
	i.acceptstr();
	i.checkstr();
	return 0;
}
