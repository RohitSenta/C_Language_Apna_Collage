#include <stdio.h>

void printString (char arr[]);

int main (){
    
    char name[40];
    printf("Enter name : ");
    scanf("%s", name);
    printf("Your Name is : %s", name);
    return 0;
}

void printString(char arr[]){
    for (int i=0; arr[i] != '\0'; i++){
        printf("%c", arr[i]);
    }
}