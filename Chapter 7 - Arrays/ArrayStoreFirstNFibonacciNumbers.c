#include <stdio.h>

int main (){

    int n;
    printf("Enter n (n>2) : ");
    scanf("%d", &n);

    int fib[n];
    fib[0] = 0;
    fib[1] = 1;
    printf("%d\t%d\t", fib[0], fib[1]); // 0, 1,
    
    for (int i=2; i<n; i++){
        fib[i] = fib[i-1] + fib[i-2]; // impotrant
        printf("%d\t", fib[i]); // 1, 2, 3, 5, 8, 13, 21, 34......
    }
    printf("\n");
    return 0;
}

