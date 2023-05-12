#include<stdio.h>

void stringprint (char arr[]);

int main () {
    char name[100];
    
    // printf("Enter Name : ");
    // gets(name);

    printf("Enter Name : ");
    fgets(name, 100, stdin);
    printf("Your Name is : ");
    puts(name);
    return 0;
}

void stringprint (char arr[]){
    for (int i=0; arr[i] != '\0'; i++){
        printf("%c", arr[i]);
    }
}