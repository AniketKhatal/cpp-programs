//Program Name:ISRO receive
//cieser ciphar;
#include<iostream>
using namespace std;
class decoding{
	public:
		char *decode(char message[])
		{
			for(int i=0;message[i]!='\0';i++)
			{
				if(message[i]==' ')
				{
					message[i+1];
				}
				else
				{
					message[i]=message[i]-2;
				}
			}
			return message;
		}
};
int main()     //main function
{
	char str[50],*message;
	cout<<"Enter the string:";
	gets(str);
	
	decoding d;
	cout<<"The encoded message is:";
	message=d.decode(str);
	cout<<message;
	return 0;
}

