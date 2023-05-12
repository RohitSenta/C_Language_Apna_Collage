#include <stdio.h>

void reverseArr (int arr[], int n);
void printArr (int arr[], int n);

int main(){
    int arr[] = {1, 2, 3, 4, 5, 6};
    printf("Array is : \n");
    for (int i=0; i<6; i++){
        printf("%d\t", arr[i]);
    }
    printf("\n");

    reverseArr (arr, 6);
    printArr (arr, 6);
    return 0;
}

void reverseArr (int arr[], int n){ // call by reference
    for (int i=0; i<n/2; i++){
        int firstVal = arr[i];
        int secondVal = arr[n-i-1]; 
        arr[i] = secondVal;
        arr[n-i-1] = firstVal;

    }
}

void printArr (int arr[], int n){
    printf("Reversed Array is : \n");
    for (int i=0; i<n; i++){
        printf("%d\t", arr[i]);
    }
    printf("\n");
}