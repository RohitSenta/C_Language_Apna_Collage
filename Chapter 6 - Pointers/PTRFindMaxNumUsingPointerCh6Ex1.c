// Write a program in C to find the maximum number between two numbers using a pointer.

#include<stdio.h>

int main() {
    int a, b;
    printf("Enter first number : ");
    scanf("%d", &a);
    printf("Enter second number : ");
    scanf("%d", &b);

    int *ptr1 = &a;
    int *ptr2 = &b;

    if (*ptr1 > *ptr2){
        printf("First Number a = %d is Maximum Number", *ptr1);
    } else {
        printf("Second Number b = %d is Maximum Number", *ptr2);
    }

    return 0;
}