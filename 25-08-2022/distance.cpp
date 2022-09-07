#include<iostream>
using namespace std;


class DISTANCE{
	int feet, inches;
	public:
	
		void input(){
			cout << "Enter feet and inches: ";
			cin >> feet >> inches;
		}
		
		void print(){
			cout << "Feet: " << feet << " Inches: " << inches << endl; 
		}
		
		void sum(DISTANCE c1, DISTANCE c2){
			feet = c1.feet + c2.feet;
			inches = c1.inches + c2.inches;
			while(inches >= 12){
				feet++;
				inches = inches - 12;
			}
		}
};





int main(){
	DISTANCE c1, c2, c3;
	cout << "Enter first and second DISTANCE: \n";
	c1.input();
	c2.input();
	
	cout << "Sum is: ";
	c3.sum(c1, c2);
	c3.print();
	 

	return 0;
}


// OUTPUT:
// Enter first and second DISTANCE: 
// Enter feet and inches: 2 8
// Enter feet and inches: 3 9
// Sum is: Feet: 6 Inches: 5