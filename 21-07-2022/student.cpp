// Define a structure student with proper data members. Input and display the details of a student.

#include <iostream>
using namespace std;

struct Student{
    char name[20];
    int age;
    int roll;
};


int main() {
    struct Student s;

    cout << "Enter name, age and roll number for a student "  << endl;
    cin >> s.name >> s.age >> s.roll;
    cout << "Name age and roll number of a student are:" << endl;
    cout << s.name << " " << s.age << " " << s.roll; 
    return 0;
}