// Swap the largest and the smallest elements in the array.

#include <iostream>
using namespace std;

int main() {
    int l, biggest = 0, b = 0, s = 0;
    cout << "Enter no of elememts" << endl;
    cin >> l;
    int arr[l] = {};
    for(int i = 0; i < l; i++){
        cout << "Enter a number for element " << i+1 << endl;
        cin >> arr[i];
    }
    int smallest = arr[0];
    for(int i = 0; i < l; i++){
        if(arr[i] > biggest){
            b = i;
            biggest = arr[i];
        }
        if(arr[i] < smallest){
            smallest = arr[i];
            s = i;
        }
    }
    cout << "Biggest element: " << biggest << endl;
 
    int temp; 
    temp = arr[b];
    arr[b] = arr[s];
    arr[s] = temp;

    cout << "Array after swapping: " << endl;
    for(int i = 0; i < l; i++){
        cout << " " << arr[i];
    }

    return 0;
}