#include <stdio.h>
#include <stdlib.h>

int main() {
    float *ptr;
    ptr = (float *) malloc(5 * sizeof(float));

    ptr[0] = 10;
    ptr[1] = 20;
    ptr[2] = 30;
    ptr[3] = 40;
    ptr[4] = 50;
    
    for (int i=0; i<5; i++){
        printf("%.2f\n", ptr[i]);
    }

    return 0; 
}