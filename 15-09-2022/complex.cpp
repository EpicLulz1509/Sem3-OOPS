#include<iostream>
using namespace std;


class complex{
    int real;
    int img;

    public:
        complex(){
            cout<<"Default Constructor"<<endl;
            cout<<"Enter complex and imaginary: ";
            cin >> real >> img;
            cin >> img;
        }
        complex(complex &x){
            cout<<"Copy constructor"<<endl;
            real = x.real;
            img = x.img;
        }
        complex(int m,int n){
            cout<<"Parameterized constructor"<<endl;
            real = m;
            img = n;
        }

        ~complex(){
            cout<<"Deleting...\n"<<endl;
        }

        void display(){
            cout<<"Complex: "<<real<<" + "<<img<<"i\n"<<endl;
        }
};


int main(){
    complex a;
    a.display();

    {
        complex b(a);
        b.display();
    }
    
    complex c(3,5);
    c.display();
}