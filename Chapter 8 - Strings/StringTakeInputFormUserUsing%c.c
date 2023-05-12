#include <stdio.h>
#include <string.h>

int main () {

    char str[100];
    char ch;
    int i = 0;

    printf("Enter the string : ");
    while (ch != '\n'){ 
        scanf("%c", &ch);
        str[i] = ch;
        i++;
    }
    str[i] = '\0'; // you have to add null character separately bcoz compiler does not add automatically
    puts(str);

    return 0;
} 