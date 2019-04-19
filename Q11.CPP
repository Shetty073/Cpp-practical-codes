#include <iostream.h>
#include <conio.h>
#include <fstream.h>

class Filedemo
{
    char wrd[30];
    char str[80];
    int words;
    int lines;
    public:
        Filedemo()
        {
            words=0;
            lines=0;
        }
        void readWords();
        void readLines();
        void showCount();
};

void Filedemo::readWords()
{

    ifstream fin;
    fin.open("myfile.txt");
    while(!fin.eof())
    {
        fin>>wrd;
        words++;
    }
    fin.close();
}

void Filedemo::readLines()
{

    ifstream fin;
    fin.open("myfile.txt");
    while(!fin.eof())
    while(!fin.eof())
    {
        fin.getline(str,80);
        lines++;
    }
    fin.close();
}

void Filedemo::showCount()
{
    cout<<"Total number of words in file = "<<words;
    cout<<"\nTotal number of lines in file = "<<lines;
}

void main()
{
    clrscr();
    Filedemo f;
    f.readWords();
    f.readLines();
    f.showCount();
    getch();
}
