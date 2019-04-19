#include <iostream.h>
#include <conio.h>

class Employee
{
    int employee_id;
    char employee_name[50];
    char emp_desig[50];
    float salary;
    public:
        void getEmployee();
        void showGrade();
        void showEmployee();
};

void Employee::getEmployee()
{
    cout<<"Enter employee name: ";
    cin>>employee_name;
    cout<<"Enter employee ID: ";
    cin>>employee_id;
    cout<<"Enter employee designation: ";
    cin>>emp_desig;
    cout<<"Enter employee salary: ";
    cin>>salary;
}

void Employee::showGrade()
{
    if(salary>0 && salary<20000)
    {
        cout<<"\nEmployee grade: D";
    }
    else if(salary>19999 && salary<50000)
    {
        cout<<"\nEmployee grade: C";
    }
    else if(salary>49999 && salary<80000)
    {
        cout<<"\nEmployee grade: B";
    }
    else if(salary>79999)
    {
        cout<<"\nEmployee grade: A";
    }
}

void Employee::showEmployee()
{
    cout<<"\nEmployee name: "<<employee_name;
    cout<<"\nEmployee ID: "<<employee_id;
    cout<<"\nEmployee designation: "<<emp_desig;
    cout<<"\nEmployee salary: "<<salary;
}

void main()
{
    clrscr();
    Employee e;
    e.getEmployee();
    e.showEmployee();
    e.showGrade();
    getch();
}
