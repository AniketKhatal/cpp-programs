//Program Name:constructure mcq;
/*
//1
#include<iostream>
using namespace std;
class Point{
	public:
		Point()
		{
			cout<<"construtor call";
		}
};
int main()
{
	Point t1,*t2;
	return 0;
}
*/

//2
#include<iostream>
using namespace std;
class Point
{
    public:
    Point()
    {
     cout<<"Normal constructor called\n";
    }
    Point(const Point &l)
    {
        cout<<"Copy constructor called\n";
    }
};
int main()
{
    Point *t1,*t2;
    t1 = new Point();
    t2=new Point(*t1);
    Point t3=*t1;
    Point t4;
    t4=t3;
    return 0;
}

/*
//6
#include<iostream>
#include<stdlib.h>
using namespace std;
class test{
	public:
		test()
		{
			cout<<"Im constructor";
		}
};
int main()
{
	test *t=(test*)malloc(sizeof(test));
	return 0;
}
/*
//5
#include<iostream>
using namespace std;
class Point
{
      int x,y;
    public:
    Point(int i=0,int j=0)
    {
       x=i;
       y=j;
    }
   int getX() {
     return x;
    }
  int getY()
   { return y;
    }
};
int main()
{
   Point p1;
    Point p2=p1;
cout<<"X ="<<p2.getX()<<"\tY="<<p2.getY();
   return 0;
}
*/


