// calculate sum of all the numbers between 5 to 50 (includeing 5 and 50).

#include<stdio.h>

int main() {
    int sum = 0;

    for (int i=5; i<=50; i++){
        sum = sum + i;
    }

    printf("Total Sum is : %d\n", sum);

    return 0;
}