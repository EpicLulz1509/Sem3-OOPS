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
        friend xyz operator --(xyz temp1);
        friend xyz operator ++(xyz temp1);
        void display(){
            cout << a << " " << b << endl;
        }
};

xyz operator --(xyz temp1){
    xyz temp;
    temp.a = temp1.a - 10;
    temp.b = temp1.b - 10;
    return temp;
}
xyz operator ++(xyz temp1){
    xyz temp;
    temp.a = temp1.a + 10;
    temp.b = temp1.b + 10;
    return temp;
}


int main(){
    xyz op1, op2(3,5), op3;
    op1 = --op2;
    op3 = ++op2;
    op1.display();
    op3.display();

    return 0;
}