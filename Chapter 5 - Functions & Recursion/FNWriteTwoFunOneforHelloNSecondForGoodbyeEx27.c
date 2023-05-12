// write 2 function - one print Hello And second print Goodbye

#include<stdio.h>

//Function Declaration/Prototype
void printHello(); 
void printGoodbye();

//Function Call
int main(){
    printHello(); 
    printGoodbye();
    return 0;
}

// Function Defination
void printHello(){ 
    printf("Hello!!\n");
}
void printGoodbye(){
    printf("Goodbye!!\n");
}