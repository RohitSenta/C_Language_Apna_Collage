#include<stdio.h>
#include<string.h>

int main(){
    char firstStr[] = "Apple";
    char secStr[] = "Banana";
    printf("%d\n" ,strcmp(firstStr, secStr)); // first string < second string
    
    char firstStr1[] = "Rohit";
    char secStr1[] = "Rohit";
    printf("%d\n" ,strcmp(firstStr1, secStr1)); // first string = second string

    char firstStr2[] = "Senta";
    char secStr2[] = "Rohit";
    printf("%d\n" ,strcmp(firstStr2, secStr2)); // first string > second string
    return 0; 
}