// Write a program to check if the given number is anatural number.

#include <stdio.h>

int main(){

    int num;
    float floatnum;
    printf("Enter number : ");
    scanf("%f", &floatnum);
    
    num = floatnum;

    if(num <= 0){
        printf("Given Number is Not Natural Number");
    } else if (num != floatnum) {
        printf("Given Number is Not Natural Number");
    } else {
        printf("Given Number is Natural Number");
    }
    
    return 0;
}