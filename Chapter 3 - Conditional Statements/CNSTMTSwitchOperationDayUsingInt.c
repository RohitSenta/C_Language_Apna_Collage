// Switch Operation Day Using 1-7 Integer
#include<stdio.h>

int main() {
    int Day; // 1-mon 2-tues 3-wed 4-thus 5-fri 6-set 7-sun
    printf("enter Day(1-7) : ");
    scanf("%d", &Day);

    switch (Day) {
        case 1 : printf("Monday \n");
                break;
        case 2 : printf("Tuesdar \n");
                break;
        case 3 : printf("Wednesday \n");
                break;
        case 4 : printf("Thursday \n");
                break;
        case 5 : printf("Friday \n");
                break;
        case 6 : printf("Saturday \n");
                break;
        case 7 : printf("Sunday \n");
                break;
        default : printf("not a valid day \n");
    }

    return 0;
}