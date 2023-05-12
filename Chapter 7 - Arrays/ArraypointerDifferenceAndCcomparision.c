#include <stdio.h>

int main (){

    int age1 = 22;
    int age2 = 24;
    int age3 = 25;
    int *ptr1 = &age1;
    int *ptr2 = &age2;
    int *ptr3 = &age3;

    printf("%u, %u\nDifference = %u\n", ptr1, ptr3, ptr1-ptr3);
    ptr3 = &age1;
    printf("Comerision = %u\n", ptr1==ptr3);

    return 0;
}