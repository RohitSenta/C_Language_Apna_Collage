#include<stdio.h>
#include<string.h>

int main(){
    char oldStr[] = "oldString";
    char newStr[] = "newString";
    strcpy(newStr, oldStr); // copies value of old string to new string
    puts(newStr);
    return 0; 
} 