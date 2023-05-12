// Switch Operation Day Using Charecter
#include<stdio.h>

int main() {
    char Day; // m-mon t-tues w-wed T-thus f-fri s-set S-sun
    printf("enter Day(1-7) : ");
    scanf("%c", &Day);

    switch (Day) {
        case 'm' : printf("Monday \n");
                break;
        case 't' : printf("Tuesdar \n");
                break;
        case 'w' : printf("Wednesday \n");
                break;
        case 'T' : printf("Thursday \n");
                break;
        case 'f' : printf("Friday \n");
                break;
        case 's' : printf("Saturday \n");
                break;
        case 'S' : printf("Sunday \n");
                break;
        default : printf("not a valid day \n");
    }

    return 0;
}