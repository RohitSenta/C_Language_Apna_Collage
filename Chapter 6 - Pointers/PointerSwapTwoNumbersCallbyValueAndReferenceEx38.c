#include <stdio.h>

void swap (int a, int b);
void _swap (int *a, int *b);

int main () {
    int x = 3, y = 5;
    swap(x, y);
    printf("x = %d & y = %d\n\n", x, y);

    swap(&x, &y);
    printf("x = %d & y = %d\n\n", x, y);

    return 0;
}
//call ny value 
void swap (int a, int b){
    int t = a;
    a = b;
    b = t;

    printf("a = %d & b = %d\n", a, b);
}
//call by referance
void _swap (int *a, int *b){
    int t = *a;
    *a = *b;
    *b = t;

    printf("a = %p & b = %p\n", *a, *b);
}