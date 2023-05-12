// print the number from 0 to 10
// 0 1 2 3 4 5 6 7 8 9 10

#include<stdio.h>

int main() {
    for(int i=0; i<=10; i=i+1){ // you can also use float or char as a iterator/loop-counter
        printf("%d\t", i);
    }

    printf("\n");
    for(float j=0.0; j<=10.0; j++){
        printf("%.2f\t", j);
    }

    printf("\n");
    for(char ch='A'; ch<='Z'; ch++){
        printf("%c  ", ch);
    }

    return 0;
}