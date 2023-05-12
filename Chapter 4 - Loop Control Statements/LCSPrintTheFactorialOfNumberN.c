// print the factorial of number n

#include<stdio.h>

int main() {
    int n;
    printf("enter number n : ");
    scanf("%d", &n);

    int fact = 1;
    for (int i=1; i<=n; i++){
        fact = fact * i;
    }

    printf("Factoriacl of number %d is : %d", n, fact);

    return 0;
}
