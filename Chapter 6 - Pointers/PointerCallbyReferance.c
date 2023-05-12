#include<stdio.h>

void square (int n);
void _square (int* n);

int main (){

    int number = 4;
    square(number);
    printf("number = %d\n\n", number); //number is remain same

    _square(&number);
    printf("number = %d\n", number); //number will change to 16 due to address

    return 0;
}
//Call by Value
void square (int n) {
    n = n * n; // 4 * 4
    printf("square = %d\n", n);
} 

//Call by Referance
void _square (int* n) {
    *n = (*n) * (*n); // 4 * 4
    printf("square = %d\n", *n);
}