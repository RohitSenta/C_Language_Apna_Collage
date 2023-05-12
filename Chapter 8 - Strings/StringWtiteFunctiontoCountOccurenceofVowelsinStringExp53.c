#include <stdio.h>
#include <string.h>

int countVowels (char str[]);

int main () {
    char str[] = "Hello World";
    printf("Vowels are : %d", countVowels(str));
    return 0;
} 
int countVowels (char str[]){ 
    int count = 0;
    for (int i=0; str[i] != '\0'; i++){
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u'){
            count++;
        }
    }
    return count;
}