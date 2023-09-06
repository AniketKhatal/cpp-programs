//Program Name:INheritence mcq
/*
//1
#include<iostream>
using namespace std;
class Base1 {
 public:
     Base1()
     { cout << " Base1's constructor called" << endl;  }
};
  class Base2 {
 public:
     Base2()
     { cout << "Base2's constructor called" << endl;
      }
};
  class Derived: public Base1, public Base2 {
   public:
     Derived()
     {  cout << "Derived's constructor called" << endl; 
     }
};
  
int main()
{
   Derived d;
   return 0;
}

//2
#include <iostream>  
using namespace std;
class Base1 {
 public:
     ~Base1()  { 
         cout << " Base1's destructor" << endl; 
     }
};
    
class Base2 {
 public:
     ~Base2()  { 
          cout << " Base2's destructor" << endl;
      }
};
    
class Derived: public Base1, public Base2 {
   public:
     ~Derived()  { 
         cout << " Derived's destructor" << endl; 
     }
};
    
int main()
{
   Derived d;
   return 0;
}

//3
#include<iostream>
using namespace std;
  
class base {
    int arr[10];
};
  
class b1: public base
 {
 };
  
class b2: public base { 
};
  
class derived: public b1, public b2 {
};
  
int main(void)
{
  cout << sizeof(derived);
  return 0;
}

//4
#include<iostream>
using namespace std;
class P {
public:
   void print()  { 
         cout <<" Inside P";
     }
};
  
class Q : public P {
public:
   void print() { 
         cout <<" Inside Q";
      }
};
  
class R: public Q { };
  
int main(void)
{
  R r; 
  r.print();
  return 0;
}

//5
#include<iostream>
using namespace std;
 class Base  {
 };
 class Derived: public Base{
};
 int main()
{   Base *bp = new Derived;
    Derived *dp = new Base;//[Error] invalid conversion from 'Base*' to 'Derived*' [-fpermissive]
}

//6
#include<iostream>
using namespace std;
 
class Base
{
public:
    void show()
    {
        cout<<" In Base ";
    }
};
 
class Derived: public Base
{
public:
    int x;
    void show()
    {
        cout<<"In Derived ";
    }
    Derived()
    {
        x = 10;
    }
};
 
int main(void)
{
    Base *bp, b;
    Derived d;
    bp = &d;
    bp->show();
    //cout << bp->x;    
    return 0;
}


//7
#include<iostream>
using namespace std;
 
class Base {
public:
    void fun()          {    cout << "Base::fun() called";     }
    void fun(int i)     {   cout << "Base::fun(int i) called";  }
};
 
class Derived: public Base  {
public:
    void fun()   {     cout << "Derived::fun() called";   }
};
 
int main()  {
    Derived d;
    d.Base::fun(5);
    return 0;
}

//8 same as previous
//9
#include <iostream>
#include<string>
using namespace std;
 
class Base
{
public:
    virtual string print() const
    {
        return "This is Base class";
    }
};
 
class Derived : public Base
{
public:
    virtual string print() const
    {
        return "This is Derived class";
    }
};
 
void describe(Base p)
{
    cout << p.print() << endl;
}
//void describe(Derived x)
//{
//    cout << x.print() << endl;
//}
// 
int main()
{
    Base b;
    Derived d;
    describe(b);
    describe(d);
    return 0;
}

//10
#include<iostream>
using namespace std;
 
class Base
{
public :
    int x, y;
public:
    Base(int i, int j){ x = i; y = j; }
};
 
class Derived : public Base
{
public:
    Derived(int i, int j):x(i), y(j) {}
    void print() {cout << x <<" "<< y; }
};
 
int main(void)
{
    Derived q(10, 10);
    q.print();
    return 0;
}

//11
#include<iostream>
using namespace std;
 
class Base
{
protected:
    int a;
public:
    Base() {a = 0;}
};
 
class Derived1:  public Base
{
public:
    int c;
};
 
 
class Derived2:  public Base
{
public:
    int c;
};
 
class DerivedDerived: public Derived1, public Derived2
{
public:
    void show()  {   cout <<  a;  }
};
 
int main(void)
{
    DerivedDerived d;
    d.show();
    return 0;
}

//12
#include<iostream>
using namespace std;
 
class Base1
{
public:
    char c;
};
 
class Base2
{
public:
    int c;
};
 
class Derived: public Base1, public Base2
{
public:
    void show()  { cout << c; }
};
 
int main(void)
{
    Derived d;
    d.show();
    return 0;
}
*/
//13
#include<iostream>
using namespace std;
class A
{
public:
     A(){ cout <<"1";}
     A(const A &obj){ cout <<"2";}
};
 
class B: virtual A
{
public:
    B(){cout <<"3";}
    B(const B & obj){cout<<"4";}
};
 
class C: virtual A
{
public:
   C(){cout<<"5";}
   C(const C & obj){cout <<"6";}
};
 
class D:B,C
{
public:
    D(){cout<<"7";}
    D(const D & obj){cout <<"8";}
};
 
int main()
{
   D d1;
   D d(d1);
}


