#include <iostream.h>
#include <conio.h>


class Demo
{
    int n;
    void readNo();
    public:
        void factorial();
        void reverseNo();
        void isPalindrome();
        void isArmstrong();
};

void Demo::readNo()
{
    cout<<"\nEnter an integer value: ";
    cin>>n;
}

void Demo::factorial()
{
    cout<<"\nFactorial";
    readNo();
    int f=1;
    for(int i=1; i<=n; i++)
    {
        f=f*i;
    }
    cout<<"Factorial of "<<n<<" is = "<<f<<endl;
}

void Demo::reverseNo()
{
    cout<<"\nReverse number";
    readNo();
    int n1,d,sum;
    sum=0;
    n1=n;
    while(n1!=0)
    {
        d=n1%10;
        sum=d+(sum*10);
        n1=n1/10;
    }
    cout<<"Reverse of "<<n<<" is = "<<sum<<endl;
    
}

void Demo::isPalindrome()
{
    cout<<"\nPalinrome check";
    readNo();
    int n1,d,sum;
    sum=0;
    n1=n;
    while(n1!=0)
    {
        d=n1%10;
        sum=d+(sum*10);
        n1=n1/10;
    }
    if(sum==n)
    {
        cout<<"The number is palindrome"<<endl;
    }
    else
    {
        cout<<"The number is not palindrome"<<endl;
    }
    
}

void Demo::isArmstrong()
{
    cout<<"\nArmstrong check";
    readNo();
    int n1,d,sum;
    sum=0;
    n1=n;
    while(n1>0)
    {
        d=n1%10;
        sum=sum+(d*d*d);
        n1=n1/10;
    }
    if(sum==n)
    {
        cout<<"The given number is Armstrong"<<endl;
    }
    else
    {
        cout<<"The given number is not Armstrong"<<endl;
    }
    
}

void main()
{
    Demo d;
    d.factorial();
    d.reverseNo();
    d.isPalindrome();
    d.isArmstrong();
    getch();
}
