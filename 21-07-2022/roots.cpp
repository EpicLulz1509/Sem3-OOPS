// WAP in C++ to find the roots of quadratic equation

#include <iostream>
#include <cmath>
using namespace std;

int main() {

    float a, b, c, r1, r2, d, r, i;
    cout << "Enter a, b, c: ";
    cin >> a >> b >> c;
    d = (b*b) - (4*a*c);
    
    if (d > 0){
        r1 = (-b + sqrt(d)) / (2*a);
        r2 = (-b - sqrt(d)) / (2*a);
        cout << "Roots are real and different" << endl;
        cout << "They are: " << r1  << " and " << r2 << endl;
    }

    else if(d < 0){
        r = -b/(2*a);
        i =sqrt(-d)/(2*a);
        cout << "Roots are complex and different" << endl;
        cout << "They are: ";
        cout << r << "+" << i << "i" << " and " << r << "-" << i << "i" << endl;
    }
    
    else{
        cout << "Roots are real and same" << endl;
        r1 = r2 = -b/(2*a);
        cout << "Root is: " << r1 << " and " << r2 << endl;
    }

    

    return 0;
}