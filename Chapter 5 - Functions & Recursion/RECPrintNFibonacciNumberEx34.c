// write a function to print n terms of Fibonacci Number

#include<stdio.h>

int fib(int n);

int main(){
    int n = 6;
    printf("Fibonacci of %d is : %d", n, fib(n));
    return 0;
}

int fib(int n){
    if(n == 0){
        return 0;
    }
    if (n == 1){
        return 1;
    }
    int finNm1 = fib(n-1);
    int fibNm2 = fib(n-2);
    int fibN = finNm1 + fibNm2;
    
    return fibN;
}