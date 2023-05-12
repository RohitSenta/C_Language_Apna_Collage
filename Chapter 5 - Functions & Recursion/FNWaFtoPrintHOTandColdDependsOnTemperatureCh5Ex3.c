// Write a function to print "Hot" or "Cold" depending on the temperature user enters.

#include<stdio.h>

void Temperature(float n);

int main(){
    float n;
    printf("Enter temperature : ");
    scanf("%f", &n);
    Temperature(n);
    return 0;
}

void Temperature(float n){
    if(n <= 20){
        printf("COLD :)");
    } 
    else {
        printf("HOT :)");
    }
}