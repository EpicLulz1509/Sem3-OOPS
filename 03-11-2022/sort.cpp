#include <iostream>
using namespace std;

template <typename T> 

T search(T arr, int size){
    for(int i = 0; i < size-1; i++){
        for(int j = 0; j < size-i-1; j++){
            if (arr[j] > arr[j + 1]){
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;;
            }
        }
    }
    return arr;
        
}

int main(){
    int size = 7, s = 4;
    int arr1[size] = {12,22,43,40,15,6,7};
    int *p = search(arr1, size);
    for(int i = 0; i < size; i++){
        cout << p[i] << " ";
    }
    return 0;
}