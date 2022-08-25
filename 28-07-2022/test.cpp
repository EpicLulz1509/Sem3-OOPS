#include <stdio.h>
#include <iostream>

using namespace std;

int main(){
    int n = 3;
    int arr[n][n];
    int range = n * n;
    int count = 1;
    int i = n-1; //rows
    int j = (n+1)/2; //columns
    arr[i][j] = count;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            arr[i][j] = 0;
        }
    }
    while(count < range){
        i++;
        j--;
        count++;
        if(i == n)
            i = 0;
        if(j == -1)
            j = (n-1);
        arr[i][j] = count;
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}