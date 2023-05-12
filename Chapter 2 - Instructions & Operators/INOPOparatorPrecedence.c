// Oparator Precedence
// *, /, % higher precedence 
// +, - lower precedence
// = lowest precedence

#include<stdio.h>

int main() {
    int a = 5 + 4 * 3; // * high precedence
    printf("%d\n", a);

    float b = 5 * 4.0 / 3.0 * 2; // same precedence // Associativity rule for same precedence
    printf("%f\n", b); // preform form left to right - Associativity rule

    return 0;
}