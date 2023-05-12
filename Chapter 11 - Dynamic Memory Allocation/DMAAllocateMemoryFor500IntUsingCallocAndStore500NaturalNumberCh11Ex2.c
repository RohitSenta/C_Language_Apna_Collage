// Allocate memory for 500 integers using calloc & then store first 500 natural numbers in that space.

#include<stdio.h>

int main(){
    int *ptr;
    int n = 500;

    ptr = (int *) calloc(n, sizeof(int));

    printf("Storing n natural numbers : \n");
    for (int i=1; i<=n; i++){
        ptr[i] = i;
    }

    for(int i=1; i<=n; i++){
        printf("%d ", ptr[i]);
    }

    return 0;
}