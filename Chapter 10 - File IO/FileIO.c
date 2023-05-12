#include <stdio.h>

int main (){
    FILE *fptr;
    fptr = fopen("FileTest.txt", "r");
    fclose(fptr);
    return 0;
}