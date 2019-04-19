#include <iostream.h>
#include <conio.h>

class Matrix2;
class Matrix1
{
    int m1[3][3];
    public:
        void getMatrix1();
        friend void addMat(Matrix1, Matrix2);
};

class Matrix2
{
    int m2[3][3];
    public:
        void getMatrix2();
        friend void addMat(Matrix1, Matrix2);
};

void Matrix1::getMatrix1()
{
    int i,j;
    cout<<"\nEnter matrix1: ";
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            cin>>m1[i][j];
        }
    }
    cout<<"Matrix1: ";
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            cout<<m1[i][j]<<" ";
        }
    }
}

void Matrix2::getMatrix2()
{
    int i,j;
    cout<<"\nEnter matrix2: ";
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            cin>>m2[i][j];
        }
    }
    cout<<"Matrix2: ";
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            cout<<m2[i][j]<<" ";
        }
    }
}

void addMat(Matrix1 mat1, Matrix2 mat2)
{
    cout<<"\nMatrix1 + Matrix2: ";
    int sum[3][3];
    int i,j;
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            sum[i][j]=mat1.m1[i][j]+mat2.m2[i][j];
        }
    }
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            cout<<sum[i][j]<<" ";
        }
    }
}

void main()
{
    clrscr();
    Matrix1 m1;
    Matrix2 m2;
    m1.getMatrix1();
    m2.getMatrix2();
    addMat(m1,m2);
    getch();
}
