//1. Write a program in to find size of fundamental data types in C++ language

#include <iostream>
using namespace std;
 
int main(){
    cout << "Size of fundamental data types :\n";
    cout << "sizeof char :          " << sizeof (char) << " bytes \n" ;
    cout << "sizeof short :         " << sizeof (short) << " bytes \n" ;
    cout << "sizeof int :           " << sizeof (int) << " bytes \n" ;
    cout << "sizeof long :          " << sizeof (long) << " bytes \n" ;
    cout << "sizeof float :         " << sizeof (float) << " bytes \n" ;
    cout << "sizeof double :        " << sizeof (double) << " bytes \n";
    cout << "sizeof bool :          " << sizeof (bool) << " bytes \n";
    return 0;
}