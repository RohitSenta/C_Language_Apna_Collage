#include <stdio.h>

int main(){
    FILE *fptr;
    fptr = fopen("FLTest1.txt", "r");

    int n;
    fscanf(fptr, "%d", &n);
    printf("Number 1 = %d\n", n);
    fscanf(fptr, "%d", &n);
    printf("Number 2 = %d\n", n);
    fscanf(fptr, "%d", &n);
    printf("Number 3 = %d\n", n);
    fscanf(fptr, "%d", &n);
    printf("Number 4 = %d\n", n);
    fscanf(fptr, "%d", &n);
    printf("Number 5 = %d\n", n);

    fclose(fptr);
    return 0;
}