#include <iostream>
using namespace std;

template <typename T> 

class Max{
    T a = 0, b = 0;
    public:
        Max(T x, T y){
            a = x;
            b = y;
        }
        T get(){
            if(a > b)
                return a;
            else 
                return b;
        }
};

int main(){
    Max<int> ob(3,4);
    int ans = ob.get();
    cout << ans;
    return 0;
}