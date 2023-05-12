#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr;
    ptr = (int *) calloc(5, sizeof(int));

    printf("Enter 5 Numbers \n");
    for (int i=0; i<5; i++){
        scanf("%d", &ptr[i]);
    }

    for (int i=0; i<5; i++){
        printf("Numbers(5) %d is %d\n",i, ptr[i]);
    }

    printf("\n");

    ptr = realloc(ptr, 8);
    printf("Enter New 8 Numbers \n");
    for (int i=0; i<8; i++){
        scanf("%d", &ptr[i]);
    }

    for(int i=0; i<8; i++){
        printf("Numbers(8) %d is %d\n",i, ptr[i]);
    }

    return 0;
}