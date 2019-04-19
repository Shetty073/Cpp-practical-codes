#include <iostream.h>
#include <conio.h>

class Shape
{
    protected:
    double x, y;
    public:
        void getData(double i, double j)
        {  
            x = i;
            y = j;
        }  
        virtual void displayArea(void)
        {
            cout<<"\nBase class displayArea() empty";
        }
};

class Triangle : public Shape
{
    public:  
        void displayArea()
        {
            cout<<"Triangle with height ";
            cout<<x<< " and base " <<y;
            cout<<" has an area of ";
            cout<<((x*y)/2)<< "\n";
        }
};

class Rectangle : public Shape
{
    public:  
        void displayArea()
            {  
                cout<<"Rectangle with length ";
                cout<<x<<" and breadth "<<y;
                cout<<" has an area of ";
                cout<<x*y<<"\n";
            }
};

void main()
{
    double a,b;
    Shape *s;
    Triangle t;
    Rectangle r;

    cout<<"\nEnter the base and height of triangle: ";
    cin>>a>>b;
    s = &t;
    s->getData(a, b);
    s->displayArea();

    cout<<"\nEnter the length and breadth of rectangle: ";
    cin>>a>>b;
    s = &r;
    s->getData(a, b);
    s->displayArea();

    getch();
}
