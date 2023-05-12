#include <stdio.h>

void printString (char arr[]);

int main (){
    char firstname[] = "ROHIT";
    char secondname[] = "SENTA";

    printString(firstname);
    printString(secondname);
    return 0;
}

void printString (char arr[]){

    for (int i=0; arr[i] != '\0'; i++){
        printf("%c", arr[i]);
    }
    printf("\n");
}