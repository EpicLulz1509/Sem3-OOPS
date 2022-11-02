#include <iostream>
using namespace std;
 
class BaseClass {
public:
    int b;
    void display(){
        cout << "Displaying Base class: " << b << endl;
    }
};
 
class DerivedClass : public BaseClass {
public:
    int d;
    void display(){
        cout << "Displaying Base class in derived: " << b << endl;
        cout << "Displaying Derived: " << d << endl;
    }
};
 
int main(){

    BaseClass base;
    DerivedClass derived;
    BaseClass* base_ptr = &derived;
    DerivedClass* derived_ptr = &derived;
    
    base_ptr->b = 10;
    base_ptr->display();
    base_ptr->b = 20;
    base_ptr->display();
    derived_ptr->b = 30;
    derived_ptr->d = 40;
    derived_ptr->display();
    
    return 0;
}
