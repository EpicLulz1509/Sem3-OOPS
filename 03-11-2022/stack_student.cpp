#include <iostream>
using namespace std;

template <typename T,  typename U> 

class Stack{
    int size = 10, top = -1;
    T *arr1;
    U *arr2, *arr3;
    public:

        Stack(){
            size = 10;
            arr1 = new T[size];
            arr2 = new U[size];
            arr3 = new U[size];
        }

        Stack(T array1[], U array2[], U array3[], int s){
            arr1 = new T[s];
            arr2 = new U[s];
            arr3 = new U[s];
            size = s;
            top = s;
            for(int i = 0; i < size; i++){
                arr1[i] = array1[i];
                arr2[i] = array2[i];
                arr3[i] = array3[i];
            }
        }

        void push(T data1, U data2, U data3){
            if(top == size-1){
                cout << "Overflown" << endl;
                return;
            }
            top++;
            arr1[top] = data1;
            arr2[top] = data2;
            arr3[top] = data3;
        }

        void pop(){
            arr1[top] = 0;
            top--;
        }
        
        void display(){
            for(int i = 0; i <= top; i++){
                cout << arr1[i] << " " << arr2[i] << " " << arr3[i] << endl;
            }
            cout << endl;
        }
};

int main(){
    Stack<char, int> ob;
    ob.push('A', 549, 79);
    ob.push('R', 1345, 60000);
    ob.push('S', 510, 90);
    // ob.push(4);
    // ob.push(5);
    ob.display();
    ob.pop();
    ob.display();
    return 0;
}