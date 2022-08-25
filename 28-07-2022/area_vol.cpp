//4.Write a program to find out the area of a circle and volume of a sphere by using function overloading concept. (Use one function name as AREA-VOL)

#include <iostream>
using namespace std;
 
float AREA_VOL(int r){
    return (3.14 * r * r);
}

float AREA_VOL(float r){
    return (3.14 * r * r * r);
}

 
int main(){
    int r1, x;
    float r2;
    cout << "Enter 1 for circle, 2 for Sphere: ";
    cin >> x;
    if(x == 1) {
    cout << "Enter radius: ";
    cin >> r1;
    cout << "Area is: " <<AREA_VOL(r1)<< endl;
    }
    else {
    cout << "Enter radius: ";    
    cin >> r2;
    cout << "Area is: " <<AREA_VOL(r2)<< endl;
    }
    
    
}