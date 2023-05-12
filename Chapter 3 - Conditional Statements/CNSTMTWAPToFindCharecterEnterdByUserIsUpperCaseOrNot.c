// write a program to find if a character enterd by user is upper case or not.

#include<stdio.h>

int main() {
    char ch;
    printf("Enter charecter : ");
    scanf("%c", &ch);

    if (ch >= 'A' && ch <= 'Z'){
        printf("Upper Case \n");
    }
    else if (ch >= 'a' && ch <= 'z'){
        printf("Lower Case \n");
    } 
    else {
        printf("Not Enlish Letter \n");
    }


    return 0;
}