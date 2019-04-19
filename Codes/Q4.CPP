#include<iostream.h>
#include<conio.h>
#include<fstream.h>

void main()
{
  clrscr();
  int num[10],i;
  cout<<"\nEnter 10 integer numbers:";
  for(i=0;i<10;i++)
  {
    cin>>num[i];
  }
  ofstream posfile("pos.txt"), negfile("neg.txt");
  for(i=0;i<10;i++)
  {
    if(num[i]>=0)
    {
      posfile<<num[i]<<"\n";
    }
    else
    {
      negfile<<num[i]<<"\n";
    }
  }
  posfile.close();
  negfile.close();
  getch();
}