//3. Write a program to demonstrate the concept of call-by-value, call-by-reference & call-by address by swaping of two numbers as an example.


#include <iostream>
using namespace std;
 
void swapByReference(int &m, int &n){
    int temp = m;
    m = n;
    n = temp;
}

void swapByAddress(int *m, int *n){
    int temp = *m;
    *m = *n;
    *n = temp;
}

void swapByValue(int m, int n){
    int temp = n;
    n = m;
    m = temp;
    cout << "Value of A after swap by value inside the function: " << m <<endl;
    cout << "Value of B after swap by value inside the function: " << n <<endl;
}

 
int main(){
    int a, b;   
    
    cout << "Enter two numbers: "<< endl;
    cin >> a;
    cin >> b;
    
    cout << "Value of A before swap: " << a <<endl;
    cout << "Value of B before swap: " << b <<endl;
    
    swapByReference(a, b);
    
    cout << "Value of A after swap by reference: " << a <<endl;
    cout << "Value of B after swap by reference: " << b <<endl;

    swapByAddress(&a, &b);
    
    cout << "Value of A after swap by address: " << a <<endl;
    cout << "Value of B after swap by address: " << b <<endl;

    swapByValue(a, b);

    cout << "Value of A after swap by value outside the function: " << a <<endl;
    cout << "Value of B after swap by value outside the function: " << b <<endl;
}