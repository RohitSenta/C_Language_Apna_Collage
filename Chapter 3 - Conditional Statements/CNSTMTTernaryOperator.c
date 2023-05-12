// Ternary Operator

#include<stdio.h>

int main() {
    int age;
    printf("enter age : ");
    scanf("%d", &age);

    age >= 18 ? printf("Adult") : printf("Not Adult");

    return 0;
}