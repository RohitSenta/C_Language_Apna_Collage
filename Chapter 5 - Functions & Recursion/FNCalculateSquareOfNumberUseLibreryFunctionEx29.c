// Use library function to calculate the square of number given by user.

#include<stdio.h>
#include<math.h>

int main (){
    int n;
    printf("Enter number : ");
    scanf("%d", &n);
    
    printf("%.2f", pow(n, 2));
    return 0;
}