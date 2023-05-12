// Nested if-else Check Number positive or nagative AND Even or Odd

#include<stdio.h>

int main(){
    int number;
    printf("Enter number : ");
    scanf("%d", &number);

    if (number >= 0){
        printf("Number is Positive \n");
        if(number % 2 == 0){
            printf("Number is Even \n");
        } else {
            printf("Number is Odd \n");
        }
    }
    else {
        printf("Number is nagative\n");
    }

    return 0;
}
