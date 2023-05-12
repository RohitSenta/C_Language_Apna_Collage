// Precedence Example

#include<stdio.h>

int main() {

    int a = 5*2 - 5*3; 
    int b = 5*2 / 2*3; // associativity rule
    int c = 5*(2 / 2)*3; // perform first bracket() oparation
    int d = 5+2 / 2*3; // lesf associativity

    printf("%d\n", a);
    printf("%d\n", b);
    printf("%d\n", c);
    printf("%d\n",  d);
    
    return 0;
}