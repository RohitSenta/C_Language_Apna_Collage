// Replace the data in file of Q(a) with the number of vowels in the string.

#include<stdio.h>

int main() {
    FILE *fptr;
    fptr = fopen("FileNewfile.txt", "w");

    fprintf(fptr, "%c", 'A');
    fprintf(fptr, "%c", 'E');
    fprintf(fptr, "%c", 'I');
    fprintf(fptr, "%c", 'O');
    fprintf(fptr, "%c", 'U');

    fclose(fptr);


    fptr = fopen("FileNewfile.txt", "r");
    char ch;

    printf("%c\n", fgetc(fptr));
    printf("%c\n", fgetc(fptr));
    printf("%c\n", fgetc(fptr));
    printf("%c\n", fgetc(fptr));
    printf("%c\n", fgetc(fptr));

    fclose(fptr);

    return 0;
}