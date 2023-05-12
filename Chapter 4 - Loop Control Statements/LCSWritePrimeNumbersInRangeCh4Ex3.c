// Write a program to print prime numbers in a range.

#include<stdio.h>

int main(){
    int n, m, flag = 0;
    printf("Enter First Number n : ");
    scanf("%d", &n);    
    printf("Enter Second Number m : ");
    scanf("%d", &m);

    while(n < m){
        flag = 0;

        if (n <= 1){
            n++;
            continue; 
        }

        for (int i=2; i<=n/2; i++){
            if (n%i == 0){
                flag = 1;
                break;
            }
        }

        if (flag == 0){
            printf("%d\t", n);
        }
        n++;
    }

    return 0;
}