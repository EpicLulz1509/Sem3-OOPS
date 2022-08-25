//5.Write a program to find out area or volume of an shape/object by using one function name as FUN-AREA only. 
//If the function takes one argument then it will calculate area of a circle, two argument for area of rectangle and three argument volume of a box. 
//If no argument is given to the function, then it will display appropriate message.

#include <iostream>
using namespace std;


int FUN_AREA(int a){
    return (3.14 * a * a);
}

int FUN_AREA(int a,int b){
    return (a * b);
}

int FUN_AREA(int a,int b,int c){
    return (a * b * c);
}


 
int main()
{
    int num1, num2, num, x = 0;
    cout << "Enter 1 for area of circle, 2 for area of rectagle, 3 for volume of box: ";
    cin >> x;
    if (x == 1){
    cout << "Enter radius: ";
    cin >> num;
    cout << "Area: " << FUN_AREA(num);
    }
    else if (x == 2){
    cout << "Enter the sides: ";
    cin >> num >> num1;
    cout << "Area: " << FUN_AREA(num, num1);
    }
    else if (x == 3){
    cout << "Enter the sides: ";
    cin >> num >> num1 >> num2;
    cout << "Area: " <<FUN_AREA(num, num1, num2);
    }
    else
        cout << "No input given " << endl;


    
    
    
return 0;


    }