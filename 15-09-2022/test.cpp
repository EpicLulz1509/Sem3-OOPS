#include<iostream>
using namespace std;
class complex
{
    private:
    int real;
    int imaginary;
    public:
    complex()
    {
        real = 8;
        imaginary =3;
        cout<<"complex no : "<<real<<"+"<<imaginary<<"i"<<endl;
    }
    complex(int r,int im)
    {
        real = r;
        imaginary = im;
        cout<<"complex no : "<<real<<"+"<<imaginary<<"i"<<endl;
    }
    complex(complex &ob)
    {
        real = ob.real;
        imaginary = ob.imaginary;
        cout<<"complex no : "<<real<<"+"<<imaginary<<"i"<<endl;
    }
    ~complex()
    {
        cout<<"destructor is invoked"<<endl;
    }
};
    int main()
    {
        complex complex1(7,8);
        complex complex2=complex1;
        return 0;
    }