//Write a function that prints Namaste if user is indian and Bonjour if user is franch
#include<stdio.h>

void Namaste();
void Bonjour();

int main(){
    char ch;
    printf("Enter i for indian & f for french : ");
    scanf("%c", &ch);

    if(ch == 'i'){
        Namaste();
    } else {
        Bonjour();
    }
    return 0;
}

void Namaste(){
    printf("Namaste!!\n");
}
void Bonjour(){
    printf("Bonjour!!\n");
}