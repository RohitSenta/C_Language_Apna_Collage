// Write a program to print the smallest number of two.

#include <stdio.h>

int main (){
    int a;
    printf("Enter a : ");
    scanf("%d", &a);
    int b;
    printf("Enter b : ");
    scanf("%d", &b);
    
    (a < b) ? printf("smallest number is : %d", a) : printf("smallest number is : %d", b); // Ternary Oparator
    // in this program we used the Ternary Oparator 
    return 0;
}
