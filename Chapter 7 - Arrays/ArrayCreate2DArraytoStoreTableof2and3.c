#include<stdio.h>

void storetable (int arr[][10], int n, int m, int number);

int main() {
    int tables[2][10];
    storetable(tables, 0, 10, 2); 
    storetable(tables, 1, 10, 3);

    printf("Table of 2 : \n");
    for (int i=0; i<10; i++){ // 0 to 10
        printf("%d\t", tables[0][i]);
    }

    printf("\n");
    printf("Table of 3 : \n");
    for (int i=0; i<10; i++){ // 0 to 10
        printf("%d\t", tables[1][i]);
    }
    return 0;
}

void storetable (int arr[][10], int n, int m, int number){
    for (int i=0; i<m; i++){ // 0 to 10
        arr[n][i] = number * (i+1); // 2, 4, 6, 8, 10.....
        // arr[0][0], arr[0][1], arr[0][2], arr[0][3].....
    }
}