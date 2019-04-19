
#include<iostream.h>
#include<conio.h>

template <class T>
void smallest(T arr[10], int size)
{
  int i;
  T small = arr[0];
  for(i=0;i<size;i++)
  {
    if(small>arr[i])
    {
      small=arr[i];
    }
  }
  cout<<"\nSmallest element = "<<small;
}

void main()
{
  clrscr();
  int size=5;
  int numarr[5]={3,5,7,2,9};
  float fltarr[5]={3.5,7.4,3.2,9.8,1.4};
  char chararr[5]={'x','g','z','e','p'};
  cout<<"\nSmallest element in the integer array:";
  smallest(numarr,size);
  cout<<"\nSmallest element in the float array:";
  smallest(fltarr,size);
  cout<<"\nSmallest element in the character array:";
  smallest(chararr,size);
  getch();
}