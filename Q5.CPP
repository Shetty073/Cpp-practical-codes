#include<iostream.h>
#include<conio.h>
#include<fstream.h>

class Employee
{
  public:
	char name[50];
	int age;
	float salary;

	void getDetails()
	{
	  cout<<"\nEnter employee name: ";
	  cin>>name;
	  cout<<"Enter employee age: ";
	  cin>>age;
	  cout<<"Enter employee salary: ";
	  cin>>salary;
	}
};

void main()
{
  clrscr();
  Employee e1,e2,e3,e4,e5;
  cout<<"\nEmployee 1:";
  e1.getDetails();
  cout<<"\nEmployee 2:";
  e2.getDetails();
  cout<<"\nEmployee 3:";
  e3.getDetails();
  cout<<"\nEmployee 4:";
  e4.getDetails();
  cout<<"\nEmployee 5:";
  e5.getDetails();
  ofstream enterdet("employee.txt");
  enterdet<<e1.name<<"\n"<<e1.age<<"\n"<<e1.salary<<endl;
  enterdet<<e2.name<<"\n"<<e2.age<<"\n"<<e2.salary<<endl;
  enterdet<<e3.name<<"\n"<<e3.age<<"\n"<<e3.salary<<endl;
  enterdet<<e4.name<<"\n"<<e4.age<<"\n"<<e4.salary<<endl;
  enterdet<<e5.name<<"\n"<<e5.age<<"\n"<<e5.salary<<endl;
  enterdet.close();
  ifstream readdet("employee.txt");
  cout<<"\nDisplaying emplloyee details from file employee.txt: "<<endl;
  while(!readdet.eof())
  {
    char ch;
    readdet.get(ch);
    if(!readdet.eof())
    {
      cout<<ch;
    }
  }
  readdet.close();
  getch();
}