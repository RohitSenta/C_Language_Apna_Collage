// Write a program to check if a given number is Armstrong number or not.

#include <stdio.h>

int main() {
    int number;
    printf("Enter Number : ");
    scanf("%d", &number);

    int temp, rem, count, sum = 0;
    while (number != 0){
        number = number/10;
        count++;
    }
    
    temp = number;
    while(number > 0){
        rem = number%10;
        sum = sum + (rem*count);
        number = number/10;
    }
if (temp == sum){
    printf("Given Number is Armstrong Number");
} else {
    printf("Given Number is Not Armstrong Number");
}

return 0;
}
