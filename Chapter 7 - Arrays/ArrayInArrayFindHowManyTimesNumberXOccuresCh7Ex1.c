// In an array of numbers, find how many times does a number 'x' occurs.

#include<stdio.h>

int findNum (int arr[], int n, int size);

int main(){
    int arr[] = {1, 3, 5, 3, 3, 7, 9, 3, 5, 2};
    int size = sizeof(arr)/sizeof(arr[0]);
    int n;
    printf("Enter Number to be Find : ");
    scanf("%d", &n);
    
    printf("Number %d is occurs in Array : %d Times", n, findNum(arr, n, size));
    return 0;
}

int findNum (int arr[], int n, int size){
    int count = 0;
    for (int i=0; i<size; i++){
        if (arr[i] == n){
            count++;
        }
    }
    return count;
}