#include<iostream>
using namespace std;


class Time{
	int hour, min, sec;
	public:
	
		void input(){
			cout << "Enter hour: ";
			cin >> hour;
			cout << "Enter minute: ";
			cin >> min;
			cout << "Enter second: ";
			cin >> sec;
		}
		
		void print(){
			cout << hour << ":" << min << ":" << sec << endl; 
		}
		
		void sum(Time c1, Time c2){
			hour = c1.hour + c2.hour;
			min = c1.min + c2.min;
			sec = c1.sec + c2.sec;
			while(sec >= 60){
				min++;
				sec = sec - 60;
			}
			while(min >= 60){
				hour++;
				min = min - 60;
			}
		}
};





int main(){
	Time c1, c2, c3;
	cout << "Enter first time: \n";
	c1.input();
	cout << "Enter second time: \n";
	c2.input();
	
	cout << "Sum is: ";
	c3.sum(c1, c2);
	c3.print();
	 

	return 0;
}
