#include<iostream>
using namespace std;


class FRACTION{
	int num, den;
	public:
	
		void input(){
			cout << "Enter the numerator and denominator: ";
			cin >> num >> den;
		}
		
//		void print(){
//			cout << num << "+" << den << "i" << endl; 
//		}
		
		void sum(FRACTION c1, FRACTION c2){
			int res1 = (c1.num * c2.den) + (c2.num * c1.den);
			int res2 = c1.den * c2.den;
			cout << "Result of addition = " << res1 << "/" << res2 << endl;
		}

		void sub(FRACTION c1, FRACTION c2){
			int res1 = (c1.num * c2.den) - (c2.num * c1.den);
			int res2 = c1.den * c2.den;
			cout << "Result of substraction = " << res1 << "/" << res2 << endl;
		}

		void mul(FRACTION c1, FRACTION c2){
			int res1 = c1.num * c2.num;
			int res2 = c1.den * c2.den;
			cout << "Result of multiplication = " << res1 << "/" << res2 << endl;
		}
};





int main(){
	FRACTION c1, c2, c3;
	cout << "For fraction 1 \n";
	c1.input();
	cout << "For fraction 2 \n";
	c2.input();
	
	cout << "Sum is: ";
	c3.sum(c1, c2);
	c3.sub(c1, c2);
	c3.mul(c1, c2);
	 

	return 0;
}

// OUTPUT:
// For fraction 1 
// Enter the numerator and denominator: 1 5
// For fraction 2 
// Enter the numerator and denominator: 2 7
// Sum is: Result of addition = 17/35
// Result of substraction = -3/35
// Result of multiplication = 2/35