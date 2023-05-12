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
    printf("Student CGPA : %.2f\n\n", s1.CGPA);

    struct student s2;
    strcpy(s2.Name, "Anil");
    s2.RollNo = 264;
    s2.CGPA = 9.3;

    printf("Student Name : %s\n", s2.Name);
    printf("Student Roll No : %d\n", s2.RollNo);
    printf("Student CGPA : %.2f\n\n", s2.CGPA);

    struct student s3;
    strcpy(s3.Name, "Nikhil");
    s3.RollNo = 122;
    s3.CGPA = 9.1;

    printf("Student Name : %s\n", s3.Name);
    printf("Student Roll No : %d\n", s3.RollNo);
    printf("Student CGPA : %.2f\n\n", s3.CGPA);

    return 0;
}