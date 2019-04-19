#include <iostream.h>
#include <conio.h>

template <class T>
void exchange(T &a, T &b)
{
    T temp;
    temp=a;
    a=b;
    b=temp;
}

void main()
{
    clrscr();

    int x,y;
    float p,q;
    cout<<"Enter two integer values: ";
    cin>>x>>y;
    cout<<"Enter two float values: ";
    cin>>p>>q;

    cout<<"\nBefore exchange: ";
    cout<<"\nx="<<x;
    cout<<"\ny="<<y;
    exchange(x,y);
    cout<<"\nAfter exchange: ";
    cout<<"\nx="<<x;
    cout<<"\ny="<<y;

    cout<<"\n\nBefore exchange: ";
    cout<<"\np="<<p;
    cout<<"\nq="<<q;
    exchange(p,q);
    cout<<"\nAfter exchange: ";
    cout<<"\np="<<p;
    cout<<"\nq="<<q;

    getch();
}
