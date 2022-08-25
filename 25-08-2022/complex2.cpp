#include<iostream>
using namespace std;


class COMPLEX{
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
		
		void sum(COMPLEX c1, COMPLEX c2){
			real = c1.real + c2.real;
			im = c1.im + c2.im;
		}
		
		void sum(int num, COMPLEX c1){
			real = c1.real + num;
			im = c1.im;
		}
};





int main(){
	int num;
	COMPLEX c1, c2, c3, c4;
	cout << "Enter first COMPLEX number: \n";
	c1.input();
	cout << "Enter second COMPLEX number: \n";
	c2.input();
	cout << "Enter number: ";
	cin >> num;
	
	
	cout << "Sum is: ";
	c3.sum(c1, c2);
	c3.print();
	
	cout << "Sum is: ";
	c4.sum(num, c1);
	c4.print();
	 

	return 0;
}
