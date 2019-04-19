#include <iostream.h>
#include <conio.h>


class Calculator
{
    int x, y;
    public:
    Calculator(int a, int b)
    {
        x=a;
        y=b;
    }
    void add()
    {
        cout<<"\n"<<x<<"+"<<y<<"="<<(x+y);
    }
    void sub()
    {
        cout<<"\n"<<x<<"-"<<y<<"="<<(x-y);
    }
    void mult()
    {
        cout<<"\n"<<x<<"*"<<y<<"="<<(x*y);
    }
    void div()
    {
        cout<<"\n"<<x<<"/"<<y<<"="<<(x/y);
    }
};

void main()
{
    clrscr();
    int p,q;
    cout<<"\nEnter two integer values: ";
    cin>>p>>q;
    Calculator calc(p, q);
    calc.add();
    calc.sub();
    calc.mult();
    calc.div();
    getch();
}
