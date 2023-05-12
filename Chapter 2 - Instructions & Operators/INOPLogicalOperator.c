// logical operator  

#include<stdio.h>

int main(){
    
    // if ans = 1 true ans = 0 false 

    printf("%d\n", 5<4 && 6>5); // logical AND operator
    printf("%d\n", 5>4 && 3<5); // logical AND operator
    printf("%d\n", 5<3 || 5<7); // logical OR operator
    printf("%d\n", !(5<6 && 4<5)); // logical NOT operator
    
    return 0;
}