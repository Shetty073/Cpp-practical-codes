#include <iostream.h>
#include <conio.h>

class Geometry
{
    public:
        int area(int a, int b);
        int area(int a);
        int volume(int a);
};

int Geometry::area(int a, int b)
{
    return a*b;
}

int Geometry::area(int a)
{
    return a*a;
}

int Geometry::volume(int a)
{
    return a*a*a;
}

void main()
{
    clrscr();
    Geometry g;
    cout<<"\nThe area of rectangle with length 4 and breadth 3 is = "<<g.area(3,4);
    cout<<"\nThe area of square with side 5 is = "<<g.area(5);
    cout<<"\nThe volume of cube with side 3 is = "<<g.volume(3);
    getch();
}
