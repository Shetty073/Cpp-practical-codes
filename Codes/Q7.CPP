#include <iostream.h>
#include <conio.h>

class Complex
{
    int p, q;
    public:
        Complex()
        {
            p=0;
            q=0;
        }
        Complex(int a, int b)
        {
            p=a;
            q=b;
        }

        void display()
        {
            cout<<p<<"+"<<q<<"i";
        }

        friend Complex add(Complex c1, Complex c2);
};

Complex add(Complex c1, Complex c2)
{
    Complex temp;
    temp.p = c1.p + c2.p;
    temp.q = c1.q + c2.q;
    return temp;
}

void main()
{
    clrscr();
    Complex c1(2,3), c2(3,5), c3;
    cout<<"\nc1=";
    c1.display();
    cout<<"\nc2=";
    c2.display();
    c3 = add(c1, c2);
    cout<<"\nc1+c2=";
    c3.display();
    getch();
}
