#include <iostream>
using namespace std;

class student {
    public:
        int roll, age, total;
        int sub1, sub2, sub3, sub4, sub5;
        float percentage;
        string name;

        void input(){
                cout << "Enter name, roll no, age: " << endl;
                cin >> name >> roll >> age;
                cout << "Enter five subject marks: " << endl;
                cin >> sub1 >> sub2 >> sub3 >> sub4 >> sub5; 
            }
    
        void display(){
            cout << "Name: " << name << endl;
            cout << "Roll number: " << roll << endl;
            cout << "Age is: " << age << endl;
            cout << "Marks in each subject: " << endl;
            cout << sub1 << " " << sub2 << " " << sub3 << " " << sub4 << " " << sub5 << " " << endl;
        }


};





int main(){
    student s1;
    s1.input();
    s1.display();
    return 0;
    
}