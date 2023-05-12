// Write a program to Enter price of 3 item and print their Final Price with GST.

#include<stdio.h>

int main(){
    float price[3];
    printf("Enter three Prices : \n");
    scanf("%f", &price[0]);
    scanf("%f", &price[1]);
    scanf("%f", &price[2]);

    printf("Price 1 + GST : %.2f\n", price[0] + (0.18*price[0]));
    printf("Price 2 + GST : %.2f\n", price[1] + (0.18*price[1]));
    printf("Price 3 + GST : %.2f\n", price[2] + (0.18*price[2]));

    return 0;
}