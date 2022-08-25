#include<iostream>
using namespace std;


class DISTANCE{
	int feet, inches;
	public:
	
		void input(){
			cout << "Enter feet: ";
			cin >> feet;
			cout << "Enter inches: ";
			cin >> inches;
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
	cout << "Enter first DISTANCE: \n";
	c1.input();
	cout << "Enter second DISTANCE: \n";
	c2.input();
	
	cout << "Sum is: ";
	c3.sum(c1, c2);
	c3.print();
	 

	return 0;
}
