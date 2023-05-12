#include<stdio.h>

void printAddress (int n);
void _printAddress (int *n);

int main (){
    int n = 4;

    printf("Address of n : %u\n", &n);
    printAddress(n);

    printf("Address of n : %u\n", &n);
    _printAddress(&n);
    return 0;
}

void printAddress(int n){
    printf("Address of n : %u\n\n", &n);
}
void _printAddress(int *n){
    printf("Address of n : %u\n", n);
}