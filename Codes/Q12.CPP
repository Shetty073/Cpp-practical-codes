#include <iostream.h>
#include <conio.h>

class Cities
{
    char city[30];
    public:
        void read();
        void display();
};

void Cities::read()
{
    cin.getline(city,30);
}

void Cities::display()
{
    if(city[0] == 'B' || city[0] == 'C'|| city[0] == 'b'|| city[0] == 'c')
    {
        cout<<city<<" ";
    }
}

void main()
{
    clrscr();
    cout<<"Enter the name of the cities: ";
    Cities c[5];
    for(int i=0; i<5; i++)
    {
        c[i].read();
    }
    cout<<"Cities with name starting from 'B' or 'C': ";
    for(i = 0; i < 5; i++)
    {
        c[i].display();
    }
    getch();
}
