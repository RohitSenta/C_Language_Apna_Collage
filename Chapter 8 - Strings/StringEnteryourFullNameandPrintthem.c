#include<stdio.h>

//void printName(char Arr[]);

int main (){
    // char firstName[40];
    // scanf("Enter Frist Name :%s", firstName);
    // printf("Your name is : %s", firstName);

    char fullName[100];
    printf("Enter Full Name : ");
    scanf("%s", fullName);
    printf("Your Full Name is %s", fullName);
    
    return 0;
}

// void printName(char Arr[]){
//     for (int i=0; Arr[i] != '\0'; i++){
//         printf("%c", Arr[i]);
//     }
// }