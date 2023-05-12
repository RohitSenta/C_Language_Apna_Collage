// Type Declaration - declare variable before using it.

#include <stdio.h>

int main (){
    int a = 5;
    int b = a;
    int c = b * 5;
    int d = 10, e;
    e = d;

    int x, y, z;
    x = y = z = 20;

    printf("%d\n", a);
    printf("%d\n", b);
    printf("%d\n", c);
    printf("%d\n", d);
    printf("%d\n", e);

    printf("%d\n", x);
    printf("%d\n", y);
    printf("%d\n", z);   
    
    return 0;
}