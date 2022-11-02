#include <iostream>

using namespace std;

class COMPLEX{
public:
    int real,imag,total;
    void input(){
        cout<<"enter the real numbers :";
        cin>>real;
        cout<<"enter the imaginary numbers :";
        cin>>imag;
    }

    friend void sum(COMPLEX c1,COMPLEX c2);


};
void sum(COMPLEX c1, COMPLEX c2){
    int real=c1.real+c2.real;
    int imag=c1.imag+c2.imag;
    cout<<real<<"+"<<imag<<"i";
}




int main(){
    COMPLEX c1,c2;
    c1.input();
    c2.input();
    sum(c1,c2);

    return 0;
}