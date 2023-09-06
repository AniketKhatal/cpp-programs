#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>
void check(int[]);  //declaration
void check(char[]);

main()
{
   int a[5],i,choice;
   char str[20];
   cout<<"\n 1. Occurance of Each Integer from Array \n 2. Occurance of each character from string";
   cout<<"\n Enter a choice";
   cin>>choice;
   switch(choice)
   {
       case 1:
		cout<<"\n Enter 5 elements";
		for(i=0;i<5;i++)
		{
		    cin>>a[i];
		}
		   check(a);   //call
		break;
       case 2:
		cout<<"Enter a string";
		gets(str);
		check(str);    //call
		break;
       default:
		 cout<<"\n Invalid Choice";

   }
   cout<<"\n Thank you";
getch();
}
void check(int a[])
{
    int i,temp,j,count=1;
      for(i=0;i<5;i++)
      {
	  for(j=i+1;j<5;j++)
	  {
	      if(a[i]>a[j])
	      {
		  temp=a[i];
		  a[i]=a[j];
		  a[j]=temp;
	      }
	  }
      }
      cout<<"\nElement\t occurance";
      for(i=0;i<5;i++)
      {
	 if(a[i]==a[i+1])
	 {
	      count++;
	 }
	 else
	 {
	    cout<<"\n"<<a[i]<<"\t"<<count;
	    count=1;
	 }
      }
}

void check(char str[])
{
    int l=strlen(str);
    int i,j,count=1;
    char temp;
	for(i=0;i<l;i++)
	 {
	     for(j=i+1;j<l;j++)
	      {
		  if(str[i]>str[j])
		  {
		      temp=str[i];
		      str[i]=str[j];
		      str[j]=temp;
		   }
	      }
	 }
	 cout<<"character\t count";
    for(i=0;i<l;i++)
    {
	 if(str[i]==str[i+1])
	 {
	     count++;
	 }
	 else
	 {
	   cout<<"\n "<<str[i]<<"\t"<<count;
	   count=1;
	 }
    }
}








