// Write a program to check if a number is prime or not.

#include<stdio.h>

int main(){
    int n, flag = 0;
    printf("Enter Number : ");
    scanf("%d", &n);    

    for(int i=2; i<n; i++){
        if(n%i == 0){
            printf("Given Number is Not-Prime Number");
            flag = 1;
            break;
        }
    }
    
    if(flag == 0){
            printf("Given Number is Prime Number");
        }

    return 0;
}