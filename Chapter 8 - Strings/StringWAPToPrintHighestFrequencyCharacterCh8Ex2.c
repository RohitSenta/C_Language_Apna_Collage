// Write a program to print the highest frequency character in a string.

#include<stdio.h>
#include<string.h>

int main(){
    char arr[100];
    
    printf("Enter String : ");
    fgets(arr, 100, stdin);
    char ch;
    printf("Enetr Char-Freq to Check : ");
    scanf("%c", &ch);
    int count = 0;
    
    for (int i=0; arr[i] != '\0'; i++){
        if(arr[i] == ch){
            count++;
        }
    }
    printf("Frequency of Character %c is : %d", ch, count);
    return 0;
}