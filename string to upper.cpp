//Program Name:class converttoupper
//two function -1s for accept the string ,2nd-for convert the string;

#include<iostream>
using namespace std;
class converttoupper{
	char *s;
	public:
		void setchararray(char str[])  //function for accepting the string;
		{
			int count=0;
			while(str[count]!=0)  //count the length
			{
				count++;
			}
			cout<<"The length of the string is:"<<count;
			s=new char[count+1];
			s=str; //copy into instance variable
		}
		char *gettoupper()    //function to convert to upper
		{
			for(int i=0;s[i];i++)
			{
				if(s[i]>=97 && s[i]<=122)  //logic to convert into the upper;
				{
					s[i]=s[i]-32;
				}
			}
			return s;  //retun the upper case
		}
};
int main()     //main function
{
	converttoupper c;  //class of object
	char str[50];
	cout<<"Enter the string:";  //taking the input from the user
	gets(str);
	c.setchararray(str);  //pass to the function
	char *str1=c.gettoupper();
	cout<<"\nThe string after the convert:"<<str1;
	return 0;
}

