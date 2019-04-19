#include<iostream.h>
#include<conio.h>
#include<string.h>

class Employee
{
  double salary;
  char name[50];
  public:
	Employee()
	{
	  salary=0;
	  strcpy(name,"unknown");
	}
	Employee(char nm[50], double sal)
	{
	  salary=sal;
	  strcpy(name,nm);
	}
	double getSal()
	{
	  return salary;
	}
	char* getName()
	{
	  return name;
	}
	void incrSal(double inc)
	{
	  salary+=inc;
	}
};
void main()
{
  clrscr();
  // Employee e;
  // cout<<e.getName();
  // cout<<"\n"<<e.getSal();
  Employee e1("Ashish",40000);
  cout<<"\nEmployee name: "<<e1.getName();
  cout<<"\nEmployee salary: "<<e1.getSal();
  e1.incrSal(10000);
  cout<<"\nAfter increment: ";
  cout<<"\nEmployee salary: "<<e1.getSal();
  getch();
}