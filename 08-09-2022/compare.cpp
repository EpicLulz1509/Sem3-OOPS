#include <iostream>
using namespace std;

class Num2;

class Num1{
	public:
		int num;
		void input(){
			cout << "Enter a number: ";
			cin >> num;
		}
		friend void compare(Num1 n1, Num2 n2);
};

class Num2{
	public:
		int num;
		void input(){
			cout << "Enter another number: ";
			cin >> num;
		}
		friend void compare(Num1 n1, Num2 n2);
};

void compare(Num1 n1, Num2 n2){
	if(n1.num > n2.num)
		cout << "First number bigger" << endl;
	else if(n1.num < n2.num)
		cout << "Secoond number bigger" << endl;
	else
		cout << "Both equal" << endl;
}



int main(){
	Num1 n1;
	Num2 n2;
	n1.input();
	n2.input();
	compare(n1, n2);
	
}