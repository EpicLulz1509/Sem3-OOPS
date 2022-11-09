#include <iostream>
using namespace std;

template <typename T> 

class Stack{
    int size = 10, top = -1;
    T* arr;
    public:

        Stack(){
            size = 10;
            arr = new T[size];
        }

        Stack(T array[], int s){
            arr = new T[s];
            size = s;
            top = s;
            for(int i = 0; i < size; i++){
                arr[i] = array[i];
            }
        }

        void push(T data){
            if(top == size-1){
                cout << "Overflown" << endl;
                return;
            }
            top++;
            arr[top] = data;
        }

        void pop(){
            arr[top] = 0;
            top--;
        }
        
        void display(){
            for(int i = 0; i <= top; i++){
                cout << arr[i] << " ";
            }
            cout << endl;
        }
};

int main(){
    Stack<char> ob;
    ob.push('a');
    ob.push('b');
    ob.push('c');
    // ob.push(4);
    // ob.push(5);
    ob.display();
    ob.pop();
    ob.display();
    return 0;
}