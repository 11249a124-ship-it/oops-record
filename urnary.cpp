#include <iostream>
using namespace std;
class UnaryOp
{
    int x,y,z;
    public:
    UnaryOp()
    {
        x=0;
        y=0;
        z=0;
    }
    UnaryOp (int a,int b,int c)
    {
        x=a,y=b,z=c;
    }
    void display()
    {
        cout<<"\n\n\t"<<x<<" "<<y<<" "<<z;
    }
    void operator-();
};
    void UnaryOp::operator-()
    {
        x=-x;
        y=-y;
        z=-z;
    }
    int main()
    {
        UnaryOp un(10,-40,70);
        cout<<"\n Number are :";
        un.display();
        -un;
        cout<<"\n Numbers after overloaded minus(-) operator:";
        un.display();
        return 0;
    }
