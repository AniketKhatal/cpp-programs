//Program Name:mcq prac 
/*
#include<iostream>
using namespace std;  
class Empty {};
int main()
{
  cout << sizeof(Empty);
  return 0;
}

#include<iostream>
using namespace std; 
class Test {
	public:
    int x; 
};
int main()
{
  Test t;
  cout << t.x;
  return 0;
}

#include<iostream>
using namespace std; 
class Test
{
    static int x;
    int *ptr;
    int y;
};
 
int main()
{
    Test t;
    cout << sizeof(t) << " ";
    cout << sizeof(Test *);
}

#include <iostream>
class Test
{
public:
    int i;
    void get();
};
void Test::get()
{
    std::cout << "\nEnter the value of i: ";
    std::cin >> i;
}
Test t;  // Global object
int main()
{
    Test t;  // local object
    t.get();
    std::cout << "value of i in local t: "<<t.i<<'n';
	::t.get(); 
    std::cout << "value of i in global t: "<<::t.i<<'n';
    return 0;
}

#include <iostream>
    using namespace std;
    class CDummy
    {
        public:
        int isitme (CDummy& param);
    };
    int CDummy::isitme (CDummy& param)
    {
        if (&param == this)
            return true;
        else
            return false;
    }
    int main ()
    {
        CDummy a;
        CDummy *b = &a;
        if (b->isitme(a)) 
        {
            cout << "execute";
        }
        else
        {
            cout<<"not execute";
        }
        return 0;
    }

#include<iostream>
using namespace std;
class T
{   int no;
    public:
	 void setValue(int x)
	 {  no=x; 	
	 }
	 int getNo(){
	 	return no;
	 }	
};
class Sq
{   public:
	void setT(T *t){
		t->setValue(5);
	}	
};
int main(){
	T t;
	t.setValue(50);
	//cout<<"The number in 1st class :"<<t.getNo();
	Sq s;
	s.setT(&t);
	cout<<"No is "<<t.getNo();
	return 0;
}

#include<iostream>
using namespace std;

class Test
{
    public:	
    void setValue(int a[]){
    	a[1]=100;
	}
};

int main(){
  int a[]={10,20,30,40,50};
  Test t;
  t.setValue(a);
  cout<<"\nDisplay the all values\n";
  for(int i=0; i<5;i++){
  	cout<<a[i]<<"\n";
  }
	return 0;
}

//10;
#include<iostream>
using namespace std;
class Test
{ public:	
    void setValue(int *a){
    	int v=*a;
    	*a=*a+v;
	}
};

int main(){
  int m[]={10,20,30,40,50};
  Test t;
  t.setValue(m);
  cout<<"\nDisplay the all values\n";
  for(int i=0; i<5;i++){
  	cout<<m[i]<<"\n";
  }
	return 0;
}

//11
#include<iostream>
#include<string.h>
using namespace std;
class Test
{   char *c;
    public:	
    void setValue(char ch[]){
      c=ch;
	}
	void test(int index){
		*(c+index)='A';
	}
};

int main(){
  char ch[]={"abcdefghij"};
  Test t;
  t.setValue(ch);
  t.test(4);
  cout<<"\nDisplay the all values\n";
  for(int i=0; i<strlen(ch);i++){
  	cout<<ch[i]<<"\n";
  }
	return 0;
}

//12
#include<iostream>
#include<string.h>
using namespace std;
class Test
{   char *c;
    public:	
    void setValue(char ch[]){
      c=ch;
	}
	void test(){
	   while(*c!='\0'){
	   	 if((*c>='a') &&(*c<=122)){
	   	 	 *c=*c-32;
			}
			c++;
	   }
	}
};

int main(){
  char ch[]={"abcdefghij"};
  Test t;
  t.setValue(ch);
  t.test();
  cout<<"\nDisplay the all values\n";
  for(int i=0;ch[i]!='\0';i++){
  	cout<<ch[i]<<"\n";
  }
	return 0;
}

//13
#include<iostream>
#include<string.h>
using namespace std;

class Employee{
	private:
		int id;
		char name[90];
	public:
		void setId(int id){
			this->id=id;
		}
		int getId(){
			return id;
		}
		void setName(char n[]){
			strcpy(this->name,n);
		}
		char *getName(){
			return name;
		}
};
class Company{
	  Employee *employee;
	public:
		void setEmployee(Employee *employee){
			this->employee=employee;
		}
		void test(){
			employee->setId(1);
			employee->setName("Ram");
		}
};
int main(){
Company c;
Employee *e = new Employee();
e->setId(10);
e->setName("Rajesh");
c.setEmployee(e);
c.test();
cout<<e->getName()<<"\t"<<e->getId()<<"\n";
	return 0;
}

//15
#include<iostream>
using namespace std;
class Add{
	public:
		int a;
		int b;
		void setValue(int x,int y){
			a=x;
			b=y;
		}
		void showAdd(){
			cout<<"Addition is "<<a+b<<"\n";
		}
};
int main(){
 Add *ad = new Add();
 ad->setValue(10,20);
 //ad->showAdd();
 Add *ad1;
 ad1=ad;
 ad1->setValue(5,4);
 ad->showAdd();
	return 0;
}

//16
#include<iostream>
#include<string.h>
using namespace std;
class Add{
    char *ch;
	public:
	void setValue(char ch[]){
     this->ch=ch;
	}
	char *getValue(){
		ch=ch+2;
		*ch='M';
		return (ch-2);
	}
   
};
int main(){
    Add ad;
    char ch[]={"Ramesh"};
    ad.setValue(ch);
    char *c=ad.getValue();
    *c='A';
    cout<<"Display the value\n";
    cout<<ch;
 
 	return 0;
}

//17  recursion I like it
//#include<iostream>
//#include<string.h>
//using namespace std;
//class Test
//{  int sum,no;
//   public:
//   int setValue(int x)
//   {
//   	  sum=0;
//   	  no=x;
//   	  int result=test(x);
//   	  return result;
//   }	
//   int test(int no)
//   {
//       if(no!=0){
//       	sum = sum+no;
//	   
//	   test(--no);
//      }else{
//      	return sum;
//	  }
//   }
//};
//int main(){
//     Test t;
//     int r= t.setValue(10);
//     cout<<"Result is "<<r;
// 	return 0;
//}
//#include<iostream>
//using namespace std;
//int main()
//{
//	int i,sum=0;
//	for(i=0;i<=10;i++)
//	{
//		sum=sum+i;
//	}
//	cout<<"The sum is:"<<sum;
//}

//18
#include<iostream>
#include<string.h>
using namespace std;
class Test
{
	static int x;
	static int y;
	public:
		void setValue(int a,int b){
			x=a;
			y=b;
		}
		void showAdd(){
			cout<<"Addition is "<<x+y<<"\n";
		}
};
int Test::x=0;
int Test::y=0;
int main (){
	Test t;
	t.setValue (10, 20);
	t.showAdd();
	Test t1;
	t1.showAdd ();
 	return 0;
}

//19
 #include<iostream>
#include<string.h>
using namespace std;
class Test
{
	  int x;
  int y;
	public:
		void setValue(int a,int b){
			x=a;
			y=b;
		}
		void showAdd(){
			cout<<"Addition is "<<x+y<<"\n";
		}
};
 
int main(){
	Test t;
	t.setValue(10,20);
	Test t1;
	t1.showAdd();
 	return 0;
}

//21s
#include<iostream>
#include<string.h>
using namespace std;
class Test{
	public:
	void setValue(int x){
			x++;
		}		
}; 
int main(){
  int no=10;
   Test t;
   t.setValue(no);
   cout<<"No is "<<no;
 	return 0;
}

//22
#include<iostream>
#include<string.h>
using namespace std;
class Test{
	public:
		int no;
		int no1;
	void setValue(int no,int no1){
		this->no=no;
		this->no1=no1;
	}
	Test getTest(){
		 no++;
		 no1++;
		return *(this);
		
	}
		
}; 
int main(){
   Test t;
   int no=10;
   int no1=20;
   t.setValue(no,no1);
   Test t1=t.getTest();
   cout<<"No is "<<t1.no<<" "<<t1.no1;
 	return 0;
}

//23
#include<iostream>
#include<string.h>
using namespace std;
class Test{
	 
	 public:
	 	int no;
	 void setValue(Test t){
	 	no=t.no;
	 	show(no);
	 }
	 void show(int x){
	 	if(x!=0){
	 		cout<<x<<"\n";
	 		show(--x);
		 }
	 }
		
}; 
int main(){
    Test t1;
    t1.no=5;
    t1.setValue(t1);
     return 0;
}

//24
#include<iostream>
#include<stdlib.h>
using namespace std;

class Demo{
	public:
	char getChar(){
		return '*';
	}
};
int main(){
    Demo d;
    for(int i=1;i<=5;i++){
    	for(int j=0;j<=5;j++){
    	   if(i<=j)
			cout<<d.getChar();
		}
		cout<<"\n";
	}
 	return 0;
}
*/
//25
#include<iostream>
#include<stdlib.h>
using namespace std;
class Demo{
	int m;
	public:
	Demo *getValue(Demo *d){
	     d->m=d->m+10;
	    return d;
	}
	int getVal(){
		return m;
	}
	int getNum(int m){
		return m;
	}
	void setValue(int no)
	  {  this->m=no;
	  }
	};
int main(){
    Demo d;
    d.setValue(d.getNum(10));
    Demo *d1=d.getValue(&d);
    cout<<"M is "<<d1->getVal();
 	return 0;
}
	
