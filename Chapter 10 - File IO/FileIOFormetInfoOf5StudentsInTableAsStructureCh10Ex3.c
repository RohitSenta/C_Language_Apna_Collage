// Format the information of 5 students (name, marks, cgpa, course) in a table like structure in a file.

#include<stdio.h>

int main() {
    FILE *fptr;
    fptr = fopen("FileStudentInfo.txt", "w");

    char name1[100];
    int marks1;
    float cgpa1;
    char course1[100];
    
    char name2[100];
    int marks2;
    float cgpa2;
    char course2[100];

    char name3[100];
    int marks3;
    float cgpa3;
    char course3[100];

    char name4[100];
    int marks4;
    float cgpa4;
    char course4[100];

    char name5[100];
    int marks5;
    float cgpa5;
    char course5[100];

    printf("Enter details of student 1 : \n");
    printf("Enter name : ");
    scanf("%s", name1);
    printf("Enter marks : ");
    scanf("%d", &marks1);
    printf("Enter cgpa : ");
    scanf("%f", &cgpa1);
    printf("Enter course : ");
    scanf("%s", course1);
    printf("\n");

    printf("Enter details of student 2 : \n");
    printf("Enter name : ");
    scanf("%s", name2);
    printf("Enter marks : ");
    scanf("%d", &marks2);
    printf("Enter cgpa : ");
    scanf("%f", &cgpa2);
    printf("Enter course : ");
    scanf("%s", course2);
    printf("\n");

    printf("Enter details of student 3 : \n");
    printf("Enter name : ");
    scanf("%s", name3);
    printf("Enter marks : ");
    scanf("%d", &marks3);
    printf("Enter cgpa : ");
    scanf("%f", &cgpa3);
    printf("Enter course : ");
    scanf("%s", course3);
    printf("\n");

    printf("Enter details of student 4 : \n");
    printf("Enter name : ");
    scanf("%s", name4);
    printf("Enter marks : ");
    scanf("%d", &marks4);
    printf("Enter cgpa : ");
    scanf("%f", &cgpa4);
    printf("Enter course : ");
    scanf("%s", course4);
    printf("\n");

    printf("Enter details of student 5 : \n");
    printf("Enter name : ");
    scanf("%s", name5);
    printf("Enter marks : ");
    scanf("%d", &marks5);
    printf("Enter cgpa : ");
    scanf("%f", &cgpa5);
    printf("Enter course : ");
    scanf("%s", course5);
  
    fprintf(fptr, "Student1 details : \n");
    fprintf(fptr, "Student1 Name is : %s\n", name1);
    fprintf(fptr, "Student1 Marks is : %d\n", marks1);
    fprintf(fptr, "Student1 CGPA : %.2f\n", cgpa1);
    fprintf(fptr, "Student1 Course : %s\n\n", course1);

    fprintf(fptr, "Student2 details : \n");
    fprintf(fptr, "Student2 Name is : %s\n", name2);
    fprintf(fptr, "Student2 Marks is : %d\n", marks2);
    fprintf(fptr, "Student2 CGPA : %.2f\n", cgpa2);
    fprintf(fptr, "Student2 Course : %s\n\n", course2);
   
    fprintf(fptr, "Student3 details : \n");
    fprintf(fptr, "Student3 Name is : %s\n", name3);
    fprintf(fptr, "Student3 Marks is : %d\n", marks3);
    fprintf(fptr, "Student3 CGPA : %.2f\n", cgpa3);
    fprintf(fptr, "Student3 Course : %s\n\n", course3);
    
    fprintf(fptr, "Student4 details : \n");
    fprintf(fptr, "Student4 Name is : %s\n", name4);
    fprintf(fptr, "Student4 Marks is : %d\n", marks4);
    fprintf(fptr, "Student4 CGPA : %.2f\n", cgpa4);
    fprintf(fptr, "Student4 Course : %s\n\n", course4);

    fprintf(fptr, "Student5 details : \n");
    fprintf(fptr, "Student5 Name is : %s\n", name5);
    fprintf(fptr, "Student5 Marks is : %d\n", marks5);
    fprintf(fptr, "Student5 CGPA : %.2f\n", cgpa5);
    fprintf(fptr, "Student5 Course : %s\n\n", course5);


    fclose(fptr);
    return 0;
}