// Write a function to find square root of a number.

#include<stdio.h>
#include<math.h>

int sqrtNum(int n);

int main() {
    int n;
    printf("Enter number n : ");
    scanf("%d", &n);
    printf("Square Root of %d is : %d", n, sqrtNum(n));
    return 0;
}

int sqrtNum(int n){
    return sqrt(n);
}