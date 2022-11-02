#include<iostream>
using namespace std;

class circle{
	public:
	int r;
	float c_area;
		circle(){
			cout << "Enter radius: ";
			cin >> r;
			c_area = 3.14 * r * r;
		}
		void area_circle(){
			cout << "Circle Area : " << c_area << endl;
		}
};

class rectangle: public circle{
	public:
		float r_area = r;
		rectangle() : circle(){
			cout << "Enter breadth: ";
			cin >> r;
			r_area *= r;
		}
		void area_rect(){
			cout << "Rectangle Area : " << r_area << endl;
		}	
}; 

class cylinder : public circle{
	public:
	float vol = c_area;
	cylinder() : circle(){
		cout << "Enter height: ";
		cin >> r;
		vol *= r;
	}
	void volume(){
		cout << "Cylinder Volume : " << vol << endl;
	}
};


int main(){
	rectangle r1;
	r1.area_rect();
	r1.area_circle();
	cylinder c1;
	c1.area_circle();
	c1.volume(); 
	return 0;
}
