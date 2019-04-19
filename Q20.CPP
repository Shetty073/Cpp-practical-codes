#include <iostream.h>
#include <conio.h>

void main()
{
    clrscr();
    int n1, n2;
    cout<<"\nEnter two numbers: ";
    cin>>n1>>n2;
    try
    {
        if(n1==n2)
        {
            cout<<"\nBoth values are equal";
        }
        else
        {
            throw n1;
        }
        
    }
    catch(int n)
    {
        cout<<"\nError! numbers are not equal";
    }
    getch();
}
