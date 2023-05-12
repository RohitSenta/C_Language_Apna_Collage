#include <stdio.h>

int main (){

    int age = 22;
    int *ptri = &age;
    
    printf("ptri = %u\n", ptri);
    ptri++;
    printf("ptri = %u\n",ptri);
    ptri++;
    printf("ptri = %u\n\n",ptri);

    float price = 20.0;
    float *ptrf = &price;

    printf("ptrf = %u\n", ptrf);
    ptrf++;
    printf("ptrf = %u\n",ptrf);
    ptrf--;
    printf("ptrf = %u\n\n",ptrf);

    char star = '*';
    char *ptrc = &star;

    printf("ptri = %p\n", ptrc);
    ptrc++;
    printf("ptri = %p\n",ptrc);
    ptrc++;
    printf("ptri = %p\n\n",ptrc);


    return 0;
}