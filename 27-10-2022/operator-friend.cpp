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

        friend xyz operator -(xyz op);

        void display(){
            cout << a << " " << b << endl;
        }
};
xyz operator -(xyz op){
        op.a = -op.a;
        op.b = -op.b;
        return op;
    }


int main(){
    xyz op1, op2(3,5);
    op1 = -op2;
    op1.display();
    
    return 0;
}