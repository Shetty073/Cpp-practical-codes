//"In exam we can take one integer value instead of two" - Pranali Miss

#include <iostream.h>
#include <conio.h>

class Class2;
class Class1
{
    int x,y;
    public:
        Class1()
        {
            x=0;
            y=0;
        }
        Class1(int p, int q)
        {
            x=p;
            y=q;
        }
        void display()
        {
            cout<<"\nClass1 members:";
            cout<<"\nx="<<x;
            cout<<"\ny="<<y;
        }
        friend void compare(Class1, Class2);
};

class Class2
{
    int a,b;
    public:
        Class2()
        {
            a=0;
            b=0;
        }
        Class2(int p, int q)
        {
            a=p;
            b=q;
        }
        void display()
        {
            cout<<"\nClass2 members:";
            cout<<"\na="<<a;
            cout<<"\nb="<<b;
        }
        friend void compare(Class1, Class2);
};

void compare(Class1 c1, Class2 c2)
{
    if(c1.x == c2.a && c1.y == c2.b)
    {
        cout<<"\nInstance of Class1 is equal to instance of Class2";
    }
    else if (c1.x > c2.a || c1.y > c2.b)
    {
        cout<<"\nInstance of Class1 is greater than instance of Class2";
    }
    else
    {
        cout<<"\nInstance of class2 is greater than instance of Class1";
    }
}

void main()
{
    clrscr();
    Class1 c1(20,13);
    Class2 c2(23,22);
    c1.display();
    c2.display();
    compare(c1,c2);
    getch();
}
