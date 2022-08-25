#include<iostream>
using namespace std;


class complex{
	int real, im;
	public:
	
		void input(){
			cout << "Enter real part: ";
			cin >> real;
			cout << "Enter imaginary part: ";
			cin >> im;
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
	cout << "Enter first complex number: \n";
	c1.input();
	cout << "Enter second complex number: \n";
	c2.input();
	
	cout << "Sum is: ";
	c3.sum(c1, c2);
	c3.print();
	 

	return 0;
}
