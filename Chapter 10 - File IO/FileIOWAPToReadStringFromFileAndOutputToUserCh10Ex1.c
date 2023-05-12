// Write a program to read a string from a file & output to the user.

#include<stdio.h>

int main() {

    FILE *fptr;
    char ch;
    fptr = fopen("FileNewfile.txt", "w");

    fprintf(fptr, "%c", 'R');
    fprintf(fptr, "%c", 'o');
    fprintf(fptr, "%c", 'h');
    fprintf(fptr, "%c", 'i');
    fprintf(fptr, "%c", 't');
    fprintf(fptr, "%c", ' ');
    fprintf(fptr, "%c", 'S');
    fprintf(fptr, "%c", 'e');
    fprintf(fptr, "%c", 'n');
    fprintf(fptr, "%c", 't');
    fprintf(fptr, "%c", 'a');

    fclose(fptr);

    fptr = fopen("FileNewfile.txt", "r");

    char arr[100];
    if (fptr == NULL){
        printf("File Does Not Exist !!\n");
    } 
    else {
        fscanf(fptr, "%c", &ch);
        printf("%c", ch);
        fscanf(fptr, "%c", &ch);
        printf("%c", ch);
        fscanf(fptr, "%c", &ch);
        printf("%c", ch);
        fscanf(fptr, "%c", &ch);
        printf("%c", ch);
        fscanf(fptr, "%c", &ch);
        printf("%c", ch);
        fscanf(fptr, "%c", &ch);
        printf("%c", ch);
        fscanf(fptr, "%c", &ch);
        printf("%c", ch);
        fscanf(fptr, "%c", &ch);
        printf("%c", ch);
        fscanf(fptr, "%c", &ch);
        printf("%c", ch);
        fscanf(fptr, "%c", &ch);
        printf("%c", ch);
        fscanf(fptr, "%c", &ch);
        printf("%c \n", ch);
        
    }

    fclose(fptr);

    fptr = fopen("FileNewfile.txt", "a");

    fputc(' ', fptr);
    fputc('H', fptr);
    fputc('e', fptr);
    fputc('l', fptr);
    fputc('l', fptr);
    fputc('o', fptr);
    fputc(' ', fptr);
    fputc('W', fptr);
    fputc('o', fptr);
    fputc('r', fptr);
    fputc('l', fptr);
    fputc('d', fptr);
    fputc('!', fptr);

    fclose(fptr);

    fptr = fopen("FileNewfile.txt", "r");

    ch = fgetc(fptr);
    while(ch != EOF){
        printf("%c", ch);
        ch = fgetc(fptr);
    }

    fclose(fptr);
   
    return 0;
}

