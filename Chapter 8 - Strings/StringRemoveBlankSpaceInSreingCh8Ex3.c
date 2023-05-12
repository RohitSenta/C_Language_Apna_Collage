// Write a program to remove blank spaces in a string.

#include<stdio.h>

int main () {
    char fullname[100];
    printf("Enter your full-name : ");
    fgets(fullname, 100, stdin);

    printf("Full Name Without Space is : ");
    for (int i=0; fullname[i] != '\0'; i++){
        if(fullname[i] != 32){
            printf("%c", fullname[i]);
        } 
        else {
            continue;
        }
    }
    return 0;
}