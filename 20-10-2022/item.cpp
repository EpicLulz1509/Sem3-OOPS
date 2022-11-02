#include<iostream>
using namespace std;

class Item{
	public:
		int n, p;
		Item(){
		n = 1;
		p = 500;
		}	
		void Display(){
			cout << "Item number: " << n << " Price: " << p << endl;
		}
};



int main(){
	Item i1; 
	Item *i2 = &i1;
	cout << "Using object " << endl;
	i1.Display();
	cout << "Using object pointer " << endl;
	i2->Display();
	return 0;
}
