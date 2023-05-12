#include <stdio.h>

int main() {
    FILE *fptr;
    fptr = fopen("FileTest.txt", "a");

    fprintf(fptr, "%c", 'S');
    fprintf(fptr, "%c", 'E');
    fprintf(fptr, "%c", 'N');
    fprintf(fptr, "%c", 'T');
    fprintf(fptr, "%c", 'A');

    fclose(fptr);
    return 0;
}