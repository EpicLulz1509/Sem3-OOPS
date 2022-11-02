#include <iostream>
using namespace std;
class ABC{
public:
    virtual void display()=0;

};
class BBC : public ABC{
public:
    virtual void display(){
        cout << "Derived Class BBC" << endl;


    }
};

class KBC : public ABC{
public:
    virtual void display(){
        cout << "Derived Class KBC" << endl;
    }
};



int main(){
    ABC *bptr;
    BBC d1;
    KBC d2;
    bptr=&d1;
    bptr->display();
    bptr=&d2;
    bptr->display();

    return 0;
}