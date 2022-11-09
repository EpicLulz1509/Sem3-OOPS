#include <iostream>
using namespace std;

template <typename T> 

void min(T array, int size){
    int min = array[0];
    for(int i = 0; i < size; ++i){
        if (min >= array[i])
            min = array[i];
    }
    cout << min;
        
}

int main(){
    int arr[] = {1,2,3,4,5,6,7};
    min(arr, 7);
    return 0;
}