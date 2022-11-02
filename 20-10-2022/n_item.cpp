#include<iostream>
using namespace std;

class Item{
	public:
		int n, p;
		void Input(int no, int pr){
		n = no;
		p = pr;
		}	
		void Display(){
			cout << "Item number: " << (n+1) << " Price: " << p << endl;
		}
};



int main(){
	int n; 
	cout << "Enter number of objects: ";
	cin >> n;
	Item *iptr = new Item[n];
	Item *ptr = iptr;
	for(int i = 0; i < n; i++)	{
		int p;
		cout << "Enter price: ";
		cin >> p;
		iptr->Input(i, p);
		iptr++;
	}
	for(int i = 0; i < n; i++){
		ptr->Display();
		ptr++;
	}
	return 0;
}
