#include <stdio.h>
// by [] method
void printNumbers (int arr[], int n);

int main (){
    int arr[] = {10, 20, 30, 40, 50, 60};
    printNumbers(arr, 6);
    return 0;
}

void printNumbers (int arr[], int n){
    for (int i=0; i<n; i++){
        printf("%d\t", arr[i]);
    }
    printf("\n");
}

// // by pointer method
// void printNumber(int *arr, int n);

// int main(){
//     int arr[] = {1, 2, 3, 4 , 5, 6, 7};
//     printNumber(arr, 7);
//     return 0;
// }

// void printNumber(int *arr, int n){
//     for(int i=0; i<n; i++){
//         printf("%d\t", arr[i]);
//     } 
// }