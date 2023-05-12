// keep taking numbers as input from user until user enter an odd number

#include<stdio.h>

int main(){
    int n;

    do{
        printf("enter number n : ");
        scanf("%d", &n);
        printf("Number is : %d\n", n);

        if(n % 2 != 0){
            break;
        }

    } while (1); // infinite loop 

    printf("thank you !");
    
    return 0;
}