//Program Name:print the maximum number from the given digit;

#include<iostream>
using namespace std;
int main()     //main function
{
	int num,rem=0,max=0;
	cout<<"Enter the number:";
	cin>>num;
	while(num!=0){
		rem=num%10;
		num=num/10;
		if(max<rem){
			max=rem;
		}	
	}
	cout<<"The maximum digit from the number:"<<max;
	return 0;
}

