//6. Write a program to find the summation of three numbers by using one function only with function name SUM having three arguments. 
//If at run time one argument is given to the function SUM, then second and third argument will be assumed by default as 10 and 20 respectively. 
//If two arguments are given at run time, then third argument will be assumed as 20.

#include <iostream>
using namespace std;

int SUM(int a,int b = 10,int c = 20){
    return (a+b+c);
}


int main()
{
    int num,num1,num2;
    cout << "Enter numbers: ";
    cin >> num >> num1 >> num2;
    
    cout << "Sum is: " << SUM(num,num1,num2)<< endl;
    cout << "Sum is: " << SUM(num,num1)<< endl;
    cout << "Sum is: " << SUM(num)<< endl;
    
    
return 0;

}