#include <iostream>
#include <fstream>
using namespace std;

int main(){
    int roll, m1, m2, m3;
    string name, gender;
    cout << "Enter name, roll and gender: ";
    cin >> name >> roll >> gender;
    cout << "Enter marks in 3 subjects: ";
    cin >> m1 >> m2 >> m3;

    ofstream fout;
    fout.open("student.txt", ios::app);
    fout << "Name: " << name << "\n";
    fout << "Roll no: " << roll << "\n";    
    fout << "Gender: " << gender << "\n";
    fout << "Marks in phy: " << m1 << "\n";
    fout << "Marks in chem: " << m2 << "\n";
    fout << "Marks in maths: " << m3 << "\n";

    fout.close();

    return 0;
}