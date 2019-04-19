#include <iostream.h>
#include <conio.h>

template <class T>
class Greatest
{
    T a,b,c;
    public:
        Greatest(T p, T q, T r)
        {
            a=p;
            b=q;
            c=r;
        }
        void greatCheck()
        {
            if(a>b) {
                if(a>c) {
                    cout<<"\n"<<a<<" is the greatest number";
                }
                else
                {
                    cout<<"\n"<<c<<" is the greatest number";
                }  
            }
            else if(b>c) {
                cout<<"\n"<<b<<" is the greatest number";
            }
            else
            {
                cout<<"\n"<<c<<" is the greatest number";
            }  
        }
};

void main()
{
    clrscr();
    Greatest <float> g1(2.4, 6.5, 9.3);
    Greatest <int> g2(43,32,55);
    g1.greatCheck();
    g2.greatCheck();
    getch();
}
