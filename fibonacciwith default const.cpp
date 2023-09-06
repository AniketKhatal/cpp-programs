//Program Name:fibonacci series with default constructure;

#include<iostream>
using namespace std;
class fibo{
	public:
	int f1,f2,fib,i;
	fibo() //constructure
	{
		f1=0;
		f2=1;
	}
	void showfibo(int k)  //function to calulate the rest fibo
	{
		for(i=0;i<=k;i++)
		{
			fib=f1+f2;
			f1=f2;
			f2=fib;
			cout<<fib<<endl;
		}
	}
};
int main()     //main function
{
	int k;
	cout<<"Enter the number up to which you ant to print the fibo:";
	cin>>k;
	fibo f;  //class object 
	f.showfibo(k);  //call functions
	return 0;
}

