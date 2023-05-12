// Write a program to check if given character is digit or not.

#include<stdio.h>

int main (){
    char a;
    printf("Enter charcter : ");
    scanf("%c", &a);
    printf("%c\n", a);
    printf("Number Digit or Not : %d", (a >= '0' && a <= '9')); 
    // also we can use ASCII value for this operation (a >= 48 && a <= 57)

    return 0;
}