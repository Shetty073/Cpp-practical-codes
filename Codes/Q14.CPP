#include <iostream.h>
#include <conio.h>

template <class T>
void greatest(T arr[10])
{
    T grtelm = arr[0];
    for(int i = 0; i < 10; i++)
    {
        if(arr[i]>grtelm)
        {
            grtelm = arr[i];
        }
    }
    cout<<"\nThe greatest element in the given array is = "<<grtelm<<endl;
}

void main()
{
    clrscr();
    int intarr[10] = {23,54,7,32,99,23,21,55,73,12};
    float floatarr[10] = {2.4,5.2,5.6,5.6,8.9,7.5,2.5,6.6,9.7,5.6};
    char chararr[10] = {'g','e','h','a','b','x','e','t','p','q'};

    cout<<"\nInteger array: ";
    for(int i=0;i<10;i++)
    {
        cout<<intarr[i]<<" ";
    }
    greatest(intarr);

    cout<<"\nFloat array: ";
    for(i=0;i<10;i++)
    {
        cout<<floatarr[i]<<" ";
    }
    greatest(floatarr);

    cout<<"\nCharacter array: ";
    for(i=0;i<10;i++)
    {
        cout<<chararr[i]<<" ";
    }
    greatest(chararr);

    getch();
}
