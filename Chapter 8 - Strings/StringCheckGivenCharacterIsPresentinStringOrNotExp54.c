#include <stdio.h>
#include <string.h>

void checkChar (char str[], char ch);

int main () {
    char str[] = "Rohit Senta";
    char ch = 'w';
    checkChar(str, ch);
    return 0;
} 
void checkChar (char str[], char ch){   
    for (int i=0; str[i] != '\0'; i++){
        if (str[i] == ch){
            printf("Character is Present !!");
            return;
        }
    }
    printf("Character is NOT Present !!!");
}