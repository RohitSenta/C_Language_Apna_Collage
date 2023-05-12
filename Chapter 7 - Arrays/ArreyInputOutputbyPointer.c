#include <stdio.h>

int main (){

    int aadhar[5];
    int *ptr = &aadhar[0];
    
    // By Pointer Method
    // input
    printf("Input by Pointer Method : \n");
    for (int i=0; i<5; i++){
        printf("Enter %dth index : ", i );
        scanf("%d", (ptr+i));
    }
    // output
    printf("Output by Pointer Method : \n");
    for (int i=0; i<5; i++){
        printf("value %dth index is : %d\n", i, *(ptr+i));
    }

    // By Array Method
    //input
    printf("Input by Array Method : \n");
    for(int i=0; i<5; i++){
        printf("Enter %dth index : ", i);
        scanf("%d", &aadhar[i]);
    }
    //output
    printf("Output by Array Method : \n");
    for(int i=0; i<5; i++){
        printf("Value at %dth index is : %d\n", i, aadhar[i]);
    }

    return 0;
}