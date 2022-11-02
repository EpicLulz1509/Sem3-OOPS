#include <iostream>
using namespace std;

class xyz{
    public:
        int a, b;
        xyz(){
            a = 2;
            b = 4;
        }
        xyz(int x, int y){
            a = x;
            b = y;
        }
        xyz operator -(){
            a = -a;
            b = -b;
            return xyz(a,b);
        }
        void display(){
            cout << a << " " << b << endl;
        }
};


int main(){
    xyz op1, op2(3,5);
    op1 = -op2;
    op1.display();
    
    return 0;
}