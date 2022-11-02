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

class test : public student{
    public:
        int sub1, sub2, sub3, sub4, sub5;

        void input(){
            cout << "Enter name, roll no, age: " << endl;
            cin >> name >> roll >> age;
            cout << "Enter five subject marks: " << endl;
            cin >> sub1 >> sub2 >> sub3 >> sub4 >> sub5; 
        }
 
        void display(){
            cout << "Name: " << name << endl;
            cout << "Roll number: " << roll << endl;
        }
};

class show : protected test{
    public:
        void printsub(){
            cout << "Marks in each subject: " << endl;
            cout << sub1 << " " << sub2 << " " << sub3 << " " << sub4 << " " << sub5 << " " << endl;
            cout << "Age is: " << age << endl;
        }
};

class result : public test{
    public:
        int total = 0;
        float percentage;

        void calc(){
            total = (sub1 + sub2 + sub3 + sub4 + sub5);
            cout << "Total is: " << total << endl;
            percentage = total/5.0;
            cout << "Percentage is: " << percentage << "%" << endl;
        }
};



int main(){
    student s1;
    test t1;
    result r1;
    show sh1;
    r1.input();
    r1.display();
    r1.calc();
    sh1.printsub();
}