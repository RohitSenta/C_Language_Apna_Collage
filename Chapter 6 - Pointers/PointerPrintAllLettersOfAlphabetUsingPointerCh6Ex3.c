// Write a program in C to print all the letters in english alphabet using a pointer.

#include<stdio.h>

void printAlpha(char *ch);

int main(){
    char ch = 'A';
    printAlpha(&ch);
    return 0;
}

void printAlpha(char *ch){
    for(int i = *ch; i <= 'Z'; i++){
        printf("%c\n",*ch);
        *ch = *ch + 1;
    }

}