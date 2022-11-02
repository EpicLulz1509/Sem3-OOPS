#include<iostream>
using namespace std;

class Marks{
	public:
		int n;
		void get(int n){
			this->n = n;
		}
		void display(){
			cout << n;
		}
};

int main(){
	Marks m1;
	m1.get(5);
	m1.display();
	return 0;
}
