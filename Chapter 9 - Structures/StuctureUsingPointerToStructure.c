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
    printf("Student Name : %s\n\n", s1.name);

    struct student *ptr = &s1; // pointer of structure with value of s1

    printf("Student roll no with *ptr : %d\n", (*ptr).roll);
    printf("Student cgpa with *ptr : %.2f\n", (*ptr).cgpa);
    printf("Student Name with *ptr : %s\n\n", (*ptr).name);

    return 0; 
}