// Make your own pow function.

#include<stdio.h>
#include<math.h>

int powFunc(int a, int b);

int main(){
    int x, y;
    printf("Enter value of x : ");
    scanf("%d", &x);
    printf("Enter value of y : ");
    scanf("%d", &y);

    printf("Power of %d by %d is : %d", x, y, powFunc(x, y));
    return 0;
}

int powFunc(int a, int b){
    return pow(a, b);
}