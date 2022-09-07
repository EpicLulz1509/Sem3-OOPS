#include<iostream>
using namespace std;


class complex{
	int real, im;
	public:
		
		void input(){
			cout << "Enter real and imaginary part: ";
			cin >> real >> im;
		}
		
		void print(){
			cout << real << "+" << im << "i" << endl; 
		}
		
		void sum(complex c1, complex c2){
			real = c1.real + c2.real;
			im = c1.im + c2.im;
		}
};





int main(){
	complex c1, c2, c3;
	cout << "Enter first and second complex number: \n";
	c1.input();
	c2.input();
	
	cout << "Sum is: ";
	c3.sum(c1, c2);
	c3.print();
	 

	return 0;
}


// OUTPUT:
// Enter first and second complex number: 
// Enter real and imaginary part: 3 4     
// Enter real and imaginary part: 1 5
// Sum is: 4+9i