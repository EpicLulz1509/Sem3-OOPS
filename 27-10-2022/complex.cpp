#include <iostream>
using namespace std;

class complex{
    public:
        int real, img;
        complex(){
            real = 2;
            img = 4;
        }
        complex(int x, int y){
            real = x;
            img = y;
        }
        complex operator *(complex temp1){
            complex temp;
            temp.real = real * temp1.real;
            temp.img = img * temp1.img;
            return temp;
        }
        complex operator +(complex temp1){
            complex temp;
            temp.real = real + temp1.real;
            temp.img = img + temp1.img;
            return temp;
        }
        void display(){
            cout << real << " + " << img << "i" << endl;
        }
};


int main(){
    complex c1(1,2), c2(3,4), c3, c4;
    c3 = c1 + c2;
    c4 = c1 * c2;
    c3.display();
    c4.display();

    return 0;
}