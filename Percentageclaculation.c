#include<stdio.h>

float calcPercentage(float math, float science, float sanskrit);

int main() {
    float math = 90;
    float science = 86;
    float sanskrit = 87;

    printf("Percentage is : %f", calcPercentage(math, science, sanskrit));
    return 0;
}

float calcPercentage(float math, float science, float sanskrit){
    return ((math + science + sanskrit)/3); 
}