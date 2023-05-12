// Write a program to convert all lowercase vowels to uppercase in a string.

#include<stdio.h>
#include<string.h>

void convertvowel(char vowel[]);

int main() {
    char vowel[100];
    printf("Enter String : ");
    // scanf("%s", vowel); 
    fgets(vowel, 100, stdin); // you can also use scanf function but it only consider first word

    convertvowel(vowel);
    printf("Converted Vowels is : ");
    for (int i=0; vowel[i] != '\0'; i++){
        printf("%c", vowel[i]);
    }
    return 0;
}

void convertvowel(char vowel[]){
    for(int i=0; vowel[i] != '\0'; i++){
        if(vowel[i] == 97 || vowel[i] == 101 || vowel[i] == 105 || vowel[i] == 111 || vowel[i] == 117){
            vowel[i] = vowel[i]-32;
        }
        else if(vowel[i] == 65 || vowel[i] == 69 || vowel[i] == 73 || vowel[i] == 79 || vowel[i] == 85){
            vowel[i] = vowel[i]+32;
        }
    }   
}