// Write a program to print the average of 3 numbers.

#include <stdio.h>

int main () {
    int a, b, c;
    printf("Enter 3 numbers : ");
    scanf("%d %d %d", &a, &b, &c);
    printf("Avarage of 3 numbers : %.2f", (a+b+c)/3.0);

    return 0;
}