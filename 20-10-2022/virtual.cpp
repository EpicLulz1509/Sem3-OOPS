#include<iostream>
using namespace std;

class ABC{
    public:
        virtual void display(){
            cout << "Base Class ABC" << endl;
        }
};

class BBC : public ABC{
    public:
        void display(){
            cout << "Derived Class BBC" << endl;
        }
};

class KBC : public ABC{
    public:
        void display(){
            cout << "Derived Class KBC" << endl;
        }
};


int main(){
    ABC *b;
    BBC d1;
    KBC d2;
    b = &d1;
    b->display();
    b = &d2;
    b->display();
    return 0;
}