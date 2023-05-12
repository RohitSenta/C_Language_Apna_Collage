#include <stdio.h>

struct student {
    int roll;
    float cgpa;
    char name[100];
};

void printInfo(struct student s1);

int main(){
    struct student s1 = {1997, 9.1, "Rohit"};
    printInfo(s1);

    printf("Student.roll : %d\n", s1.roll); // it will ramain same as main function // call by reference

    s1.roll = 1880;  // now it will change in value of roll no
    printf("Student.roll : %d\n", s1.roll);

    return 0;
}

void printInfo(struct student s1) { // call by value
    printf("Strudent Information : \n");
    printf("Student.roll : %d\n", s1.roll);
    printf("Student.cgpa : %.2f\n", s1.cgpa);
    printf("Student.Name : %s\n\n", s1.name);

    s1.roll = 1770; // it will not change value of roll in main function // call by reference
}
