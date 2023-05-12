#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr;
    ptr = (int *) calloc(5, sizeof(int));

    printf("Enter 5 Numbers \n");
    for (int i=1; i<=5; i++){
        scanf("%d", &ptr[i]);
    }

    for (int i=1; i<=5; i++){
        printf("Numbers %d is %d\n",i, ptr[i]);
    }

    return 0;
}