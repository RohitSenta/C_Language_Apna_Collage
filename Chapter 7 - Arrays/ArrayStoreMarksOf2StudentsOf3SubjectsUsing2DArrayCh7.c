// Write a program to store marks of two student of three subjects.

#include<stdio.h>

int main() {
    // 2 * 3 Array
    int marks[2][3];

    // marks of student 1
    marks[0][0] = 90;
    marks[0][1] = 85;
    marks[0][2] = 88;
    // marks of student 2
    marks[1][0] = 92;
    marks[1][1] = 95;
    marks[1][2] = 97;

    printf("Marks of Student 1 sub 2 is : %d", marks[0][1]);

    return 0;
}