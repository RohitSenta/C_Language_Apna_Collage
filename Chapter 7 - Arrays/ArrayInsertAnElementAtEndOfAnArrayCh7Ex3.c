// Write a program to insert an element at the end of an array.

#include<stdio.h>

int main(){

    int arr[10];
    int size;
    printf("Enter number of size of array : ");
    scanf("%d", &size);

    printf("Enter Array Elements : \n");
    for (int i=0; i<size; i++){
        scanf("%d", &arr[i]);
    }

    int position;
    printf("Enter Position at insert element : ");
    scanf("%d", &position);

    int value = 66;
    
    for (int i=size-1; i>=position-1; i--){
        arr[i+1] = arr[i];
    }
    arr[position-1] = value;
    
    printf("Array is : \n");
    for(int i=0; i<=size; i++){
        printf("%d\t", arr[i]);
    }

    return 0;
}