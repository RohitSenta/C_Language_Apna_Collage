// Write a function to find sum of digits of a number.

#include<stdio.h>

int digitSum(int n);

int main() {
    int n;
    printf("Enter Number n : ");
    scanf("%d", &n);
    printf("Sum of Digit of Number : %d", digitSum(n));
    return 0;
}

int digitSum(int n){
   int sum = 0;
    while(n != 0){
        int m = n%10;
        sum = sum + m;
        n = n/10;
    }
    return sum;
}