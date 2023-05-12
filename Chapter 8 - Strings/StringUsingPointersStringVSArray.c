#include<stdio.h>

void stringprint (char arr[]);

int main () {
    
    char *canChange = "Hello World";
    puts(canChange);
    canChange = "Hello";
    puts(canChange);

    // You cannot chenge value in Array Notation String 
    // char cannotChange[] = "Hello World";
    // puts(cannotChange);
    // channotChange = "Hello";
    // puts(cannotChange);
    
    return 0;
}

void stringprint (char arr[]){
    for (int i=0; arr[i] != '\0'; i++){
        printf("%c", arr[i]);
    }
}