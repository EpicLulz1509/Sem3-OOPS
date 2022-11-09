#include <iostream>
using namespace std;

template <typename T> 

void swap(T a, T b){
    int temp = *a;
    *a = *b;
    *b = temp;        
}

int main(){
    int a = 1, b = 2;
    cout << a << b << endl;
    swap(&a, &b);
    cout << a << b << endl;
    return 0;
}