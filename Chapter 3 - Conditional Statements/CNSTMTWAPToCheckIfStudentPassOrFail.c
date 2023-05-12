// write a program to check if student pass or fail - marks > 30 = PASS or marks <= 30 = FAIL

#include<stdio.h>

int main(){
    int marks;
    printf("enter marks(0-100) : ");
    scanf("%d", &marks);

    if (marks >= 0 && marks <= 30){
        printf("FAIL\n");
    } else if (marks > 30 && marks <= 100){
        printf("PASS\n");
    } else {
        printf("Wrong Marks \n");
    }

    marks <= 30 ? printf("FAIL|N") : printf("PASS\n"); // Ternary Operator

    return 0;
}