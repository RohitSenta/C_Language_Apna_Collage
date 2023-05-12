#include <stdio.h>

int main() {
    FILE *fptr;
    fptr = fopen("FileTest.txt", "w");

    fprintf(fptr, "%c", 'R');
    fprintf(fptr, "%c", 'O');
    fprintf(fptr, "%c", 'H');
    fprintf(fptr, "%c", 'I');
    fprintf(fptr, "%c ", 'T');
    
    fclose(fptr);
    return 0;
}