#include <iostream>
using namespace std;
class Complex
{
    private:
    float real,imag;
    public:
    Complex(float r=0, float i =0)
    {
        real = r;
        imag = i;
    }
    Complex add(Complex C)
    {
        Complex temp;
        temp.real = real+C.real;
        temp.imag = imag+C.imag;
        return temp;
    }
    void display()
    {
        cout<<real<<"+"<<imag<<"i"<<endl;
    }
};
int main()
{

    Complex C1(5,6),C2(3,7);
    Complex C3;
    C3 = C1.add(C2);
    cout<<"Fisrt complex number: ";
    C1.display();
    cout<<"Second complex number: ";
    C2.display();
    cout<<"Sum of the two complex number: ";
    C3.display();
    return 0;
}