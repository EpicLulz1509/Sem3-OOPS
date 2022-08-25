// WAP to find biggest element from an Array

#include <iostream>
using namespace std;

int main() {
    int l, biggest = 0;
    cout << "Enter no of elememts: ";
    cin >> l;
    int arr[l] = {};
    for(int i = 0; i < l; i++){
        cout << "Enter a number for element " << i+1 << ": ";
        cin >> arr[i];
    }
    for(int i = 0; i < l; i++){
        if(arr[i] > biggest)
            biggest = arr[i];
    }
    cout << "Biggest element: " << biggest;
    return 0;
}