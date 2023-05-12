// write a function to calculate percentage of student form marks in maths, science and sanskrit.

#include<stdio.h>

int clacPercentage(int science, int math, int sanskrit);

int main(){
    int science = 94;
    int math = 92;
    int sanskrit = 97;

    printf("Percentage is : %d", calcpercentage(science, math, sanskrit));    
    return 0;
}

int calcpercentage(int science, int math, int sanskrit){
    return ((science + math + sanskrit) / 3);
}