#include <iostream.h>
#include <conio.h>

class Employee
{
    int emp_id;
    char empname[50];
    public:
        void getEmpinfo()
        {
            cout<<"\nEnter employee name: ";
            cin>>empname;
            cout<<"Enter employee ID: ";
            cin>>emp_id;
        }
        void dispEmpinfo()
        {
            cout<<"\nEmployee name: "<<empname;
            cout<<"\nEmployee ID: "<<emp_id;
        }
};

class Empunion
{
    int memberid;
    public:
        void getMemberid()
        {
            cout<<"Enter member ID: ";
            cin>>memberid;
        }
        void dispMemberid()
        {
            cout<<"\nMember ID: "<<memberid;
        }
};

class Empinfo: public Employee, public Empunion
{
    int basicsalary;
    public:
        void getSal()
        {
            cout<<"Enter basic salary: ";
            cin>>basicsalary;
        }
        void dispSal()
        {
            cout<<"\nBasic salary: "<<basicsalary;
        }
};

void main()
{
    clrscr();
    Empinfo e;
    e.getEmpinfo();
    e.getMemberid();
    e.getSal();
    e.dispEmpinfo();
    e.dispMemberid();
    e.dispSal();
    getch();
}
