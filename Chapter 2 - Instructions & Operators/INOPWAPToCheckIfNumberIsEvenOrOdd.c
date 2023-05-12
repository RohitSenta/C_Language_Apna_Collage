// write aprogram to check if number is even or odd.

#include<stdio.h>
// if ans = 1 -> Even
// if ans = 0 -> Odd 
int main() {
    int n;
    printf("Enter number n : ");
    scanf("%d",&n);
    printf("%d", n%2 == 0); 
    return 0;
}