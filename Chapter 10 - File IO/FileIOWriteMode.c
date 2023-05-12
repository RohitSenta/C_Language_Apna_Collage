#include <stdio.h>

int main() {
    FILE *fptr;
    fptr = fopen("Tests.txt", "w");
    if (fptr == NULL){ 
        printf("File doesn't exists!!\n");
    } else {
        fclose(fptr);
    }
    return 0;
}