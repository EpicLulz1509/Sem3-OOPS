#include<iostream>
using namespace std;


class Time{
	int hour, min, sec;
	public:
	
		void input(){
			cout << "Enter hour, minute, second : ";
			cin >> hour >> min >> sec;
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
	cout << "Enter first and second time: \n";
	c1.input();
	c2.input();
	
	cout << "Sum is: ";
	c3.sum(c1, c2);
	c3.print();
	 

	return 0;
}


// OUTPUT:
// Enter first and second time: 
// Enter hour, minute, second : 1 2 5
// Enter hour, minute, second : 7 9 8
// Sum is: 8:11:13