// Type Conversation

#include<stdio.h>

int main() {

    printf("%d\n", 2*2); // int * int = int 
    printf("%f\n", 2.0*2); // float * int = float
    printf("%.3f\n", 2.0*2.0); // float * float = float
    printf("%.3f\n", 4/2.0); // int / float = float
    printf("%.3f\n", 2.0/3); // float / int = float

    int a = (int)2.999999; // Explicite conversion
    printf("%d", a);

    return 0;
}