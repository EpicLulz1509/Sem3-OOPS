#include <iostream>
using namespace std;
 
class AreaShape {
    public:
    	int a = 4, b = 5, s = 3;
		friend void square(AreaShape r);
		friend void rect(AreaShape r);
};


void square(AreaShape r){
    cout << "Area of square = " << r.s * r.s << endl;
}

void rect(AreaShape r){
    cout << "Area of rectangle = " << r.a * r.b << endl;
}


int main(){
    AreaShape r;
    square(r);
    rect(r);
    return 0;
}