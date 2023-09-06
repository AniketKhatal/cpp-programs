//Program Name:

#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
	class Employee
	{ private:
	  int id;
	  char name[90];
	  public:
	  void setData(char n[],int i){
	    strcpy(name,n);
	    id=i;
	  }
	  void show(void)
	  { cout<<name<<"\t"<<id<<"\n";
	  }
	};
	int main()
	{   
	
	   Employee emp,*obj;
	   obj=&emp; //array of object
	
	   obj->setData("ABC",1);
	   obj->show();
	   return 0;
	}

