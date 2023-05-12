#include <stdio.h>
#include <string.h>

struct student {
    char name[100];
    int roll;
    float cgpa;
};

int main() {
    struct student ece[100];
    ece[0].roll = 1993;
    ece[0].cgpa = 8.9;
    strcpy(ece[0].name, "Rohit");

    printf("Ece 1st student name : %s\n", ece[0].name);
    printf("Ece 1st student roll no : %d\n", ece[0].roll);
    printf("Ece 1st student cgpa : %.2f\n", ece[0].cgpa);

    return 0;
}