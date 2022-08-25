#include <stdio.h>
#include <iostream>
using namespace std;

void print(int A[], int size){
    int i;
    for (i = 0; i < size; i++)
        printf("%d ", A[i]);
    printf("\n");
}


void swap(int &a, int &b) {
    int temp;
    temp = a;
    a = b;
    b = temp;
}




int main()
{
    int l, biggest = 0, b = 0, s = 0;
    cout << "Enter no of elememts" << endl;
    cin >> l;
    int arr[l] = {};
    for(int i = 0; i < l; i++){
        cout << "Enter a number for element " << i+1 << endl;
        cin >> arr[i];
    }
    int smallest = arr[0];
    printf("The array is \n");
    print(arr, l);

    int x1=0,y1=9999999,x,y;
    for (int i = 0; i < l; i++){
        if (arr[i]>x1){
            x1 = arr[i];
            x=i;
        }
    }
    for (int i = 0; i < l; i++){
        if (arr[i]<y1){
            y1 = arr[i];
            y=i;
        }
    }
    swap(arr[x],arr[y]);
    printf("changed array is \n");
    print(arr, arr_size);


    
    
    
return 0;


    }