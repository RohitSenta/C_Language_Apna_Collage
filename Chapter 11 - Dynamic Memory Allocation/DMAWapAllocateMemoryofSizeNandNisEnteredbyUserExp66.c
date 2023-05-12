#include <stdio.h>
#include <stdlib.h>

int main() {
    float *ptr;
    int n;
    printf("Enter n : ");
    scanf("%d", &n);

    ptr = (int *) calloc(n, sizeof(int));

    for (int i=0; i<n; i++){
        printf("%d\n", ptr[i]);
    }

    return 0; 
}