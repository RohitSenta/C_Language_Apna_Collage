#include <stdio.h>

struct student {
    int roll;
    float cgpa;
    char name[100];
};

int main() {
    struct student s1 = {1550, 8.4, "Rohit"};

    printf("Student roll no : %d\n", s1.roll);
    printf("Student cgpa : %.2f\n", s1.cgpa);
    printf("Student Name : %s\n", s1.name);

    return 0; 
}