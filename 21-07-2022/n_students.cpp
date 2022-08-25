// Take input of 'n' students and display the output in tabular format and print name of person with highest age

#include <iostream>
using namespace std;


struct Student{
    char name[20];
    int age;
    int roll;
};


int main() {
    int n;
    cout << "Enter number of students" << endl;
    cin >> n;
    struct Student s[n];

    for(int i = 0; i < n; i++){
        cout << "Enter name for student "  << endl;
        cin >> s[i].name;
        cout << "Enter age for student " << endl;
        cin >> s[i].age;
        cout << "Enter roll number for student " << endl;
        cin >> s[i].roll;
    }

    int max = 0, m = 0;
    for(int i = 0; i < n; i++){
        if(s[i].age > max){
            max = s[i].age;
            m = i;
        }
    }

    cout << "Student with highest age is: " << s[m].name << endl;

    cout << "Name\tAge\tRoll " << endl;

    for(int i = 0; i < n; i++){
        cout << s[i].name << "\t";
        cout << s[i].age << "\t";
        cout << s[i].roll << "\t";
        cout << endl;
    }

    return 0;
}