#include <stdio.h>

int main() {
    FILE *fptr;
    fptr = fopen("FileStudent.txt", "w");

    char name[100];
    int age;
    float cgpa;

    printf("Enter Name : ");
    scanf("%s", name);
    printf("Enter Age : ");
    scanf("%d", &age);
    printf("Enter CGPA : ");
    scanf("%f", &cgpa);

    fprintf(fptr, "Student Name is : %s\n", name);
    fprintf(fptr, "Student Age is : %d\n", age);
    fprintf(fptr, "Student CGPA : %.2f\n", cgpa);
    
    fclose(fptr);
    return 0;
}