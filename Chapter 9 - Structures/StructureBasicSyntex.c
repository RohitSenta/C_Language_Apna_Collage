#include <stdio.h>
#include <string.h>

// User Defined
struct student {
    char Name[100];
    int RollNo;
    float CGPA;
};

int main (){
    struct student s1;
    //s1.Name = "Rohit"; // it is does not work due to array[] notation in variable declaration
    strcpy(s1.Name, "Rohit");
    s1.RollNo = 45;
    s1.CGPA = 8.5;

    printf("Student Name : %s\n", s1.Name);
    printf("Student Roll No : %d\n", s1.RollNo);
    printf("Student CGPA : %.2f\n", s1.CGPA);

    return 0;
}