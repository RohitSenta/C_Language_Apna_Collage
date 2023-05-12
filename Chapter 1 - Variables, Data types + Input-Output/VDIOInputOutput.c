// input and Output 

#include<stdio.h>

int main() {
    int a;
    printf("Enter numbar a : ");
    scanf("%d", &a); // scanf - take input form user
    int b;
    printf("Enter numbar a : ");
    scanf("%d", &b);
    
    int sum = a + b;
    
    printf("Number is : %d", sum); // printf - output number to user from variable
    return 0;
}