// Write a program in C to print the elements of an array in reverse order.

#include<stdio.h>

void reverse(int arr[], int *n);

int main(){
    int n;
    printf("Enter n : ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter Array Elements : ");
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    printf("Array Before Reverse : \n");
    for(int i=0; i<n; i++){
        printf("%d\t", arr[i]);
    }
    
    reverse(arr, &n);
    return 0;
}

void reverse (int arr[], int *n){
    printf("\nArray After Reverse : \n");
    for(int i=0; i<*n; i++){
        printf("%d\t", arr[*n-i-1]);
    }
}