#include <iostream>
using namespace std;

template <typename T> 

void search(T array, T size, T s){
    int count = 0;
    for(int i = 0; i < *size; ++i){
        if(*s == array[i])
            count++;
    }
    cout << "Times found: " << count << endl;
        
}

int main(){
    int size = 7, s = 4;
    int arr[] = {1,2,3,4,5,6,7};
    search(arr, &size, &s);
    return 0;
}