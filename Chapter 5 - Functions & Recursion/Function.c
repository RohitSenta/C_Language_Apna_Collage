#include<stdio.h>
//Function Declaration/Prototype
void printHello(); 

int main(){
    printHello(); //Function Call
    printHello();
    printHello(); //You can use same function for multiple times
    return 0;
}
// Function Defination
void printHello(){ 
    printf("Hello!!\n");
}