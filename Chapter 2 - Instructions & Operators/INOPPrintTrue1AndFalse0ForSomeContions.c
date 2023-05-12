// print true (1) or false (0) for following statement.
// 1) if it's sunday and it's snowing -> True
// 2) if it's monday or it's raining -> True
// 3) if nukmber is greater than 9 and less than 100 (2 digit number) -> True

#include<stdio.h>

int main () {

    int isSunday = 1;
    int isSnowing = 1;
    printf("%d\n", isSunday && isSnowing);

    int isMonday = 1;
    int isRaining = 0;
    printf("%d\n", isMonday || isRaining);

    int n;
    printf("enter number n : ");
    scanf("%d", &n);
    printf("%d\n", n>9 && n<100);


    return 0;
}