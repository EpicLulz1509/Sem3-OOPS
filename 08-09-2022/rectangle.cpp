#include <iostream>
using namespace std;
 
class Rectangle {
    int a = 3, b = 4;
	public:
		Rectangle(){
			a = 4;
			b = 5;
		}
		friend class Rect;
};

class Rect{
	int res;
    public:
    	void area(Rectangle r1){
    		res = r1.a * r1.b;
    	}
    	void display(){
    		cout << "Area is: " << res << endl;
    	}
};


int main(){
    Rectangle obj;
    Rect r;
    r.area(obj);
    r.display();
}