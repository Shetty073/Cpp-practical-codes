#include <iostream.h>
#include <conio.h>

class Number
{
    int n;
    public:
        void getNumber()
        {
            cout<<"\nEnter an integer value: ";
            cin>>n;
        }
        int returnNumber()
        {
            return n;
        }
};

class Square: public Number
{
    public:
        void squared()
        {
            int num = returnNumber();
            cout<<"Square of the number: "<<(num*num);
        }
};

class Cube: public Number
{
    public:
        void cubed()
        {
            int num = returnNumber();
            cout<<"Cube of the number: "<<(num*num*num);
        }
};

void main()
{
    clrscr();
    Square s;
    Cube c;
    s.getNumber();
    s.squared();
    c.getNumber();
    c.cubed();
    getch();
}
