 // Make a system that can store information of all students, teachers & staff of your college in the form of structures.

// We can also do this program by usind Array of structure method by use of scanf function.
// and We also can print data by 2 differnt method 1) Pointer Method and 2) Arrow Operator Method 

#include<stdio.h>
#include<string.h>

typedef struct studentinfo { // Declaring Stucturen for Student info with Alias (typedef keyword)
    char name[100];
    char branch[100];
    int rollNo;
    int sem;
    float CGPA;
}stu;

typedef struct teatureinfo { // Declaring Stucturen for Teacher info with Alias (typedef keyword)
    char name[100];
    char depart[100];
    char sub[100];
    int salary;
}teach;

typedef struct staffinfo { // Declaring Stucturen for Staff info with Alias (typedef keyword)
    char name[100];
    char depart[100];
    int salary;

}stf;

int main(){
    
    // Appointing Info of Students
    stu stud1 = {"Parth Makwana", "Electrical", 8980, 5, 8.5};
    stu stud2 = {"Rohit Senta", "Electrical", 8140, 5, 9.5};
    stu stud3 = {"Nikhil Gangani", "Electrical", 8181, 5, 9.0};
    stu stud4 = {"Chirag Gujarati", "Electrical", 8050, 5, 9.2};
    stu stud5 = {"Himanshu Vaghasiya", "Machanical", 9020, 7, 9.1};
    stu stud6 = {"Pradip Usdadiya", "Machanical", 9140, 7, 9.6};
    stu stud7 = {"Dhaval Vachhani", "Machanical", 9150, 7, 8.4};

    // Appinting Info of Teachers
    teach sir1 = {"Harshar Bhakhar", "AC Machines", "Electrical", 40000};
    teach sir2 = {"Manan Desai", "Power System", "Electrical", 45000};
    teach sir3 = {"Hardik Baraiya", "Cantrol System", "Electrical", 50000};
    teach sir4 = {"Jayesh Patel", "Heat Transfer", "Machenical", 45000};
    teach sir5 = {"Dilip Patel", "Engineering Graphics", "Machanical", 50000};
    
    // Appointing Info of Staff
    stf staff1 = {"Ajay Gohil", "Administation Department", 20000};
    stf staff2 = {"Vipul Patel", "Admission Dipartment", 30000};
    stf staff3 = {"Yasit Tita", "Palcement Dipartment", 40000};


    printf("Collage Students Information As Below : \n\n");
    // Print Student Info
    printf("Student 1 Info : \n");
    printf("\tStudent name : %s\n\tDepartment : %s\n\tRollNumber : %d\n\tSemester : %d\n\tCGPA : %.2f\n", stud1.name, stud1.branch, stud1.rollNo, stud1.sem, stud1.CGPA);
    printf("Student 2 Info : \n");
    printf("\tStudent name : %s\n\tDepartment : %s\n\tRollNumber : %d\n\tSemester : %d\n\tCGPA : %.2f\n", stud2.name, stud2.branch, stud2.rollNo, stud2.sem, stud2.CGPA);
    printf("Student 3 Info : \n");
    printf("\tStudent name : %s\n\tDepartment : %s\n\tRollNumber : %d\n\tSemester : %d\n\tCGPA : %.2f\n", stud3.name, stud3.branch, stud3.rollNo, stud3.sem, stud3.CGPA);
    printf("Student 4 Info : \n");
    printf("\tStudent name : %s\n\tDepartment : %s\n\tRollNumber : %d\n\tSemester : %d\n\tCGPA : %.2f\n", stud4.name, stud4.branch, stud4.rollNo, stud4.sem, stud4.CGPA);
    printf("Student 5 Info : \n");
    printf("\tStudent name : %s\n\tDepartment : %s\n\tRollNumber : %d\n\tSemester : %d\n\tCGPA : %.2f\n", stud5.name, stud5.branch, stud5.rollNo, stud5.sem, stud5.CGPA);
    printf("Student 6 Info : \n");
    printf("\tStudent name : %s\n\tDepartment : %s\n\tRollNumber : %d\n\tSemester : %d\n\tCGPA : %.2f\n", stud6.name, stud6.branch, stud6.rollNo, stud6.sem, stud6.CGPA);
    printf("Student 7 Info : \n");
    printf("\tStudent name : %s\n\tDepartment : %s\n\tRollNumber : %d\n\tSemester : %d\n\tCGPA : %.2f\n", stud7.name, stud7.branch, stud7.rollNo, stud7.sem, stud7.CGPA);

    printf("\n\n");

    printf("Collage Teachers Info As Below : \n\n");
    // Print Teacher Info
    printf("Teacher 1 Info : \n");
    printf("\tTeacher name : %s\n\tTeaching Subject : %s\n\tDepartment : %s\n\tSalary : %d\n", sir1.name, sir1.sub, sir1.depart, sir1.salary);
    printf("Teacher 2 Info : \n");
    printf("\tTeacher name : %s\n\tTeaching Subject : %s\n\tDepartment : %s\n\tSalary : %d\n", sir2.name, sir2.sub, sir2.depart, sir2.salary);
    printf("Teacher 3 Info : \n");
    printf("\tTeacher name : %s\n\tTeaching Subject : %s\n\tDepartment : %s\n\tSalary : %d\n", sir3.name, sir3.sub, sir3.depart, sir3.salary);
    printf("Teacher 4 Info : \n");
    printf("\tTeacher name : %s\n\tTeaching Subject : %s\n\tDepartment : %s\n\tSalary : %d\n", sir4.name, sir4.sub, sir4.depart, sir4.salary);
    printf("Teacher 5 Info : \n");
    printf("\tTeacher name : %s\n\tTeaching Subject : %s\n\tDepartment : %s\n\tSalary : %d\n", sir5.name, sir5.sub, sir5.depart, sir5.salary);
    
    printf("\n\n");

    printf("Collage Other Staff Info As Below : \n\n");
    // Print Staff Info 
    printf("Staff 1 Info : \n");
    printf("\tStaff name : %s\n\tDepartmnet : %s\n\tSalary : %d\n", staff1.name, staff1.depart, staff1.salary);
    printf("Staff 2 Info : \n");
    printf("\tStaff name : %s\n\tDepartmnet : %s\n\tSalary : %d\n", staff2.name, staff2.depart, staff2.salary);
    printf("Staff 3 Info : \n");
    printf("\tStaff name : %s\n\tDepartmnet : %s\n\tSalary : %d\n", staff3.name, staff3.depart, staff3.salary);
    
    return 0;
}