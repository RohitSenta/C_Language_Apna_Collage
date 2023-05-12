// keep taking numbers as input from user until user enters a number which is multiple of 7.

#include<stdio.h>

int main() {
     int n;

    do{
        printf("enter number n : ");
        scanf("%d", &n);
        printf("Number is : %d\n", n);

        if(n % 7 == 0){ // multiple of 7
            break;
        }

    } while (1); // infinite loop 

    printf("thank you !");
    
    return 0;
}