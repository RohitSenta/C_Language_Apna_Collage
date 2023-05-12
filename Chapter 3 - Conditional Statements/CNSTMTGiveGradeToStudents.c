// write a program to give grade to student 
// marks < 30 = C
// marks - 30 <= marks < 70 = B
// marls - 70 <= marks < 90 = A
// marks - 90 <= marks <= 100 = A+

#include<stdio.h>

int main() {
    int marks;
    printf("Enetr marks : ");
    scanf("%d", &marks);

    if (marks < 30){
        printf("Grade - C \n");
    }
    else if (marks >= 30 && marks < 70){
        printf("Grade - B \n");
    }
    else if (marks >= 70 && marks < 90){
        printf("Grade - A \n");
    }
    else if (marks >= 90 && marks <= 100){
        printf("Grade - A+ \n");
    }
    else {
        printf("Fail \n");
    }

    return 0;
}