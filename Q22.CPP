#include <iostream.h>
#include <conio.h>
#include <fstream.h>

void main()
{
    clrscr();
    ifstream fin1, fin2;
    fin1.open("myfile.txt");
    char ch;
    int charcount=0;
    while(!fin1.eof())
    {
        fin1.get(ch);
        charcount++;
    }
    cout<<"\nNo. of characters in the file: "<<charcount;
    fin1.close();

    fin2.open("myfile.txt");
    char word[30];
    int wordcount=0;
    while(!fin2.eof())
    {
        fin2>>word;
        wordcount++;
    }
    cout<<"\nNo. of words in the file: "<<wordcount;
    fin2.close();
    getch();
}
