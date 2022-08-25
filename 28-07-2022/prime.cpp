//2. Write a program in to check whether a number is prime or not.

#include <iostream>  
using namespace std; 

int main(){  
  int n, factors = 0;  
  cout << "Enter number: ";  
  cin >> n;   
  for(int i = 2; i < n; i++){  
      if(n % i == 0){  
          cout << "Not Prime" << endl;  
          factors += 1;  
          break;  
      }  
  }  
  if (factors == 0)  
      cout << "Prime" << endl;  
  return 0;  
}  