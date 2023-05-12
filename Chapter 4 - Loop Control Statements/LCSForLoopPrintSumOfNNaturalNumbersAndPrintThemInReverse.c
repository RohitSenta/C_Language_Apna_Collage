// print the sum of first n natural numbers take n form user
// and also print them in reverse

#include<stdio.h>

int main() {
    int n;
    printf("enter number n : ");
    scanf("%d", &n);

    int sum = 0;
    for (int i=1; i<=n; i++){
        sum = sum + i;
    }

    printf("sum is : %d\n", sum);

    for (int i=n; i>=1; i--){
        printf("%d\t", i);
    }

    return 0;
}