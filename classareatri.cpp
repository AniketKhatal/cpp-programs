//Program Name:Create the class name as Ractangle with a given methods and write its logics;

#include<iostream>
using namespace std;
class Ractangle{
	int l,w,res;
	public:
		void setlenwid(int len,int wid) //accept the radius;
		{
			l=len;
			w=wid;
		}
		int showarea()
		{
			res=l*w;
			return res;
		}
};
int main()     //main function
{
	int len,wid,result;
	cout<<"Enter the lenght and width of the triangle :";
	cin>>len>>wid;
	Ractangle r;
	r.setlenwid(len,wid);
//	result=r.showarea();
//	cout<<result;
	cout<<r.showarea();
	//return 0;
}

