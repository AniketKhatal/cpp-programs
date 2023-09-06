//Program Name:
/*
#include<iostream>
using namespace std;
int main()     //main function
{
	int a;
	cout<<"Entre the number:";
	cin>>a;
	cout<<"The value of the a:"<<a;
	return 0;
}

//reverse number
#include<iostream>
using namespace std;
int main()
{
	int num;
	cout<<"Enter the number:";
	cin>>num;
	
	int rem,rev;
	while(num>0)
	{
		rem=num%10;
		rev=rev*10+rem;
		num=num/10;
	}
	cout<<"The rev number is:"<<rev;
	return 0;
}

//recursion practice;

#include<iostream>
using namespace std;
int count=0;
int table(int num)//declaration with definition
{
	if(count==10)
	{
		cout<<"Shiv Shambho u r at end";
	}
	else
	{
		count++;
		cout<<num*count<<"\n";
		return table(num);//recursive call;
	}
}
int main()
{
	int n;
	cout<<"Enter the number:";
	cin>>n;
	cout<<"The table of the given number is :";
	table(n);
	return 0;
}

//Pass array as a agrument;

#include<iostream>
using namespace std;
class sum{
	int *ptr;
	public:
		sum(int a[])
		{
			ptr=a;
		}
		getsum()
		{
			int s=0;
			for(int i=0;i<5;i++)
			{
				s=s+ptr[i];
			}
			return s;
		}
};
int main()
{
	int a[5],i;
	cout<<"Enter the element into the array:";
	for(i=0;i<5;i++)
	{
		cin>>a[i];
	}
	sum x(a);
	int res=x.getsum();
	cout<<"The sum of the array elemetn is:"<<res;
	return 0;
}

//call by value n 
#include<iostream>
using namespace std;
void change(int *p)
{
	*p=*p+10;
	cout<<"Pointer value is :"<<*p<<endl;
}
int main()
{
	int num;
	cout<<"Enter the number:";
	cin>>num;
	cout<<"Original value :"<<num<<endl;
	change(&num);
	cout<<"The new value:"<<num<<endl;
	return 0;
}

//call by reference:
#include<iostream>
using namespace std;
int main()
{
	int num;
	cout<<"Enter the value of num:";
	cin>>num;
	int &ref=num;
	cout<<"The value of the reference vari is:"<<ref<<endl;
	cout<<"modification in ref vari:"<<++ref<<endl;
	cout<<"The value after the changes into the ref vari:"<<num;
	return 0;
}
*/
