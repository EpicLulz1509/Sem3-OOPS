// WAP to calculate the addition of two times using structures and user defined functions.

#include <iostream>
#include <cmath>
using namespace std;



struct Time{
    int h;
    int m;
    int s;
};



int add(struct Time t1, struct Time t2){
    int h = t1.h + t2.h;
    int m = t1.m + t2.m;
    int s = t1.s + t2.s;
    while(s > 60){
        m += 60;
        s -= 60;
    }
    while(m > 60){
        h += 60;
        m -= 60;
    }
    printf("Total time = %d:%d:%d", h, m, s);
    return 0;
}



int main() {
    struct Time t1, t2;
    cout << "Enter hour 1: " << endl;
    cin >> t1.h;
    cout << "Enter min 1: " << endl;
    cin >> t1.m;
    cout << "Enter second 1: " << endl;
    cin >> t1.s;
    cout << "Enter hour 2: " << endl;
    cin >> t2.h;
    cout << "Enter min 2: " << endl;
    cin >> t2.m;
    cout << "Enter second 2: " << endl;
    cin >> t2.s;

    add(t1, t2);


    return 0;
}