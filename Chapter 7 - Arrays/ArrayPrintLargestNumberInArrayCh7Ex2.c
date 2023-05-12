// Write a program to print the largest number in an array.

#include<stdio.h>

int largestNum (int arr[], int n);

int main(){
    int arr[] = {1, 3, 2, 7, 4, 5};
    int n = sizeof(arr)/sizeof(arr[0]);

    largestNum(arr, n);
    printf("Largest number of Array is : %d", arr[0]);
    return 0;
}

int largestNum (int arr[], int n){
    for (int i=0; i<n; i++){
        if(arr[0] < arr[i]){
            arr[0] = arr[i];
        }
    }
    return arr[0];
}