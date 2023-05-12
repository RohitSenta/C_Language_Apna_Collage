#include <stdio.h>
#include <string.h>

struct complex {
    int real;
    int img;
};

int main () {
    struct complex number1 = {5, 8};
    struct complex *ptr = &number1; // created pointer for arrow operator

    printf("Real part is : %d\n", ptr->real);
    printf("Img part is : %d\n", ptr->img);

    return 0;
}

