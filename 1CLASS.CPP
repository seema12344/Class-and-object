// A Program in C++ to represent the use of Class and Object

#include<iostream.h>
#include<conio.h>

class Student
{
private:
       int Roll_No;
public:
       void getdata()
       {
	  cin>>Roll_No;
       }
      void displaydata()
       {
	  cout<<"Roll No.="<< Roll_No;
       }
 }s1, s2;


void main()
{
   clrscr();
   cout<<"\nObject S1";
   cout<<"\nEnter Roll No.:";
   s1.getdata();
   s1.displaydata();
   cout<<"\n\nObject S2";
   cout<<"\nEnter Roll No.:";
   s2.getdata();
   s2.displaydata();
  getch();
}
