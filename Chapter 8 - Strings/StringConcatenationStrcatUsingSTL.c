#include<stdio.h>
#include<string.h>

int main(){
    char firstStr[100] = "Hello "; // must declare size of first string equal or mare than both the strings
    char secStr[] = "World";
    strcat(firstStr, secStr); // joint both string in firstString 
    printf("%s\n", firstStr);
    puts(firstStr);
    return 0; 
}