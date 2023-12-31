//Program Name:roman string to integer;

#include <iostream>
using namespace std;

//Function to retrun value of roman symbols
int value(char roman)
{
 switch(roman)
 {
    case 'I':return 1;
   case 'V':return 5;
   case 'X':return 10;
   case 'L':return 50;
   case 'C':return 100;
   case 'D':return 500;
   case 'M':return 1000;
 }
}

//Function to convert Roman Numerals to Integer
int romanToInt (string A)
{
int i, n, ans=0, p=0;
n=A.length()-1;

for( i=n; i>=0; i--)
{
 if( value(A[i]) >= p)
  ans = ans + value(A[i]);
 else
  ans = ans - value(A[i]);

p = value(A[i]);
}
return ans;
}

//Main Function
int main() {

  string s;
  int num;
  cout<<"Enter the Roman String in Upper case:";
  cin>>s;
  num=romanToInt(s);
  cout<<"Integer number is:"<<num<<"\n";
  return 0;
}
