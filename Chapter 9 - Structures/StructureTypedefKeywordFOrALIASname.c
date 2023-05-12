#include <stdio.h>
#include <string.h>

typedef struct computerengineeringstudent {
    int roll;
    float cgpa;
    char name[100];
} coe;

int main() {
    coe s1;
    s1.roll = 1050;
    s1.cgpa = 9.3;
    strcpy(s1.name, "Rohit");

    printf("COE Student Roll No : %d\n", s1.roll);
    printf("COE Student CGPA : %.2f\n", s1.cgpa);
    printf("COE Student Name : %s\n", s1.name);

    return 0;
}