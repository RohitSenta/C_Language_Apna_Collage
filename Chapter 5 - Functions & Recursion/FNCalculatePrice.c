// Changes to parameters in function Don't change the values in calling function

#include<stdio.h>

void calculatePrice(float value);

int main(){
    float value = 100;
    calculatePrice(value);
    printf("Value is : %.2f", value);
    return 0;
}

void calculatePrice(float value){
    value = value + (.18 * value);
    printf("Final Price is : %.2f\n", value);
}