//Program Name:check anagram using the abstract cclass method;

#include<iostream>
using namespace std;
class operation{
	protected:
		char str1[10],str2[10];
	public:
		virtual void checkanagram(char str1[],char str2[])=0;
};
class anagram:public operation{
	public:
		void checkanagram(char str1[],char str2[])
		{
			int count=0,count1=0;
			while(str1[count]!='\0')
			{
				count++;
			}
			cout<<"\nstr1 length:"<<count;
			
			while(str2[count1]!='\0')
			{
				count1++;
			}
			cout<<"\nstr2 length:"<<count1;
			
			for(int i=0;i<count;i++)
			{
				for(int j=i+1;j<count1;j++)
				{
					if(str1[i]>str1[j])
					{
						char temp=str1[i];
						str1[i]=str1[j];
						str1[j]=temp;
					}
				}
			}
			cout<<"\n the sorted string str1:"<<str1;
			
			for(int i=0;i<count1;i++)
			{
				for(int j=0;j<count1;j++)
				{
					if(str2[i]>str2[j])
					{
						char temp1=str2[i];
						str2[i]=str2[j];
						str2[j]=temp1;
					}
				}
			}
			cout<<"\n the sorted string str2:"<<str2;
			int flag=0;
			for(int i=0;i<count;i++)
			{
				if(str1[i]==str2[i])
				{
					flag=1;
					break;
				}
			}
			if(flag)
			{
				cout<<"\nstring is anagram";
			}
			else
			{
				cout<<"\nstring is not anagram";
			}
		}
};
int main()     //main function
{
	char str1[10],str2[10];
	cout<<"Enter the string 1:";
	cin>>str1;
	cout<<"\nEnter the string 2:";
	cin>>str2;
	operation *o=new anagram();
	
	o->checkanagram(str1,str2);
	return 0;
}

